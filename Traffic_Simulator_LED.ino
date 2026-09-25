// pins
const int greenUp = 12;
const int redUp = 11;
const int greenRight = 10;
const int redRight = 9;
const int greenLeft = 8;
const int redLeft = 7;
const int greenDown = 6;
const int redDown = 5;

void setup() {
  // defines if pin is input/output
  pinMode(greenUp, OUTPUT);
  pinMode(redUp, OUTPUT);
  pinMode(greenRight, OUTPUT);
  pinMode(redRight, OUTPUT);
  pinMode(greenLeft, OUTPUT);
  pinMode(redLeft, OUTPUT);
  pinMode(greenDown, OUTPUT);
  pinMode(redDown, OUTPUT);

  // turns all LEDs off when started
  digitalWrite(greenUp, LOW);
  digitalWrite(redUp, LOW);
  digitalWrite(greenRight, LOW);
  digitalWrite(redRight, LOW);
  digitalWrite(greenLeft, LOW);
  digitalWrite(redLeft, LOW);
  digitalWrite(greenDown, LOW);
  digitalWrite(redDown, LOW);
}

void loop() {
  //system
  UpDownGo();
  delay(10000);
  LeftRightGo();
  delay(10000);
}

void UpDownGo() {
  //going straight
  digitalWrite(greenUp, HIGH);
  digitalWrite(redUp, LOW);
  digitalWrite(greenRight, LOW);
  digitalWrite(redRight, HIGH);
  digitalWrite(greenLeft, LOW);
  digitalWrite(redLeft, HIGH);
  digitalWrite(greenDown, HIGH);
  digitalWrite(redDown, LOW);
}

void LeftRightGo() {
  //going left or right
  digitalWrite(greenUp, LOW);
  digitalWrite(redUp, HIGH);
  digitalWrite(greenRight, HIGH);
  digitalWrite(redRight, LOW);
  digitalWrite(greenLeft, HIGH);
  digitalWrite(redLeft, LOW);
  digitalWrite(greenDown, LOW);
  digitalWrite(redDown, HIGH);
}