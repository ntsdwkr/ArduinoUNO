// defines pins numbers
const int trigPin = 10;
const int echoPin = 9;
// defines variables
long duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
if(distance<10)
{
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(1000);
}
if(distance<50)
{
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(100);
}
if(distance<80)
{
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(50);
}
if(distance<100)
{
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(20);
}
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  delay(100);
}
