from urllib.parse import quote, quote_plus
import pyttsx3
import time
import json
import requests
import datetime
import speech_recognition as sr
import wikipedia
# import webbrowser
import os
# import smtplib
import pywhatkit as kit
import pyjokes
import ctypes
import winshell
import psutil
import pywikihow
import speedtest
import win32com.client as winc1
# from pytube import YouTube

contacts = {'''You can put contacts here as a dictonary :- "name":"phone no." '''}

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
# print(voices[2])
engine.setProperty('voice', voices[3].id)
engine.setProperty('rate', 180)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def wishMe():
    weather_api = "Your api key"
    #Get your api key from weatherapi.com
    hour = int(datetime.datetime.now().hour)
    if hour >= 0 and hour < 12:
        speak("Good Morning Sir!")
        strTime = datetime.datetime.now().strftime("%H:%M:%S")
        speak(f"Its {strTime} morning")
        url = f"https://api.weatherapi.com/v1/current.json?key={weather_api}&q=Ranchi &aqi=no"
        weather = requests.get(url).text
        loadit = json.loads(weather)
        take = loadit['current']
        take2 = take['condition']
        speak(f"Sir it is {take2['text']} right now and the temperature is {take['temp_c']} degree celcius")
    elif hour >= 12 and hour < 18:
        speak("Good Afternoon Sir!")
    else:
        speak("Good Evening Sir!")
    speak("I am Jarvis. Please tell me how may I help you")

def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening.....")
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognizing....")
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")

    except Exception as e:
        print(e)
        return "None"
    return query

def search(str):
    for key,value in contacts.items():
        if key in str:
            number = value
            break
    return number

