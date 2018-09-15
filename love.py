#-*-coding: utf-8 -*-
from random import randrange as r
from time import sleep
import os
os.system('clear')
add = ["is a marvelous person",
        "is incredibly beautiful",
        "is clever",
        "is hot", 
        "is sexier than The Rock", 
        "is a great programmer",
        "will add @srn_tommy on snapchat",
        "can bike without the casters",
        "is clearly in my top 5 'Most handsome person in the 42 piscine'",
        "really wants to take a coffee with me",
        "has an awesome bottom",
        "will mark me really good",
        "will not find any error in my code",
        "has all the days of the piscine validated at 100/100",
        "has a technic of coding that turn me on",
        "is really A E S T H E T I C",
        ", you scared the shit outta me when i saw you for the first time",
        "is the most beautiful person in the piscine",
        ", give me your numb- oh wait there's the intranet",
        "send me a mail ;)",
        ", nice ass ( ͡° ͜ʖ ͡° )",
        "is sexy as hell",
        ", u cute"
        ]

colors = ['\033[95m','\033[94m','\033[93m','\033[92m','\033[91m']
name = str(raw_input("c koi le blaz "))
name = name.capitalize()
while 1:
    c = r(len(colors))
    i = r(len(add))
    print('\n'+colors[c]+name+' '+add[i]+'.')
    sleep(4)
