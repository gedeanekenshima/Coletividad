int randNumber1, randNumber2;

void setup(){
  Serial.begin(9600);
 }

void loop() {
  // print a random number from 0 to 299
  randNumber1 = random(300);
  Serial.println(randNumber1);  

  // print a random number from 10 to 19
  randNumber2 = random(10, 20);
  Serial.println(randNumber2);

  delay(1000);
}
