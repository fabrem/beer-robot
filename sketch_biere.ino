#define enA 9
#define enB 10
#define in1 11
#define in2 12
#define in3 2
#define in4 3
#define in5 4
#define in6 5
//#define in8 4
//#define in7 5


void setup() {
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
//  pinMode(in7, OUTPUT);
//  pinMode(in8, OUTPUT);
//  analogWrite(enA, HIGH); // Send PWM signal to L298N Enable pin
  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
  
}
void loop() {
//  int potValue = analogRead(A0); // Read potentiometer value
//  int pwmOutput = map(potValue, 0, 1023, 0 , 255); // Map the potentiometer value from 0 to 255
//  analogWrite(enA, pwmOutput); // Send PWM signal to L298N Enable pin
//  Serial.print(LOW);

  

// premier coup
  digitalWrite(in1, HIGH); // moteur
  digitalWrite(in2, LOW);  // moteur

  delay(100)
   digitalWrite(in1, LOW); // moteur
   digitalWrite(in2, LOW);  // moteur

  digitalWrite(in3, LOW); // actuateur 1
  digitalWrite(in4, HIGH);  // actuateur 1

  delay(6000);

  digitalWrite(in5, LOW); // actuateur 2
  digitalWrite(in6, HIGH);  // actuateur 2

  delay(6000);

  digitalWrite(in5, HIGH); // actuateur 2
  digitalWrite(in6, LOW);  // actuateur 2

  delay(6000);

  digitalWrite(in3, HIGH); // actuateur 1
  digitalWrite(in4, LOW);  // actuateur 1

  delay(6000);

  //calibrer
  
  digitalWrite(in1, HIGH); // rotari
  digitalWrite(in2, LOW);  // rotari

  delay(6000);

  // on tourne pour verser

  digitalWrite(in1, LOW); // rotari
  digitalWrite(in2, HIGH);  // rotari

  delay(500);

// on attend et on verse
  digitalWrite(in1, LOW); // rotari
  digitalWrite(in2, LOW);  // rotari

  delay(2000);

// on retourne au point initial
  digitalWrite(in1, HIGH); // rotari
  digitalWrite(in2, LOW);  // rotari

  delay(1200);

}
  
//  exit(0);
  //rotDirection = 1;
