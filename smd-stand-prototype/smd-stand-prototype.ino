// Constants - Assigning Pins
const int ledPin = 13; // Uno Board Led Pin
const int buttonsPins[] = {4, 3, 2, 8, 9, 10, 11}; // Pins of each button

// Variables - State of buttons
int buttonsStates[7]; // State of each button
int buttonsLastStates[7]; // Last State of each Button

// Function - Print to Serial the number of the button that was pushed and released
void pushedButtonNumber(int buttonState, int lastState, int choice) {
  if (buttonState != lastState) {
    if (buttonState == HIGH) {
    } else {
      Serial.println(choice);
      delay(50);
    }
  }
  buttonsLastStates[choice - 1] = buttonState;
}

void setup() {
  for (int i = 0; i <= 6; i++) {
    buttonsStates[i] = 0; // Set every Button State to 0
    buttonsLastStates[i] = 0; // Set every Button Last State to 0
  }
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  // For each button, check the state and apply function
  for (int i = 0; i <= 6; i++) {
    buttonsStates[i] = digitalRead(buttonsPins[i]); // Read State
    pushedButtonNumber(buttonsStates[i], buttonsLastStates[i], i + 1); // Check if it was pushed and released
  }
}
