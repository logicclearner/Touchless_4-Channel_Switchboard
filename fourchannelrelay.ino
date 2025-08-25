
//touch less switch board  using Ultrasonic Sensor HC-SR04 

const int trigPin1 = 13;               //defining echo sensor pins  1  // defines pins numbers
const int echoPin1 = 12;      
const int trigPin2 = 7;               //defining echo sensor pins 2  // defines pins numbers
const int echoPin2 = 6;
const int trigPin3 = 9;               //defining echo sensor pins 3  // defines pins numbers
const int echoPin3 = 8;
const int trigPin4 = 11;               //defining echo sensor pins 4  // defines pins numbers
const int echoPin4 = 10;
const int Relay1 =  5;      // the number of the Relay1 pin
const int Relay2 =  4;      // the number of the Relay2 pin
const int Relay3 =  3;      // the number of the Relay3 pin
const int Relay4 =  2;      // the number of the Relay4 pin

int RelayState1 = LOW;
int lastSwitchState1=LOW;      // defines intermediate variables variables of switch-1
int SwitchState1=LOW;

int RelayState2 = LOW;
int lastSwitchState2=LOW;      // defines intermediate variables of switch-2
int SwitchState2=LOW;

int RelayState3 = LOW;
int lastSwitchState3=LOW;      // defines intermediate variables of switch-3
int SwitchState3=LOW;

int RelayState4 = LOW;
int lastSwitchState4=LOW;      // defines intermediate variables of switch-4
int SwitchState4=LOW;

long duration1;             //defining echo sensor varables 1
int distance1;
long duration2;             //defining echo sensor varables 2
int distance2;
long duration3;             //defining echo sensor varables 3
int distance3;
long duration4;             //defining echo sensor varables 4
int distance4;

void setup() {
pinMode(Relay1, OUTPUT);          // Sets the relay as an Output 1
pinMode(trigPin1, OUTPUT);        // Sets the trigPin as an Output 1
pinMode(echoPin1, INPUT);         // Sets the echoPin as an Input   1
  
pinMode(Relay2, OUTPUT);           // Sets the relay as an Output 2
pinMode(trigPin2, OUTPUT);        // Sets the trigPin as an Output   2
pinMode(echoPin2, INPUT);        // Sets the echoPin as an Input    2

pinMode(Relay3, OUTPUT);          // Sets the relay as an Output 3
pinMode(trigPin3, OUTPUT);        // Sets the trigPin as an Output   3
pinMode(echoPin3, INPUT);        // Sets the echoPin as an Input    3

pinMode(Relay4, OUTPUT);          // Sets the relay as an Output 4
pinMode(trigPin4, OUTPUT);        // Sets the trigPin as an Output 4  
pinMode(echoPin4, INPUT);        // Sets the echoPin as an Input    4

Serial.begin(9600); // Starts the serial communication
}

void loop() {

digitalWrite(trigPin1, LOW);                        // Clears the trigPin
delayMicroseconds(2);
digitalWrite(trigPin1, HIGH);// Sets the trigPin on HIGH state for 10 micro seconds
delayMicroseconds(10);
digitalWrite(trigPin1, LOW);
duration1 = pulseIn(echoPin1, HIGH);// Reads the echoPin, returns the sound wave travel time in microseconds
distance1= duration1*0.034/2;       // Calculating the distance1

if (distance1 <= 5)                                                    
    {
      SwitchState1 = HIGH;
    }
    else
    {
      SwitchState1 =LOW;
    } 
 if (SwitchState1 == HIGH && SwitchState1 != lastSwitchState1)
 {          
  
   if (RelayState1==HIGH)
    {
      RelayState1 = LOW;
    }
    else
    {
      RelayState1 = HIGH;
    } 
}
  digitalWrite(Relay1, RelayState1);
  lastSwitchState1 = SwitchState1;
  
 digitalWrite(trigPin2, LOW);
delayMicroseconds(2);
digitalWrite(trigPin2, HIGH);// Sets the trigPin on HIGH state for 10 micro seconds
delayMicroseconds(10);
digitalWrite(trigPin2, LOW);
duration2 = pulseIn(echoPin2, HIGH);// Reads the echoPin, returns the sound wave travel time in microseconds
distance2= duration2*0.034/2;       // Calculating the distance2

  if (distance2 <= 5)           //switching process 2
    {
      SwitchState2 = HIGH;
    }
    else
    {
      SwitchState2 =LOW;
    } 
 if (SwitchState2 == HIGH && SwitchState2 != lastSwitchState2)
 {          
  
   if (RelayState2==HIGH)
    {
      RelayState2 = LOW;
    }
    else
    {
      RelayState2 = HIGH;
    } 
}
  digitalWrite(Relay2, RelayState2);
  lastSwitchState2 = SwitchState2;

 digitalWrite(trigPin3, LOW);
delayMicroseconds(2);
digitalWrite(trigPin3, HIGH);// Sets the trigPin on HIGH state for 10 micro seconds
delayMicroseconds(10);
digitalWrite(trigPin3, LOW);
duration3 = pulseIn(echoPin3, HIGH);// Reads the echoPin, returns the sound wave travel time in microseconds
distance3= duration3*0.034/2;       // Calculating the distance3

  if (distance3 <= 5)           //switching process 3
    {
      SwitchState3 = HIGH;
    }
    else
    {
      SwitchState3 =LOW;
    } 
 if (SwitchState3 == HIGH && SwitchState3 != lastSwitchState3)
 {          
  
   if (RelayState3==HIGH)
    {
      RelayState3 = LOW;
    }
    else
    {
      RelayState3 = HIGH;
    } 
}
  digitalWrite(Relay3, RelayState3);
  lastSwitchState3 = SwitchState3;

  digitalWrite(trigPin4, LOW);                        // Clears the trigPin
delayMicroseconds(2);
digitalWrite(trigPin4, HIGH);// Sets the trigPin on HIGH state for 10 micro seconds
delayMicroseconds(10);
digitalWrite(trigPin4, LOW);
duration4 = pulseIn(echoPin4, HIGH);// Reads the echoPin, returns the sound wave travel time in microseconds
distance4= duration4*0.034/2;       // Calculating the distance4

if (distance4 <= 5)     //switching process 4 //
    {
      SwitchState4 = HIGH;
    }
    else
    {
      SwitchState4 =LOW;
    } 
 if (SwitchState4 == HIGH && SwitchState4 != lastSwitchState4)
 {          
  
   if (RelayState4==HIGH)
    {
      RelayState4 = LOW;
    }
    else
    {
      RelayState4 = HIGH;
    } 
}
  digitalWrite(Relay4, RelayState4);
  lastSwitchState4 = SwitchState4;

                              
Serial.print("Distance1:  " );      // Prints the distance1 on the Serial Monitor
Serial.print(distance1);
Serial.print("\t");
Serial.print(RelayState1);

Serial.print("\t Distance2: ");      // Prints the distance2 on the Serial Monitor
Serial.print(distance2);
Serial.print("\t");
Serial.print(RelayState2);

Serial.print("\t Distance3: ");      // Prints the distance3 on the Serial Monitor
Serial.print(distance3);
Serial.print("\t");
Serial.print(RelayState3);

Serial.print("\t Distance4: ");      // Prints the distance4 on the Serial Monitor
Serial.print(distance4);
Serial.print("\t");
Serial.print(RelayState4);



Serial.println();
delay(100);
}
