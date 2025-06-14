#define LED_PIN 15
#define SWITCH_PIN 12
bool ledState=false;
bool prevSwitchState=HIGH;
void setup()
{


  
  pinMode(LED_PIN,OUTPUT);
  pinMode(SWITCH_PIN,INPUT_PULLUP);
}
void loop()
{
  bool currentSwitchState=digitalRead(SWITCH_PIN);
  if(prevSwitchState==LOW&& currentSwitchState==HIGH)
  {
    ledState=!ledState;
    digitalWrite(LED_PIN,ledState ? HIGH : LOW);
  }
  prevSwitchState=currentSwitchState;
}
