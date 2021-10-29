# Electronic-Keyboard-with-Preset-songs-using-Arduino

The code aims to simulate an electonic keyboard on Arduino using pushbuttons and to play preloaded songs on it.

## Components and Connections

The components used are:
* Arduino Uno R3
* Pushbuttons (9)
* 1k ohm Resistors (10)
* Slide switch (1)
* Piezo buzzer (1)
* LED (1)

The connections on the Arduino should look like this:
![Arduino design](https://user-images.githubusercontent.com/90915008/139451560-f9c1eedf-ad10-4274-845b-2cdaf9146a98.png)

## Adding your own songs

To add your own songs, you must find or create an integer array of the song consisting of its notes' frequencies and duration (You can dierctly give the notes instead of frequencies since the code pre-defined the notes as their frequencies). This can be easily found on the internet by searching for 'Song Name' + 'Arduino'. After creating the array, add the tempo of the song as an integer as the first element of the array.
Then update the size, melodies and names arrays and you are ready to go!

## How to use

The 8 pushbuttons on the upper breadboard represent the C major scale (can be changes in code) and can be played as a normal keyboard.  
The single pushbutton on the lower breadboard will play a random song from th collection of preloaded songs on being pressed.  
The LED will glow when a keyboard button is pushed or a song is being played.  
The slide switch will stop the song when set to HIGH, and will not interfere when set as LOW.  
The name of the note or song being played will be displayed in the serial terminal.  

## How to play a particular song

If instead of random songs, a particular song is needed to be played, then simply change the parameter passed to the play_melody function int the final while loop to the index of the song in the melodies array.  
The index passed in the names array in the final while loop will determine the name being displayed on the serial terminal. Change that to the index of song in names array if a particular song name needs to be displayed.
