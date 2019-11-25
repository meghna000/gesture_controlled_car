int left1=5;
int left2=7;
int right1=6;
int right2=8;
unsigned int inByte;
void setup() {
pinMode(left1,OUTPUT);
pinMode(left2,OUTPUT);
pinMode(right1,OUTPUT);
pinMode(right2,OUTPUT);
pinMode(9,OUTPUT);
digitalWrite(9,HIGH);
Serial.begin(9600);
Serial.println("Started");
}

void loop() {//forward
  if (Serial.available()) {
inByte = Serial.read();
Serial.println(inByte);
  }
  if (inByte == 2)
  {
    do{
  
 digitalWrite(left1,HIGH);
 digitalWrite(left2,LOW);
 digitalWrite(right1,LOW);
 digitalWrite(right2,HIGH);
 Serial.println("F");
 delay(500);
 }while(!Serial.available());
  }
  if(inByte==1){
 //reverse
 do{
 digitalWrite(left1,LOW);
 digitalWrite(left2,HIGH);
 digitalWrite(right1,HIGH);
 digitalWrite(right2,LOW);
 Serial.println("R");
 delay(500);
 }while(!Serial.available());
  }
  if(inByte==4){
 //RIGHT
 do{
 digitalWrite(left1,HIGH);
 digitalWrite(left2,HIGH);
 digitalWrite(right1,LOW);
 digitalWrite(right2,LOW);
 Serial.println("R");
 delay(500);
 }while(!Serial.available());
  }
 //LEFT
 if(inByte==3){
 do{
 digitalWrite(left1,LOW);
 digitalWrite(left2,LOW);
 digitalWrite(right1,HIGH);
 digitalWrite(right2,HIGH);
 Serial.println("L");
 delay(500);
 }while(!Serial.available());
 //STOP
 }
 if (inByte==0){
 do{
 digitalWrite(left1,HIGH);
 digitalWrite(left2,HIGH);
 digitalWrite(right1,HIGH);
 digitalWrite(right2,HIGH);
 Serial.println("S");
 delay(500);
 }while(!Serial.available());
 }
}
