int count = 0;
Servo ent;



void setup() {
  // put your setup code here, to run once:
 ent.attach(5);
  pinMode(ire, INPUT);
  pinMode(irx, INPUT);
  pinMode(gled, OUTPUT);
  pinMode(rled, OUTPUT);
  digitalWrite(gled, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(ire) == LOW)
  {
    count++;
   
    delay(500);
  } 
  if (digitalRead(irx) == LOW)
  {
    count--;
    delay(500);
  }
  if (count >= 5) {
    digitalWrite(gled, LOW);
    digitalWrite(rled, HIGH);
    ent.write(130);
  } else if (count < 5) {
    digitalWrite(gled, HIGH);
    digitalWrite(rled, LOW);
    ent.write(25);
