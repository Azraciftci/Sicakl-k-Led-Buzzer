// C++ code
//
int sicaklik = 0;

void setup()
{
  pinMode(A1, INPUT);
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  sicaklik = (-40 + 0.488155 * (analogRead(A1) - 20));
  Serial.println(sicaklik);
  if (sicaklik <= 24) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }
  if (sicaklik >= 25 && sicaklik <= 60) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  if (sicaklik >= 61) {
    digitalWrite(2, HIGH);
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
    digitalWrite(2, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
