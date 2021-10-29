//defining notes and their frequencies for tone function

#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978
#define REST 0
#define ACTIVATED LOW

/*preloaded songs as integer arrays. First element is the tempo
followed by the notes and duration of that note*/

int melody1[] = 
{
  100,
  REST,2,
  NOTE_FS4,2, NOTE_E4,2,
  NOTE_D4,2, NOTE_CS4,2,
  NOTE_B3,2, NOTE_A3,2,
  NOTE_B3,2, NOTE_CS4,2,
  NOTE_D4,4, NOTE_FS4,8, NOTE_G4,8, NOTE_A4,4, NOTE_FS4,8, NOTE_G4,8,
  NOTE_A4,4, NOTE_B3,8, NOTE_CS4,8, NOTE_D4,8, NOTE_E4,8, NOTE_FS4,8, NOTE_G4,8,
  NOTE_FS4,4, NOTE_D4,8, NOTE_E4,8, NOTE_FS4,4, NOTE_FS3,8, NOTE_G3,8,
  NOTE_A3,8, NOTE_G3,8, NOTE_FS3,8, NOTE_G3,8, NOTE_A3,2,
  NOTE_G3,4, NOTE_B3,8, NOTE_A3,8, NOTE_G3,4, NOTE_FS3,8, NOTE_E3,8,
  NOTE_FS3,4, NOTE_D3,8, NOTE_E3,8, NOTE_FS3,8, NOTE_G3,8, NOTE_A3,8, NOTE_B3,8,
  NOTE_G3,4, NOTE_B3,8, NOTE_A3,8, NOTE_B3,4, NOTE_CS4,8, NOTE_D4,8,
  NOTE_A3,8, NOTE_B3,8, NOTE_CS4,8, NOTE_D4,8, NOTE_E4,8, NOTE_FS4,8, NOTE_G4,8, NOTE_A4,2
  
};

//Negative notes denote dotted notes

int melody2[] =
{
  80,REST,2,
  NOTE_E5, 16, NOTE_DS5, 16,
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, -8, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, -8, NOTE_E4, 16, NOTE_GS4, 16, NOTE_B4, 16,
  NOTE_C5, 8,  REST, 16, NOTE_E4, 16, NOTE_E5, 16,  NOTE_DS5, 16,
  NOTE_E5, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_C5, 16,
  NOTE_A4, -8, NOTE_C4, 16, NOTE_E4, 16, NOTE_A4, 16,
  NOTE_B4, -8, NOTE_E4, 16, NOTE_C5, 16, NOTE_B4, 16, 
  NOTE_A4 , 4, REST, 8
  
};

int melody3[] = {

  140,REST,2,
  NOTE_C4,4, NOTE_C4,8,
  NOTE_D4,-4, NOTE_C4,-4, NOTE_F4,-4,
  NOTE_E4,-2, NOTE_C4,4, NOTE_C4,8,
  NOTE_D4,-4, NOTE_C4,-4, NOTE_G4,-4,
  NOTE_F4,-2, NOTE_C4,4, NOTE_C4,8,
  NOTE_C5,-4, NOTE_A4,-4, NOTE_F4,-4,
  NOTE_E4,-4, NOTE_D4,-4, NOTE_AS4,4, NOTE_AS4,8,
  NOTE_A4,-4, NOTE_F4,-4, NOTE_G4,-4,
  NOTE_F4,-2
 
};

int melody4[] = {

  144,
  REST, 2, NOTE_D4, 4,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_C5, -2,
  NOTE_A4, -2,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_F4, 2, NOTE_GS4, 4,
  NOTE_D4, -1,
  NOTE_D4, 4,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,//10
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_B4, 4,
  NOTE_G4, -1

};

int melody5[] = {

  140, REST,2,
  NOTE_C5,4,//1
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2
  
};

int melody6[] = 
{
  200,REST,2,
  NOTE_E5,8, NOTE_E5,8, REST,8, NOTE_E5,8, REST,8, NOTE_C5,8, NOTE_E5,8,//1
  NOTE_G5,4, REST,4, NOTE_G4,8, REST,4,
  NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4,
  NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
  NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
  REST,8, NOTE_E5,4,NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,
  NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4,
  NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
  NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
  REST,8, NOTE_E5,4,NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,  
  REST,4, NOTE_G5,8, NOTE_FS5,8, NOTE_F5,8, NOTE_DS5,4, NOTE_E5,8,//7
  REST,8, NOTE_GS4,8, NOTE_A4,8, NOTE_C4,8, REST,8, NOTE_A4,8, NOTE_C5,8, NOTE_D5,8,
  REST,4, NOTE_DS5,4, REST,8, NOTE_D5,-4,
  NOTE_C5,2, REST,2
};

//arrays for size and names along with pointer array to store their address

int size[] = {sizeof(melody1), sizeof(melody2), sizeof(melody3), sizeof(melody4), sizeof(melody5), sizeof(melody6)};
int *melodies[] = {melody1, melody2, melody3, melody4, melody5, melody6};
char* names[] = {"Canon in D", "Fur Elise", "Happy Birthday", "Harry Potter Theme", "Merry Christmas", "Super Mario Bros Theme"};

//initializing pin numbers

const int PIEZO = 10;
const int LED = 13;

