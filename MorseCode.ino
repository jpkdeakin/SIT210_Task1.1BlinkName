// SIT210
// My name in morse code.

#define UNIT 100 // One UNIT of time for the morse code (ms)
#define PUSHBUTTON 2 // Pin of pushbutton

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);       // Setup LED
  pinMode(PUSHBUTTON, INPUT_PULLUP);  // Setup Pushbutton
}

void loop() {

  if (!digitalRead(PUSHBUTTON)) // If Pushbutton, Output name.
  {
    outputName();
  }

}



void outputName() // outputs JON PAUL in Morse Code.
{
  // J
  dot();  
  dash();
  dash();
  dash();
  endLetter();

  // O
  dash();
  dash();
  dash();
  endLetter();

  // N
  dash();
  dot();
  endWord();

  // P
  dot();
  dash();
  dash();
  dot();
  endLetter();

  // A
  dot();
  dash();
  endLetter();

  // U
  dot();
  dot();
  dash();
  endLetter();

  // L
  dot();
  dash();
  dot();
  dot();
  endWord();
}



void dot() // Morse Code Dot
{
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(UNIT);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(UNIT);  
}


void dash() // Morse Code Dash
{  
  delay(UNIT);   
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(3*UNIT);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(UNIT); 
}

void endLetter() // Morse Code space between letters 3 UNITs (keeping in mind dot/dash has a trailing UNIT)
{
    delay(2*UNIT);  
}

void endWord() // Morse Code space between words, 7 UNITs (keeping in mind dot/dash has a trailing UNIT)
{
    delay(6*UNIT);  
}