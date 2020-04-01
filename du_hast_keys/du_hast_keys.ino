
//Pins
const int pinKeys = 8;
const int interruptPin = 2;

//Synth
const int delay_pair = 240;
const int note_length = 100;

const int multiplier = 1;

const int E_key = 330 * multiplier;
const int D_key = 294 * multiplier;
const int A_key = 220 * multiplier;
const int C_key = 262 * multiplier;
const int B_key = 247 * multiplier;
const int E_key_low = 165 * multiplier;

//Start the synth
bool volatile synth_start = false;


//IRS to start synth
void start_synth() {
  synth_start = true;
}

void setup() {

  pinMode(pinKeys, OUTPUT);
  pinMode(interruptPin, INPUT);
  digitalWrite(pinKeys, LOW);
  attachInterrupt(digitalPinToInterrupt(interruptPin), start_synth, FALLING);

}

void loop() {
  if (synth_start == true) {
    
    for (int iter = 1; iter < 6; iter++) {
      
      //First passage
      tone(pinKeys, E_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, D_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, A_key, note_length);
      delay(delay_pair);
      tone(pinKeys, C_key, note_length);
      delay(delay_pair);
      tone(pinKeys, B_key, note_length);
      delay(delay_pair);
      tone(pinKeys, E_key_low, note_length);
      delay(delay_pair);
      tone(pinKeys, A_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, C_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, D_key, note_length);
      delay(delay_pair);
      tone(pinKeys, B_key, note_length);
      delay(420);
      
      //Second passage
      tone(pinKeys, E_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, D_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, A_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, C_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, B_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, E_key_low, note_length);
      delay(delay_pair/ 2);
      tone(pinKeys, A_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, C_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, D_key, note_length);
      delay(delay_pair / 2);
      tone(pinKeys, B_key, note_length);
      delay(700);
    }

    delay(6000);
    
  }
}
