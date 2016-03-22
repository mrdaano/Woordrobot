int M1 = 4;
int M1b = 5;
int M2b = 6;
int M2 = 7;
int letter = 1;
const int buttonPin = 13;
int buttonState = 0;
int writeWord = 0;

int grnd1 = 1;
int grnd2 = 0;
int pin1 = 2;
int pin2 = 3;
int pin3 = 8;
int pin4 = 9;
int pin5 = 10;
int pin6 = 11;
int pin7 = 12;
int teller1 = 0;
int teller2 = 0;
int teller3 = 0;
int teller4 = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  // Letter L display
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(grnd1, OUTPUT);
  pinMode(grnd2,OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH){
  writeWord = 1;
  }

  if (writeWord == 1) {
    schrijfWoord();
    writeWord = 0;  
  }
  //letterL();
  //delay(1000);
}

// Besturings deel

void vooruit(int tijd) {
  digitalWrite(M1, HIGH);
  digitalWrite(M2, HIGH);
  analogWrite(M1b, 215);//rechts
  analogWrite(M2b, 200);
  delay(tijd);
  stil();
 }

 void achteruit(int tijd) {
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  analogWrite(M1b, 198);
  analogWrite(M2b, 200);
  delay(tijd);
  stil();
 }
 
 void links(int tijd) {
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
  analogWrite(M1b, 215);
  analogWrite(M2b, 215);
  delay(tijd);
  stil();
 }

 void rechts(int tijd) {
  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);
  analogWrite(M1b, 215);
  analogWrite(M2b, 215);
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
  //letterL();
  l(); 
  //lettersUit();
  //ln = 2;
 }

 if (ln == 2) {
//  delay(100);
//  vooruit(100);
//  delay(100);
//  links(900);
  letterL();
  i();
  lettersUit();
  //ln = 3;
 }

 if (ln == 3) {
  delay(100);
  rechts(900);
  delay(100);
  vooruit(100);
  delay(100);
  links(900);
  letterL();
  e();
  lettersUit();
  ln = 4;
 }
}

 void l() {
  eersteletter(); // letters aan
  delay(400);
  vooruit(1300);
  lettersUit(); // letters uit
  delay(100);
  achteruit(1200);
  delay(100);
  rechts(860);
  delay(100);
  vooruit(600);
  delay(100);
  //einde L
  links(700);
  tweedeletter(); // letters aan
  delay(100);
  vooruit(800);
  lettersUit(); // letters uit
  delay(100);
  achteruit(800);
  delay(100);
  //einde I
  rechts(780);
  derdeletter(); // letters aan
  delay(100);
  vooruit(450);
  lettersUit(); // letters uit
  delay(100);
  links(780);
  delay(100);
  vooruit(800);
  delay(100);
  rechts(830);
  delay(100);
  vooruit(450);
  delay(100);
  achteruit(480);
  delay(200);
  rechts(900);
  delay(100);
  vooruit(450);
  delay(100);
  links(695);
  delay(100);
  vooruit(370);
  delay(100);
  achteruit(450);
  delay(200);
  rechts(800);
  delay(100);
  vooruit(500);
  delay(100);
  links(695);
  delay(100);
  vooruit(800);
  delay(100);
  //einde E
  links(780);
  vierdeletter(); // letters aan
  delay(100);
  vooruit(800);
  lettersUit(); // letters uit
  delay(100);
  rechts(880);
  delay(100);
  vooruit(450);
  delay(100);
  achteruit(500);
  delay(200);
  rechts(880);
  delay(100);
  vooruit(450);
  delay(100);
  links(695);
  delay(100);
  vooruit(370);
  delay(100);
  achteruit(450);
  delay(100);
  rechts(800);
  delay(100);
  vooruit(600);
  //einde F
    
  
 }

 void i() {
  vooruit(800);
  delay(100);
  achteruit(800);
 }

 void e() {
  vooruit(500);
  rechts(500);
  vooruit(300);
  achteruit(420);
  delay(500);
  links(500);
  achteruit(200);
//  delay(500);
//  rechts(700);
//  vooruit(450);
//  achteruit(450);
//  delay(500);
//  links(700);
//  achteruit(266);
//  rechts(700);
//  vooruit(450);
 }

 void f() {
  vooruit(800);
  rechts(705);
  vooruit(450);
  achteruit(450);
  delay(500);
  links(712);
  achteruit(266);
  delay(500);
  rechts(700);
  vooruit(450);
  achteruit(450);
  delay(500);
  links(700);
  achteruit(266);
 }


