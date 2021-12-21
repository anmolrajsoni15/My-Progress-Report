# import time
import json
import requests
import pyttsx3

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[2].id)

def speak(str):
    engine.say(str)
    engine.runAndWait()

if __name__ == '__main__':
    speak("Good Morning. Weather outside is ....")
    url = "https://api.weatherapi.com/v1/current.json?key=57740629c9d7490aa6732012212111&q=Ranchi &aqi=no"
    weather = requests.get(url).text
    loadit = json.loads(weather)
    take = loadit['current']
    speak(f"{take['temp_c']} degree celcius")
    
