
#include <Servo.h>

Servo firstservo;  // creates servo object to control a servo
Servo secondservo; 

// variables to store the servo position
int pos = 0;    
int posX = 0;   
int posY = 0;    


// Joystick pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output



// variables to store RGB values
int redValue;
int greenValue;
int blueValue;


// variables to store button presses
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

// Define Pins - makes code more readable/easier
#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
  Serial.begin(9600);
  firstservo.attach(9);  // attaches the servo on pin 9 to the servo object
  secondservo.attach(10);  // attaches the servo on pin 10 to the servo object

  

  pinMode(SW_pin, INPUT); // configures sw_pin as an input
  digitalWrite(SW_pin, HIGH); //sets initial state to high
  Serial.begin(9600);



pinMode(RED, OUTPUT); // configures RGB as outputs
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, HIGH); // sets initial state to high only on red
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);

}

void loop() {

//  servoTogether();
//  servo1();
//  servo2();

  joystick();

  clicker();
}
