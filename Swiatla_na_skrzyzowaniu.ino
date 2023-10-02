// Pins with light colors
const int redCar1 = 2;
const int yellowCar1 = 3;
const int greenCar1 = 4;

const int redMan1 = 5;
const int greenMan1 = 6;

const int redCar2 = 7;
const int yellowCar2 = 8;
const int greenCar2 = 9;

const int redMan2 = 10;
const int greenMan2 = 11;

// Function sets levels on 10 colors
void setState(int rc1, int yc1, int gc1, int rm1, int gm1, int rc2, int yc2, int gc2, int rm2, int gm2){
  digitalWrite(redCar1, rc1);
  digitalWrite(yellowCar1, yc1);
  digitalWrite(greenCar1, gc1);
  digitalWrite(redMan1, rm1);
  digitalWrite(greenMan1, gm1);
  digitalWrite(redCar2, rc2);
  digitalWrite(yellowCar2, yc2);
  digitalWrite(greenCar2, gc2);
  digitalWrite(redMan2, rm2);
  digitalWrite(greenMan2, gm2);
}

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for (int i=2; i<12; i++ )
    pinMode(i, OUTPUT);

  setState(1, 0, 0, 1, 0, 0, 0, 1, 0, 1);
}

// the loop function runs over and over again forever
void loop() {
  setState(1, 0, 0, 1, 0, 0, 0, 1, 0, 1);
  delay(7500);                      
  setState(1, 0, 0, 1, 0, 0, 1, 0, 1, 0);
  delay(1000);                      
  setState(1, 0, 0, 1, 0, 1, 0, 0, 1, 0);
  delay(1000); 
  setState(1, 1, 0, 1, 0, 1, 0, 0, 1, 0);
  delay(1000); 
  setState(0, 0, 1, 0, 1, 1, 0, 0, 1, 0);
  delay(7500); 
  setState(0, 1, 0, 1, 0, 1, 0, 0, 1, 0);
  delay(1000);
  setState(1, 0, 0, 1, 0, 1, 0, 0, 1, 0);
  delay(1000);
  setState(1, 0, 0, 1, 0, 1, 1, 0, 1, 0);
  delay(1000);
}
