
void joystick() {
//  reads the joysticks sw_pin, x_pin, and y_pin then displays it on the serial monitor
//  Serial.print("Switch:  ");
//  Serial.print(digitalRead(SW_pin));
//  Serial.print("\n");
//  Serial.print("X-axis: ");
//  Serial.print(analogRead(X_pin));
//  Serial.print("\n");
//  Serial.print("Y-axis: ");
//  Serial.println(analogRead(Y_pin));
//  Serial.print("\n\n");
//  delay(100);

  mainMove();
 
}

void servoMoveLeft(int speed){
  if(!(posX <= 0)){
   secondservo.write(posX-= speed);              // tell servo to go to position in variable 'pos' continuously until it reaches 0
  }
}

void servoMoveRight(int speed){
  if(!(posX >= 180)){
   secondservo.write(posX+= speed);              // tell servo to go to position in variable 'pos' continuously until it reaches 180
  }
}

void servoMoveUp(int speed){
  if(!(posY <= 0)){
   firstservo.write(posY-= speed);              // tell servo to go to position in variable 'pos' continuously until it reaches 0
  }
}

void servoMoveDown(int speed){
  if(!(posY >= 180)){
   firstservo.write(posY+= speed);              // tell servo to go to position in variable 'pos' continuously until it reaches 180
  }
}



void mainMove(){
  delay(10);
  //left right movement
  if(analogRead(X_pin) > 700){                 // if x_pin is more than 700
    servoMoveLeft(1);                          // do this
  }else if(analogRead(X_pin) < 200){           // if x_pin is less than 200
    servoMoveRight(1);                         // do this
  }

  //up down movement
  if(analogRead(Y_pin) > 590){                 // if y_pin is more than 590
    servoMoveDown(1);                          // do this
  }else if(analogRead(Y_pin) < 420){           // if y_pin is less than 420
    servoMoveUp(1);                            // do this
  }

}
