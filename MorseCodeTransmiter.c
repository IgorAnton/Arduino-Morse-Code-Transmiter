
int BUTTON = 8; 
int presentState; 
const int buzzer = 7;
#define LED_PIN 11

void setup() {
 
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  
  presentState = digitalRead(BUTTON);

  while(presentState == LOW){
        analogWrite(LED_PIN,255);
        tone(buzzer,500);
        delay(100);
        analogWrite(LED_PIN,0);
        noTone(buzzer);
        
        presentState = HIGH;
  }
  
}
