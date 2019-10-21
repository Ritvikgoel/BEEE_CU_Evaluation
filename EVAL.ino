int state =0; //Tells us the state of Pushbutton i.e. it is pressed or not.
int count=0; //It counts the number of time a Button is pressed.

void setup() {
  pinMode(4,INPUT);  //Pushbutton
    pinMode(7,OUTPUT); //LED
}

void loop() {
  int i;
  state=digitalRead(4);
  if(digitalRead(4)==HIGH)  //Checks if A button is pressed or not.
  {count++; 
   for(i=1;i<=count;i++)   //Loop for Blinking of LED for number of times.
    {digitalWrite(7,HIGH);
  delay(100);
   digitalWrite(7,LOW) ;
   delay(100);
    }}
  else
  {digitalWrite(7,HIGH);} //It is mentioned that Background is RED.
}
