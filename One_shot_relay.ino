int output = 0; // Relay output on pin 0.
int input = 1; // Signal input on pin 1.
int current_state = 1; // Input current state.
int previous_state = 1; // Input previous state.

void setup() {
  pinMode (output, OUTPUT);
  pinMode (input, INPUT);
}

void loop() {
  current_state = digitalRead (input);

  if (current_state == 1 && previous_state == 0) {
    digitalWrite (output, HIGH);
    delay(1000);
    digitalWrite (output, LOW);
    previous_state = 1;
  }

  if (current_state == 0 && previous_state == 1) {
    digitalWrite (output, HIGH);
    delay(1000);
    digitalWrite (output, LOW);
    previous_state = 0;
  }
}
