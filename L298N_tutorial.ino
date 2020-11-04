/* FOR MORE:
 * 
 * 1. You can follow us on INSTAGRAM:
 *    https://www.instagram.com/prrobotics/
 *    
 * 2. You can subscribe us on YOUTUBE:
 *    https://www.youtube.com/PRROBOTICS
 *    
 * 3. You can support us on PATREON to access PATREON only tutorials and circuit diagrams:
 *    https://www.patreon.com/PRROBOTICS
 *    
 * 4. You can also support us on PayPal:
 *    https://www.paypal.me/prrobtics
 * 
 */

const int IN1=4;    //connect IN1 to digital pin 4 of arduino
const int IN2=5;    //connect IN2 to digital pin 5 of arduino
const int IN3=6;    //connect IN3 to digital pin 6 of arduino
const int IN4=7;    //connect IN4 to digital pin 7 of arduino

void setup() {
  pinMode(IN1, OUTPUT);   //to set pin 4 of arduino as OUTPUT pin
  pinMode(IN2, OUTPUT);   //to set pin 5 of arduino as OUTPUT pin
  pinMode(IN3, OUTPUT);   //to set pin 6 of arduino as OUTPUT pin
  pinMode(IN4, OUTPUT);   //to set pin 7 of arduino as OUTPUT pin

  //You can delete or uncomment this line, this is to print the data on Serial monitor
  //If you do so then make sure you have deleted or uncommented all the lines containing Serial from the code
  Serial.begin(9600);  //To begin the serial monitor
}

void loop() {
  Serial.println("Motor 1");
  //the following two lines are to rotate the motor 1 in direction(assume clockwise) if you want 
  //to rotate the motor in opposite direction(say anti clockwise), change HIGH to LOW and LOW to HIGH.
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  Serial.println("Motor 2");
  //the following two lines are for motor 2 and the above criteria is applicable here also
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
