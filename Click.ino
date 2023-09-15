

void clicker() {
  buttonState = digitalRead(SW_pin);

// Joystick button counter
  if (buttonState != lastButtonState) {                   // if the button is pressed
    if (buttonState == HIGH) {                            // checks if button is being held down
      buttonPushCounter++;                                // increment button push counter up by 1
      Serial.println("on");                               // display that it is currently being pressed 
      Serial.print("number of button pushes: ");          // and the total number of button pushes 
      Serial.println(buttonPushCounter);
    } else {
      // if the current state is LOW then the button went from on to off (pressed once):
      Serial.println("off");
    }
   
    delay(50);
  }
  lastButtonState = buttonState;

  // turns on the LED every 2 button pushes by checking the modulo of the
  // button push counter.
  if (buttonPushCounter % 2 == 0) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
  } else {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
  }
}

//    if(on){
//    digitalWrite(RED, HIGH);
//    digitalWrite(GREEN, LOW);
//    digitalWrite(BLUE, LOW);
//    on = false;
//    break;
//    }else{
//    digitalWrite(RED, LOW);
//    digitalWrite(GREEN, LOW);
//    digitalWrite(BLUE, LOW);
//    on = true;
//    break;
//    }
