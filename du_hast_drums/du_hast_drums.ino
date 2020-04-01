
//Pins
const int pinDrum = 8;
const int interruptPin = 2;


//Drums
const int delay_beat = 240;
const int drum_note_length = 30;

const int drum_multiplier = 1;

const int Kick_drum = 65 * drum_multiplier;
const int Hat_drum = 52 * drum_multiplier;


//IRS triggers
bool volatile drums_start = false;


//IRS to set start drums trigger
void start_drums() {
  drums_start = true;
}

void setup() {

  pinMode(pinDrum, OUTPUT);
  pinMode(interruptPin, INPUT);
  digitalWrite(pinDrum, LOW);
  attachInterrupt(digitalPinToInterrupt(interruptPin), start_drums, FALLING);
}


void loop() {
  
  if (drums_start == true) {

    //Intro
    for (int iter = 0; iter < 4; iter++) {
      for (int inner_iter = 0; inner_iter < 7; inner_iter++) {
        tone(pinDrum, Kick_drum, drum_note_length);
        delay(delay_beat);
        tone(pinDrum, Hat_drum, drum_note_length);
        delay(delay_beat);
      }
    }

    //Verse
    for (int iter = 1; iter < 3; iter++) {
      tone(pinDrum, Kick_drum, drum_note_length);
      delay(delay_beat * 7);
      tone(pinDrum, Kick_drum, drum_note_length);
      delay(delay_beat);
      tone(pinDrum, Kick_drum, drum_note_length);
      delay(delay_beat * 8);
      tone(pinDrum, Kick_drum, drum_note_length);
      delay(delay_beat);
      tone(pinDrum, Kick_drum, drum_note_length);
      delay(delay_beat * 15);
    }
    for (int iter = 1; iter < 5; iter++) {
      for (int inner_iter = 0; inner_iter < 8; inner_iter++) {
        tone(pinDrum, Kick_drum, drum_note_length);
        delay(delay_beat * 2);
      }
    }

    delay(2000);
    
    //Bridge
    for (int iter = 0; iter < 4; iter++) {
      for (int inner_iter = 0; inner_iter < 7; inner_iter++) {
        tone(pinDrum, Kick_drum, drum_note_length);
        delay(delay_beat);
        tone(pinDrum, Hat_drum, drum_note_length);
        delay(delay_beat);
      }
    }

    //Verse
    for (int iter = 1; iter < 5; iter++) {
      for (int inner_iter = 0; inner_iter < 8; inner_iter++) {
        tone(pinDrum, Kick_drum, drum_note_length);
        delay(delay_beat * 2);
      }
    }

    delay(2000);

    //Chorus
    for (int chorus_iter = 0; chorus_iter < 3; chorus_iter++) {
      for (int inner_iter = 0; inner_iter < 32; inner_iter++) {
        tone(pinDrum, Kick_drum, drum_note_length);
        delay(delay_beat);
        tone(pinDrum, Hat_drum, drum_note_length);
        delay(delay_beat);
      }
    }

    delay(6000);
    
  }
}