const int BUTTON_C5 = 9;
const int BUTTON_B = 8;
const int BUTTON_A = 7;
const int BUTTON_G = 6;
const int BUTTON_F = 5;
const int BUTTON_E = 4;
const int BUTTON_D = 3;
const int BUTTON_C = 2;

const int interruptPin = 12;

const int BUTTON_MEL = 11;

//range is number of songs

int range = sizeof(melodies)/sizeof(melodies[0]);
int divider = 0, noteDuration = 0;

//function to play the preloaded songs

void play_melody(int a)
{
  	int *melody = melodies[a];
  	int tempo = melody[0];
  
  //Calculating number of notes in song
    int notes = ((size[a] / sizeof(melody[0])) - 1) / 2;
  
  //Calculating note duration for a wholenote for 1 minute (60000 ms) and 4/4 beat)
  	int wholenote = (60000 * 4) / tempo;
  
  	for (int Note = 1; Note < notes * 2; Note += 2) 
    {
      //Slide switch condition
      	if(digitalRead(interruptPin) == HIGH)
          	break;
      
      //Calculating Duration of playing note
    	divider = melody[Note + 1];
    	if (divider > 0) 
        {		
          noteDuration = (int)((wholenote) / divider);
    	} 
      	else if (divider < 0) //negative duration indicates dotted note
        {
      	noteDuration = (int)((wholenote) / (-divider));
      	noteDuration *= 1.5;
    	}
      	else  //Standard case as quarter note
        {
          noteDuration = (int)(wholenote / 4);
        }

      //duration is multiplied by 0.9 to get a bit more pause between notes
    	tone(PIEZO, melody[Note], (noteDuration*0.9));
    	delay(noteDuration);    
    	noTone(PIEZO);
     }
}

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON_C, INPUT);
  digitalWrite(BUTTON_C,HIGH);
  pinMode(BUTTON_D, INPUT);
  digitalWrite(BUTTON_D,HIGH);
  pinMode(BUTTON_E, INPUT);
  digitalWrite(BUTTON_E,HIGH);
  pinMode(BUTTON_F, INPUT);
  digitalWrite(BUTTON_F,HIGH);
  pinMode(BUTTON_G, INPUT);
  digitalWrite(BUTTON_G,HIGH);
  pinMode(BUTTON_A, INPUT);
  digitalWrite(BUTTON_A,HIGH);
  pinMode(BUTTON_B, INPUT);
  digitalWrite(BUTTON_B,HIGH);
  pinMode(BUTTON_C5, INPUT);
  digitalWrite(BUTTON_C5,HIGH);
  pinMode(BUTTON_MEL, INPUT);
  digitalWrite(BUTTON_MEL,HIGH);
  
  digitalWrite(LED,LOW);
  
  pinMode(interruptPin, INPUT);
  
  //function for random seed to get random sequence of songs in every simulation
  randomSeed(analogRead(0));
}

void loop()
{
  
  //loops for 8 keyboard notes
  //Activated is defined as LOW in the #define area
   while(digitalRead(BUTTON_C) == ACTIVATED)
  {
    tone(PIEZO,NOTE_C4);
    digitalWrite(LED,HIGH);
    Serial.println("C4");
    Serial.print('\n');
  }
  
  while(digitalRead(BUTTON_D) == ACTIVATED)
  {
    tone(PIEZO,NOTE_D4);
    digitalWrite(LED,HIGH);
    Serial.println("D4");
    Serial.print('\n');
  }

  while(digitalRead(BUTTON_E) == ACTIVATED)
  {
    tone(PIEZO,NOTE_E4);
    digitalWrite(LED,HIGH);
    Serial.println("E4");
    Serial.print('\n');
  }
  
  while(digitalRead(BUTTON_F) == ACTIVATED)
  {
    tone(PIEZO,NOTE_F4);
    digitalWrite(LED,HIGH);
    Serial.println("F4");
    Serial.print('\n');
  }
  
  while(digitalRead(BUTTON_G) == ACTIVATED)
  {
    tone(PIEZO,NOTE_G4);
    digitalWrite(LED,HIGH);
    Serial.println("G4");
    Serial.print('\n');
  }
  
  while(digitalRead(BUTTON_A) == ACTIVATED)
  {
    tone(PIEZO,NOTE_A4);
    digitalWrite(LED,HIGH);
    Serial.println("A4");
    Serial.print('\n');
  }
  
  while(digitalRead(BUTTON_B) == ACTIVATED)
  {
    tone(PIEZO,NOTE_B4);
    digitalWrite(LED,HIGH);
    Serial.println("B4");
    Serial.print('\n');
  }
  
  while(digitalRead(BUTTON_C5) == ACTIVATED)
  {
    tone(PIEZO,NOTE_C5);
    digitalWrite(LED,HIGH);
    Serial.println("C5");
    Serial.print('\n');
  }
  
  //loop to play random preloaded song
  while(digitalRead(BUTTON_MEL) == ACTIVATED)
  {
   	int num = random(0, range);
    digitalWrite(LED,HIGH);
    Serial.println(names[num]);
    Serial.print('\n');
    play_melody(num);
  }
  
  noTone(PIEZO);
  digitalWrite(LED,LOW);

}
