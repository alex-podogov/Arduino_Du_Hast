
//Pins
const int pinBass = 8;
const int sendInterruptDrumsPin = 12;
const int sendInterruptKeysPin = 11;
const int sendInterruptEffectsPin = 10;
const int activatePin = 4;

//Bass
const int delay_pair = 240;
const int note_length = 150;
const int bang_length = 50;

const int multiplier = 1;

const int intro_note = 165 * multiplier;
const int banging = 110 * multiplier;
const int A_bass = 110 * multiplier;
const int B_bass = 123 * multiplier;
const int C_bass = 131 * multiplier;
const int E_bass = 82 * multiplier;
const int G_bass = 98 * multiplier;


//Start the bass
int activate = LOW;


void setup() {

  pinMode(pinBass, OUTPUT);
  pinMode(sendInterruptDrumsPin, OUTPUT);
  pinMode(sendInterruptKeysPin, OUTPUT);
  pinMode(sendInterruptEffectsPin, OUTPUT);
  digitalWrite(pinBass, LOW);
  digitalWrite(sendInterruptDrumsPin, HIGH);
  digitalWrite(sendInterruptKeysPin, HIGH);
  digitalWrite(sendInterruptEffectsPin, HIGH);
  
}

void loop() {
  activate = digitalRead(activatePin);
  if (activate == HIGH) {

    //Intro before banging
    for (int iter = 1; iter < 17; iter++) {
      if (iter >= 8) {
        digitalWrite(sendInterruptEffectsPin, LOW);
      }
      tone(pinBass, intro_note, note_length);
      delay(150);
      tone(pinBass, intro_note, note_length);
      delay(150);
      tone(pinBass, intro_note, note_length);
      delay(250);
      tone(pinBass, intro_note, note_length);
      delay(150);
      tone(pinBass, intro_note, note_length);
      delay(300);
    }
    
    digitalWrite(sendInterruptEffectsPin, HIGH);

    //Banging
    tone(pinBass, banging, bang_length);
    delay(delay_pair);
    tone(pinBass, banging, bang_length);
    delay(delay_pair * 2);
    tone(pinBass, banging, bang_length);
    delay(delay_pair);
    tone(pinBass, banging, bang_length);
    delay(500);
    
    //Riff start
    digitalWrite(sendInterruptDrumsPin, LOW);

    //Intro x 3
    for(int iter = 1; iter < 4; iter++){
      //AG
      tone(pinBass, A_bass, note_length); 
      delay(delay_pair);
      tone(pinBass, G_bass, note_length);
      delay(delay_pair);
      //E x 5
      for(int iter = 1; iter < 6; iter++){
        tone(pinBass, E_bass, note_length); 
        delay(delay_pair);
      }
      tone(pinBass, A_bass, note_length);
      delay(delay_pair);
      tone(pinBass, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 4; iter++){
        tone(pinBass, E_bass, note_length);
        delay(delay_pair);
      }
      //G
      tone(pinBass, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 4; iter++){
        tone(pinBass, E_bass, note_length);
        delay(delay_pair);
      }
    }
  
    //Bridge x 1
    tone(8, G_bass, note_length);
    delay(delay_pair);
    //E x 3
    for(int iter = 1; iter < 8; iter++){
      tone(8, A_bass, note_length);
      delay(delay_pair);
    }
  
    //Verse x 8
    for(int iter = 1; iter < 9; iter++){
      //AG
      tone(8, A_bass, note_length);
      delay(delay_pair);
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 5
      for(int iter = 1; iter < 6; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
      tone(8, A_bass, note_length);
      delay(delay_pair);
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 4; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
      //G
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 4; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
    }
  
    delay(2000);
  
    //Bridge x 3
    for(int iter = 1; iter < 4; iter++){
      //AG
      tone(8, A_bass, note_length);
      delay(delay_pair);
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 5
      for(int iter = 1; iter < 6; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
      tone(8, A_bass, note_length);
      delay(delay_pair);
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 4; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
      //G
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 4; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
    }
   
    //Bridge x 1
    tone(8, G_bass, note_length);
    delay(delay_pair);
    //E x 3
    for(int iter = 1; iter < 8; iter++){
      tone(8, A_bass, note_length);
      delay(delay_pair);
    }
  
    //Verse x 3

    digitalWrite(sendInterruptEffectsPin, LOW);
    
    for(int iter = 1; iter < 5; iter++){
      //AG
      tone(8, A_bass, note_length); 
      delay(delay_pair);
      tone(8, G_bass, note_length); 
      delay(delay_pair);
      //E x 5
      for(int iter = 1; iter < 6; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
      tone(8, A_bass, note_length);
      delay(delay_pair);
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 4; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
      //G
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 4; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
    }

    digitalWrite(sendInterruptEffectsPin, HIGH);
  
    delay(2000);

    //Chorus w/o keys
    for (int chorus_iter = 1; chorus_iter < 3; chorus_iter++) {
      for(int iter = 1; iter < 2; iter++){
        //AG
        tone(8, A_bass, note_length);
        delay(delay_pair);
        tone(8, G_bass, note_length);
        delay(delay_pair);
        //E x 5
        for(int iter = 1; iter < 6; iter++){
          tone(8, E_bass, note_length);
          delay(delay_pair);
        }
        tone(8, A_bass, note_length);
        delay(delay_pair);
        tone(8, G_bass, note_length);
        delay(delay_pair);
        //E x 3
        for(int iter = 1; iter < 4; iter++){
          tone(8, E_bass, note_length);
          delay(delay_pair);
        }
        //G
        tone(8, G_bass, note_length);
        delay(delay_pair);
        //E x 3
        for(int iter = 1; iter < 4; iter++){
          tone(8, E_bass, note_length);
          delay(delay_pair);
        }
      }
    
      for(int iter = 1; iter < 3; iter++){
        tone(8, G_bass, note_length);
        delay(delay_pair);
        //E x 3
        for(int iter = 1; iter < 8; iter++){
          tone(8, A_bass, note_length);
          delay(delay_pair);
        }
      }
    
      //C x 8
      for(int iter = 1; iter < 9; iter++){
        tone(8, C_bass, note_length);
        delay(delay_pair);
      }
    
      //B x 8
      for(int iter = 1; iter < 9; iter++){
        tone(8, B_bass, note_length);
        delay(delay_pair);
      }
    
      //E x 7
      for(int iter = 1; iter < 8; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
    
      //AG
      tone(8, A_bass, note_length);
      delay(delay_pair);
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 7
      for(int iter = 1; iter < 8; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
    }

    //Chorus w/ keys
    digitalWrite(sendInterruptKeysPin, LOW);
    for(int iter = 1; iter < 2; iter++){
      //AG
      tone(8, A_bass, note_length);
      delay(delay_pair);
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 5
      for(int iter = 1; iter < 6; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
      tone(8, A_bass, note_length);
      delay(delay_pair);
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 4; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
      //G
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 4; iter++){
        tone(8, E_bass, note_length);
        delay(delay_pair);
      }
    }
  
    for(int iter = 1; iter < 3; iter++){
      tone(8, G_bass, note_length);
      delay(delay_pair);
      //E x 3
      for(int iter = 1; iter < 8; iter++){
        tone(8, A_bass, note_length);
        delay(delay_pair);
      }
    }
  
    //C x 8
    for(int iter = 1; iter < 9; iter++){
      tone(8, C_bass, note_length);
      delay(delay_pair);
    }
  
    //B x 8
    for(int iter = 1; iter < 9; iter++){
      tone(8, B_bass, note_length);
      delay(delay_pair);
    }
  
    //E x 7
    for(int iter = 1; iter < 8; iter++){
      tone(8, E_bass, note_length);
      delay(delay_pair);
    }
  
    //AG
    tone(8, A_bass, note_length);
    delay(delay_pair);
    tone(8, G_bass, note_length);
    delay(delay_pair);
    //E x 7
    for(int iter = 1; iter < 8; iter++){
      tone(8, E_bass, note_length);
      delay(delay_pair);
    }


    
  }

    
}
