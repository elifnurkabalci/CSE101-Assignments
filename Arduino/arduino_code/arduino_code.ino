int com4,select1,select2,select3,select4,select5,num,result;
int pin=13; //pin which the led is connected
int pin1=2; //pin which the button is connected
int counter=0; //for select3
void setup() {
  
 Serial.begin(9600); //opens serial port, sets data rate to 9600 bps
 pinMode(pin,OUTPUT); //  

}

void loop() {
  
  if(Serial.available()>0){ //number of characters more than 0
    com4=Serial.read();  //read the port com4
    Serial.println(com4);
    
    if(com4==*"select1"){   // connect with a in c code 
      digitalWrite(pin,HIGH);  //led lights
    }

    
    if(com4==*"select2"){  //connect with b in c code
      digitalWrite(pin,LOW);  //led off
    }

    
    if(com4==*"select3"){  //connect with c in c code
      digitalWrite(pin,LOW);  //for start correctly
      delay(1000);
      for(;counter<3; counter++){  //counter for light 3 times
        digitalWrite(pin,HIGH);  //led lights
        delay(1000);  //for see easly
        digitalWrite(pin,LOW);   //led off
        delay(1000);  //for see easly
      }
    }

    
    if(com4==*"select5"){  //connect wtih e in c code
      const int button=6;  //button location
      if(pin1==HIGH){
        counter=counter+1;  
        Serial.println(counter); //display the numbers 
      }
      digitalWrite(pin1,HIGH);
      delay(350);   //provides fingerprint sensitivity
      digitalWrite(pin1,LOW);
      delay(350);   //provides fingerprint sensitivily
         
      }
    }
  }
 
