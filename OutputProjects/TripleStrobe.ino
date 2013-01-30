int greenPin = 13;
int ylwPin = 12;
int redPin = 11;

void setup()
{
  // initialize the serial communications:
  Serial.begin(9600);
  //initialize pins as outputs
  pinMode(greenPin, OUTPUT);
  pinMode(ylwPin, OUTPUT);
  pinMode(redPin, OUTPUT);

}


void loop()
{
  digitalWrite(greenPin, HIGH);
  digitalWrite(ylwPin, LOW);
  digitalWrite(redPin, LOW);
  delay(100);
  digitalWrite(greenPin, LOW);
  digitalWrite(ylwPin, HIGH);
  digitalWrite(redPin, LOW);
  delay(100);
  digitalWrite(greenPin, LOW);
  digitalWrite(ylwPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(100);
  Serial.println("loop");
}
