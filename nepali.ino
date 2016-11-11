#include "pitches.h"
#define NO_SOUND 0 

// DPin where your buzzer is connected
buzzerPin = 3

int melody[] = {
  NOTE_AS4,NOTE_A4,NOTE_G4,NOTE_F4, NOTE_G4,NOTE_B4,NOTE_C5,NOTE_D5, NOTE_B4,NOTE_F4,NOTE_G4,NOTE_F4, NOTE_G4,NOTE_F4,NOTE_D4, NOTE_B3,NOTE_C4,NOTE_D4,NOTE_F4, NOTE_G4,NOTE_B4,NOTE_C5,NOTE_D5, NOTE_B4,NOTE_A4,NOTE_G4,NOTE_A4,NOTE_F4, 
  NOTE_G4,NOTE_G4,NOTE_G4,NO_SOUND,  NOTE_D4,NOTE_D4,NOTE_G4,NOTE_G4, NOTE_F4,NOTE_G4,NOTE_F4,NOTE_D4,NOTE_D4, NOTE_G4,NOTE_G4,NOTE_D5,NOTE_C5, NOTE_B4,NOTE_G4,NOTE_C5, NOTE_D5,NOTE_C5,NOTE_B4,NOTE_C5,NOTE_B4,NOTE_G4, NOTE_B4,NOTE_G4,NOTE_F4,NOTE_G4,NOTE_F4,NOTE_D4, 
  NOTE_F4,NOTE_D5,NOTE_C5,NOTE_G4, NOTE_B4,NOTE_B4,NOTE_B4, NOTE_B4,NOTE_A4,NOTE_G4,NOTE_F4, NOTE_G4,NOTE_B4,NOTE_C5,NOTE_D5, NOTE_B4,NOTE_A4,NOTE_G4,NOTE_F4, NOTE_G4,NOTE_F4,NOTE_D4, NOTE_B3,NOTE_C4,NOTE_D4,NOTE_F4, NOTE_G4,NOTE_B4,NOTE_C5,NOTE_D5,
  NOTE_AS4,NOTE_A4,NOTE_G4,NOTE_A4,NOTE_F4, NOTE_G4,NOTE_G4,NOTE_G4, NOTE_D4,NOTE_D4,NOTE_G4,NOTE_G4, NOTE_F4,NOTE_G4,NOTE_F4,NOTE_D4,NOTE_D4, NOTE_G4,NOTE_G4,NOTE_D5,NOTE_F4, NOTE_B4,NOTE_G4,NOTE_C5, NOTE_D5,NOTE_C5,NOTE_B4,NOTE_C5,NOTE_B4,NOTE_G4,
  NOTE_AS4,NOTE_G4,NOTE_F4,NOTE_G4,NOTE_F4,NOTE_D4, NOTE_G4,NOTE_D5, NOTE_C5,NOTE_B4,NOTE_G4, NOTE_B4, NOTE_B4,
  NO_SOUND
};

// note duration: 1 = whole note, 2 = half note, 4 = quarter note, 8 = eighth note, etc.

int noteDurations[] = {
  4,8,4,8, 4,8,4,8, 4,8,4,8, 4,8,3, 4,8,4,8, 4,8,4,8, 4,8,8,8,8,
  4,8,3,16, 4,8,4,8, 8,8,8,4,8, 4,8,4,8, 4,8,3, 8,8,8,8,8,8, 8,8,8,8,8,8,
  4,8,4,8, 4,8,3, 4,8,4,8, 4,8,4,8, 4,8,4,8, 4,8,3, 4,8,4,8, 4,8,4,8,
  4,8,8,8,8, 4,8,3, 4,8,4,8, 8,8,8,4,8, 4,8,4,8, 4,8,3, 8,8,8,8,8,8,
  8,8,8,8,8,8, 3,3, 3,4,8, 1, 1,8

};

// change pace of music
int pace = 1450; 
void setup() {
  for (int Note = 0; Note <133; Note++) {
    //Adjust duration with the pace of music
    int duration = pace/noteDurations[Note];
    //Play note
    tone(buzzerPin, melody[Note],duration); 

// gap between nodes
    delay(duration*1.2);
  }
}

void loop() {
}
