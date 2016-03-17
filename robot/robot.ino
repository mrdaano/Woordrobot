int M1 = 4;
int M1b = 5;
int M2b = 6;
int M2 = 7;
int letter = 1;
bool stop = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
}

void loop() {
  if (!stop) {
  schrijfWoord();
  stop = true;
  }
  //delay(1000);
}

// Besturings deel

void vooruit(int tijd) {
  digitalWrite(M1, HIGH);
  digitalWrite(M2, HIGH);
  analogWrite(M1b, 155);
  analogWrite(M2b, 150);
  delay(tijd);
  stil();
 }

 void achteruit(int tijd) {
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  analogWrite(M1b, 155);
  analogWrite(M2b, 150);
  delay(tijd);
  stil();
 }
 
 void links(int tijd) {
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
  analogWrite(M1b, 150);
  analogWrite(M2b, 150);
  delay(tijd);
  stil();
 }

 void rechts(int tijd) {
  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);
  analogWrite(M1b, 153);
  analogWrite(M2b, 150);
  delay(tijd);
  stil();
 }
 

 void stil() {
  analogWrite(M1b, 0);
  analogWrite(M2b, 0);
 }

 // Woord

void schrijfWoord() {
 int ln = 1;

 if (ln == 1) {
  l();
  ln = 2; 
 }

 if (ln == 2) {
  vooruit(300);
  links(900);
  i();
  //ln = 3;
 }

 if (ln == 3) {
  e();
  ln = 4; 
 }
}

 void l() {
  vooruit(800);
  achteruit(800);
  rechts(700);
  vooruit(450);
 }

 void i() {
  vooruit(800);
  achteruit(800);
 }

 void e() {
  vooruit(800);
  rechts(700);
  vooruit(450);
  achteruit(450);
  links(700);
  achteruit(266);
  rechts(700);
  vooruit(450);
  achteruit(450);
  //links();
 }

 void f() {
  vooruit(800);
  rechts(700);
  vooruit(450);
  achteruit(450);
  links(700);
  achteruit(266); 
 }


// Display
