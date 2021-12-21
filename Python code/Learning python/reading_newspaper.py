import time
import json
import requests
import pyttsx3

# from win32com.client import Dispatch
# def speak(str):
#     speak  = Dispatch("SAPI.SpVoice")
#     speak.Speak(str)
engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[2].id)

def speak(str):
    engine.say(str)
    engine.runAndWait()

if __name__ == '__main__':
    speak("Good Morning. News for today is ....")
    url = "https://newsapi.org/v2/top-headlines?country=in&apiKey=0b53a90151b14bffaaa9832f748aa03d"
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
    finally:
        speak("Thanks for listening")
    