def TaskExecution():
    wishMe()
    while True:
        query = takeCommand().lower()
        if 'wikipedia' in query:
            speak("Searching the result on wikipedia...")
            query = query.replace("wikipedia", "")
            results = wikipedia.summary(query, sentences = 2)
            speak("According to Wikipedia")
            print(results)
            speak(results)

        elif 'the weather' in query:
            weather_api = "Your api key"
            #Get your api key from weatherapi.com
            url = f"https://api.weatherapi.com/v1/current.json?key={weather_api}&q=Ranchi &aqi=no"
            weather = requests.get(url).text
            loadit = json.loads(weather)
            take = loadit['current']
            take2 = take['condition']
            speak(f"Sir it is {take2['text']} right now, and the temperature is {take['temp_c']} degree celcius")

        elif 'news' in query:
            news_api = "your news api key"
            #get your news api key form newsapi.com
            speak("Fine Sir. Here are some top headlines for you")
            url = f"https://newsapi.org/v2/top-headlines?country=in&apiKey={news_api}"
            news = requests.get(url).text
            loadit = json.loads(news)
            take = loadit['articles']
            i = 1
            try:
                for article in take:
                    print(f"{i}. {article['title']}")
                    speak(article['title'])
                    time.sleep(0.5)
                    print(f" {article['description']}")
                    speak(article['description'])
                    print(article['url'])
                    print(article['publishedAt'])
                    print("\n")
                    time.sleep(1)
                    i+=1
                    if i>5:
                        break
            finally:
                speak("Thanks for listening")
            # readNewspaper()

        elif 'in youtube' in query or 'you tube' in query:
            #get api key from https://serpapi.com
           api_key = "api key"
           speak("Playing sir")
           url = f"https://serpapi.com/search.json?engine=youtube&search_query={query}&api_key={api_key}"
           result = requests.get(url).text
           loadit = json.loads(result)
           take = loadit['video_results']
           for titles in take:
               print(titles['title'])
               break
           position_on_page = 1
           take0 = take[position_on_page]
           take2 = take0['link']
           os.startfile(take2)           

        elif 'query mode' in query:
            #get api key from https://serpapi.com
            api_key = "api key"
            speak("Activated Sir. Ready to answer your questions")
            while True:
                question = takeCommand()
                if 'back' in query:
                    speak("OK sir")
                    break
                else:
                    url = f"https://serpapi.com/search.json?q={question}&hl=en&gl=in&api_key={api_key}"
                    result = requests.get(url).text
                    loadit = json.loads(result)
                    take = loadit['knowledge_graph']
                    print(take['title'])
                    speak(take['title'])
                    print(take['type'])
                    speak(take['type'])
                    print(take['description'])           
                    speak(take['description'])           

        elif 'lock window' in query:
            speak("locking the device...")
            ctypes.windll.user32.LockWorkStation()

        elif 'battery' in query:
            battery = psutil.sensors_battery()
            percen = battery.percent
            speak(f"Sir our system has {percen} percentage battery")
            if percen <= 30:
                speak("Sir the system battery is below 30 percent. Please connect the charger")

        elif 'shut down' in query:
            speak("closing the system within 10 seconds")
            os.system("shutdown /s /t 10")

        elif 'restart' in query:
            speak("restarting the system within 10 seconds")
            os.system("shutdown /r /t 10")

        elif 'jokes' in query:
            speak(pyjokes.get_joke())

        elif 'open youtube' in query:
            speak("Opening Sir")
            path = r"C:\Users\Anmol Raj Soni\OneDrive\Desktop\YouTube.lnk"
            os.startfile(path)

        elif 'open google' in query:
            speak("Opening Sir")
            path = r"C:\Users\Anmol Raj Soni\OneDrive\Desktop\Google.lnk"
            os.startfile(path)

        elif 'open gmail' in query:
            speak("Opening Sir")
            path = r"C:\Users\Anmol Raj Soni\OneDrive\Desktop\Gmail.lnk"
            os.startfile(path)

        elif 'the time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"Sir, The time is {strTime}")

        elif 'open code' in query:
            speak("Opening Sir")
            path = r"C:\Users\Anmol Raj Soni\AppData\Local\Programs\Microsoft VS Code\Code.exe"
            os.startfile(path)

        elif 'open whatsapp' in query:
            speak("Opening Sir")
            path = r"C:\Users\Anmol Raj Soni\OneDrive\Desktop\WhatsApp Desktop.lnk"
            os.startfile(path)

        elif 'open notepad' in query:
            speak("Opening Sir")
            path = r"C:\Windows\notepad.exe"
            os.startfile(path)

        elif 'open explorer' in query:
            speak("Opening Sir")
            path = r"C:\Users\Anmol Raj Soni\AppData\Local\Microsoft\Windows\WinX\Group2\3 - Windows Explorer.lnk"
            os.startfile(path)

        elif 'open paint' in query:
            speak("Opening Sir")
            path = r"C:\Users\Anmol Raj Soni\AppData\Local\Microsoft\WindowsApps\Microsoft.Paint_8wekyb3d8bbwe\mspaint.exe"
            os.startfile(path)
            

        elif 'open power point' in query:
            speak("Opening Sir")
            path = r"C:\ProgramData\Microsoft\Windows\Start Menu\Programs\PowerPoint.lnk"
            os.startfile(path)

        elif 'open ms word' in query:
            speak("Opening Sir")
            path = r"C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Word.lnk"
            os.startfile(path)

        elif 'open brave' in query:
            speak("Opening Sir")
            path = r"C:\Users\Anmol Raj Soni\OneDrive\Desktop\Brave.lnk"
            os.startfile(path)

        elif 'open google chrome' in query:
            speak("Opening Sir")
            path = r"C:\Users\Anmol Raj Soni\OneDrive\Desktop\Google Chrome.lnk"
            os.startfile(path)

        elif 'open excel' in query:
            speak("Opening Sir")
            path = r"C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Excel.lnk"
            os.startfile(path)

        elif 'open powershell' in query:
            speak("Opening Sir")
            path = r"C:\ProgramData\Microsoft\Windows\Start Menu\Programs\PowerShell\PowerShell 7 (x64).lnk"
            os.startfile(path)

        elif 'open antivirus' in query:
            speak("Opening Sir")
            path = r"C:\ProgramData\Microsoft\Windows\Start Menu\Programs\McAfee\McAfee AntiVirus.lnk"
            os.startfile(path)

        elif 'activate how to do mod' in query:
            print("Activating how to do mode sir")
            speak("Activated sir!")
            speak("What do you want to know sir?")
            question = takeCommand()
            max_results = 1
            how_to = pywikihow.search_wikihow(question, max_results)
            assert len(how_to) == 1
            how_to[0].print()
            speak(how_to[0].summary)

        #in review
        elif 'play music' in query:
            musicDir = r"C:\Users\Anmol Raj Soni\Music"
            songs = os.listdir(musicDir)
            os.startfile(os.path.join(musicDir, songs[0]))


        elif 'photos' in query:
            photoDir = r"E:\New folder\family"
            photos = os.listdir(photoDir)
            os.startfile(os.path.join(photoDir, photos[0]))
            time.sleep(4)
            os._exit()

        elif 'search on web' in query:
            speak("ok sir")
            question = takeCommand()
            kit.search(question)

        elif 'whatsapp message' in query:
            r = search(query)
            try:
                speak("What should I send Sir?")
                message = takeCommand()
                kit.sendwhatmsg_instantly(f"+91{r}", message)
                speak("Message sent")
            except Exception as e:
                speak("This person is not present in your contact list")

        elif 'take screenshot' in query:
            kit.take_screenshot(delay=0.5)

        elif 'twitter' in query:
             path = r"C:\Users\Anmol Raj Soni\OneDrive\Desktop\Twitter.lnk"
             os.startfile(path)
                
        elif 'instagram' in query:
            path = r"C:\Users\Anmol Raj Soni\OneDrive\Desktop\Instagram.lnk"
            os.startfile(path)

        elif 'internet speed' in query:
            speak("Checking sir, it mite take few seconds")
            st = speedtest.Speedtest()
            dl = st.download()
            dl_mb = dl/8388608
            up = st.upload()
            up_mb = up/8388608
            speak(f"Sir you have {round(dl_mb,3)} mb per second download speed and {round(up_mb, 3)} mb per second upload speed")

        elif 'write a note' in query:
            speak("What should I write sir")
            note = takeCommand()
            file = open('jarvis.txt', 'w')
            speak("Should I include date sir?")
            confirm = takeCommand()
            if confirm == "yes":
                strTime = datetime.datetime.now().strftime("%H:%M:%S")
                file.write(f"{strTime} :- ")
                file.write(note)
                file.close()
            else:
                file.write(note)
                file.close()

        elif 'show note' in query:
            speak("Showing note...")
            file = open('jarvis.txt', 'r')
            print(file.read())
            speak(file.read(6))

        elif 'recycle bin' in query:
            winshell.recycle_bin().empty(confirm = False, show_progress=False, sound=True)
            speak("Cleared recycle bin")

        elif 'how are you' in query or 'what about you' in query:
            speak("I am fine sir. What about you?")

        elif 'fine' in query or 'ok' in query:
            speak("Nice to hear sir. Hope you always remain fit and fine")

        elif 'thanks' in query or 'thank you' in query:
            speak("Most welcome sir...")

        elif 'made you' in query or 'created you' in query:
            speak("I am created by Anmol, who is an awesome guy")

        elif 'google assistant' in query or 'apple siri' in query or 'amazon alexa' in query:
            speak("I don't compare with them because All AI assistants are my friend")

        elif 'humans' in query:
            speak("Humans are very nice living being. I respect them")

        elif 'who are you' in query:
            speak("Sir my name is Jarvis. I am a simple AI assistant")

        elif 'love you' in query or 'hate you' in query:
            speak("Currently I don't understand the emotions, but soon I will be able to answer you")

        elif 'sleep' in query or 'please wait' in query:
            if 'wait' in query:
                speak("Ok, Sir")
            elif 'sleep' in query:
                speak("I am going to sleep Sir. You can call me anytime...")
            break

        elif 'goodbye' in query or 'exit' in query or 'quit' in query:
            speak("Thanks sir for using me as your assistant. See you next time. Bye!")
            quit()

if __name__ == '__main__':
    while True:
        command = takeCommand()
        if 'wake up' in command or 'resume' in command or 'hello' in command or 'good morning' in command:
            TaskExecution()
        elif 'goodbye' in command or 'exit' in command or 'quit' in command:
            speak("Thanks sir for using me as your assistant. See you next time. Bye!")
            quit()
