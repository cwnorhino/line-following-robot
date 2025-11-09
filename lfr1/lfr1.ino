int IN1 = 25;
int IN2 = 26;
int IN3 = 27;
int IN4 = 14;

int sensorPin = 34;
int threshold = 1200;
int motorSpeed = 40;

void setup() {
  Serial.begin(115200);    
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int val = digitalRead(sensorPin);  

  Serial.println(val);     

  if (val == 0 ) {
    stopMotors();
  } else {
    forwardSlow();
  }
}

void forwardSlow() {
  digitalWrite(IN2, LOW);
  digitalWrite(IN4, LOW);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, HIGH);
  delay(motorSpeed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN3, LOW);
  delay(100 - motorSpeed);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
