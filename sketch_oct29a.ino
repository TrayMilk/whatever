/*
 * RandomNumbers1
 * Nathan Rowbottom Oct 29 2020
 * Make two dice roles and checks for doubles
 */

//Declare variables
int die1 = 0;
int die2 = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
}

void loop() {
  //get a random number for our variable
  die1 = random(1, 7);//random(low, high) <== not inclusive of high value
  die2 = random(1, 7);//random(low, high) <== not inclusive of high value
  //display rolls to the screen
  Serial.print(die1);
  Serial.print(", ");
  Serial.println(die2);

  delay(500);

if(die1 == die2)(
Serial.println("you rolled a double!!")
}