// Display
void lettersUit() {
 digitalWrite(pin1, B0);
 digitalWrite(pin2, B0);
  digitalWrite(pin3, B0);
  digitalWrite(pin4, B0);
  digitalWrite(pin5, B0);
  digitalWrite(pin6, B0);
  digitalWrite(pin7, B0);

}

void eersteletter() {
  pinMode(grnd2, INPUT);
  pinMode(grnd1, OUTPUT);
  digitalWrite(grnd1, LOW);
  digitalWrite(pin1, B0);
  digitalWrite(pin2, B0);
  digitalWrite(pin3, B0);
  digitalWrite(pin4, B1);
  digitalWrite(pin5, B1);
  digitalWrite(pin6, B1);
  digitalWrite(pin7, B0);
  delay(200);

  pinMode(grnd2, OUTPUT);
  pinMode(grnd1, INPUT);
  digitalWrite(grnd2, LOW);
  digitalWrite(pin1, B0);
  digitalWrite(pin2, B1);
  digitalWrite(pin3, B1);
  digitalWrite(pin4, B0);
  digitalWrite(pin5, B0);
  digitalWrite(pin6, B0);
  digitalWrite(pin7, B0);
  delay(10);  
}

void tweedeletter() {
  pinMode(grnd2, INPUT);
  pinMode(grnd1, OUTPUT);
  digitalWrite(grnd1, LOW);
  digitalWrite(pin1, B0);
  digitalWrite(pin2, B0);
  digitalWrite(pin3, B0);
  digitalWrite(pin4, B1);
  digitalWrite(pin5, B1);
  digitalWrite(pin6, B1);
  digitalWrite(pin7, B0);
  delay(200);

  pinMode(grnd2, OUTPUT);
  pinMode(grnd1, INPUT);
  digitalWrite(grnd2, LOW);
  digitalWrite(pin1, B1);
  digitalWrite(pin2, B1);
  digitalWrite(pin3, B0);
  digitalWrite(pin4, B1);
  digitalWrite(pin5, B1);
  digitalWrite(pin6, B0);
  digitalWrite(pin7, B1);
  delay(10);
}

void derdeletter() {
  pinMode(grnd2, INPUT);
  pinMode(grnd1, OUTPUT);
  digitalWrite(grnd1, LOW);
  digitalWrite(pin1, B0);
  digitalWrite(pin2, B0);
  digitalWrite(pin3, B0);
  digitalWrite(pin4, B1);
  digitalWrite(pin5, B1);
  digitalWrite(pin6, B1);
  digitalWrite(pin7, B0);
  delay(200);

  pinMode(grnd2, OUTPUT);
  pinMode(grnd1, INPUT);
  digitalWrite(grnd2, LOW);
  digitalWrite(pin1, B1);
  digitalWrite(pin2, B1);
  digitalWrite(pin3, B1);
  digitalWrite(pin4, B1);
  digitalWrite(pin5, B0);
  digitalWrite(pin6, B0);
  digitalWrite(pin7, B1);
  delay(10);
}

void vierdeletter() {
  pinMode(grnd2, INPUT);
  pinMode(grnd1, OUTPUT);
  digitalWrite(grnd1, LOW);
  digitalWrite(pin1, B0);
  digitalWrite(pin2, B0);
  digitalWrite(pin3, B0);
  digitalWrite(pin4, B1);
  digitalWrite(pin5, B1);
  digitalWrite(pin6, B1);
  digitalWrite(pin7, B0);
  delay(200);

  pinMode(grnd2, OUTPUT);
  pinMode(grnd1, INPUT);
  digitalWrite(grnd2, LOW);
  digitalWrite(pin1, B0);
  digitalWrite(pin2, B1);
  digitalWrite(pin3, B1);
  digitalWrite(pin4, B0);
  digitalWrite(pin5, B0);
  digitalWrite(pin6, B1);
  digitalWrite(pin7, B1);
  delay(10);
}

void letterL() {
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
}

