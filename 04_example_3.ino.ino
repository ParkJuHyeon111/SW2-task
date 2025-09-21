#define PIN_LED 13
unsigned int count, toggle = 0;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial);
  }


void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle); // toggle LED value.
  digitalWrite(PIN_LED, toggle); // update LED status.
  delay(1000); //wait for 1,000 milliseconds
 
  
}

int toggle_state(int toggle) {
  return !toggle;
}
