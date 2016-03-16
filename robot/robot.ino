int M1 = 4;
int M1b = 5;
int M2b = 6;
int M2 = 7;
int letter = 1;
void setup() {
  // put your setup code here, to run once:
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  achteruit(1000);
  delay(1000);
}

// Besturings deel

void vooruit(int tijd) {
  digitalWrite(M1, HIGH);
  digitalWrite(M2, HIGH);
  analogWrite(M1b, 255);
  analogWrite(M2b, 255);
  delay(tijd);
  stil();
 }

 void achteruit(int tijd) {
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  analogWrite(M1b, 255);
  analogWrite(M2b, 255);
  delay(tijd);
  stil();
 }
 
 void links(int tijd) {
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
  analogWrite(M1b, 255);
  analogWrite(M2b, 255);
  delay(tijd);
  stil();
 }

 void rechts(int tijd) {
  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);
  analogWrite(M1b, 255);
  analogWrite(M2b, 255);
  delay(tijd);
  stil();
 }
 

 void stil() {
  analogWrite(M1b, 0);
  analogWrite(M2b, 0);
 }

 // Woord

void schrijfWoord() {
 
}

 void l() {}

 void i() {}

 void e() {}

 void f() {}


// Display
