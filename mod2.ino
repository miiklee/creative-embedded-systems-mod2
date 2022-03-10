
const int buttonPin = 21;
const int potenPin = 13;
const int VRx = 26;
const int VRy = 27;
const int SW = 25;

int buttonState = 0;
int potenValue = 0;   
int xPosition = 0;
int yPosition = 0;
int SW_state = 0;
int mapX = 0;
int mapY = 0;



void setup(){
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Button Test");
  pinMode(buttonPin, INPUT_PULLUP);

  Serial.print("Button and Poten Test \n");
}

void loop(){


  Serial.print("\n Button: \n");
  Serial.print(digitalRead(buttonPin));
  Serial.print("\n Potentiometer: \n");
  Serial.print(analogRead(potenPin));
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  SW_state = digitalRead(SW);

  mapX = map(xPosition, 0, 1023, -512, 512);
  mapY = map(yPosition, 0, 1023, -512, 512);
  Serial.print("\n MapX: \n");
  Serial.print(mapX);
  Serial.print("\n MapY: \n");
  Serial.print(mapY);
  delay(1000);


}
