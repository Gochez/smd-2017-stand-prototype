![Happy Punk Panda Logo](http://pnd.as/nerds/smd-2017/hpp-logo.png)

# PROTOTYPE: STAND SMD 2017


### What is it?
***
This package contains the circuit wiring, the arduino script and python code that was used to develop the Social Media Day 2017 stand prototype. The idea is a simple [rock, paper and scissors game](https://en.wikipedia.org/wiki/Rock%E2%80%93paper%E2%80%93scissors) that takes pushing buttons as input.


### Features
***
This project was made with an Arduino UNO. In the circuit, there are seven buttons labeled from 1 to 7, and each button represents the following:
* Buttons 1, 2 and 3: Rock, paper, scissors respectively for team 1.
* Buttons 4, 5 and 6: Rock, paper, scissors respectively for team 2.
* Button 7: Play.

### Rules
***

The game consists of n rounds (where n can be defined). For each round, a player must select one of three buttons (Representing rock, paper and scissors). This choice can only be made once, pushing other buttons after the first button is pushed will have no effects on the game. When both players are ready the system prints to the console each player's choice and the winning player. It also saves the score. 


Players have t seconds (where t can be defined) to make their choice for each round. If a player haven't make a choice by the time the t seconds are over, they picked "nothing", which ties to "nothing" and loses to everything else.

The winning player is the one with the highest score at the end of n rounds or the one who has enough score that there are not enough rounds remaining for the other player to catch up.

### Wiring
***

Each of the seven buttons is attached to a digital pin in the arduino. Aditionally, there's a 12v power supply for lighting the leds inside the buttons.

![Arduino and Circuit](http://pnd.as/nerds/smd-2017/smd-day-prototype-wiring.png)

### The Software
***

This project was made with Arduino communicating with Python through serial port.

The Arduino code can be found in this [ino document.](https://github.com/Gochez/smd-2017-stand-prototype/blob/master/smd-stand-prototype/smd-stand-prototype.ino)

The Python code can be found in this [jupyter notebook.](https://github.com/Gochez/smd-2017-stand-prototype/blob/master/smd-stand-prototype/smd-stand-prototype.ipynb)

The following table resumes the software and their recomended versions:


| Software      | Version     |
| ------------- |-------------|
| Arduino       | 1.8.2 |
| Python        | 2.7.11 64bit [GCC 4.2.1 (Apple Inc. build 5577) |
| IPython       | 5.0.0     |
| OS            | Darwin 15.6.0 x86_64 i386 64bit      |
| serial        | 3.1.1      |
| pandas        | 0.18.1    |

