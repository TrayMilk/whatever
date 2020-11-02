/*
 * Displays use of a function two add two numbers and give the answer
 */

//Declare variables
int num1 = 8, num2 = 5; //variables
int answer = 0;
//<return data type> FunctionName (<parameters>){
int addTwoNumbers(int n1, int n2){
  return n1 + n2;//this value will be placed where the function call was
}

void setup() {
  Serial.begin(9600);

  //you can call the function in the Serial.println statement
  Serial.println(addTwoNumbers(4, 101));//these need to be ints
  
  //call the function and assign it into the answer variable
  answer = addTwoNumbers(num1, num2);//the function is called with the two values 

  Serial.println(answer);

}

void loop() {
  // put your main code here, to run repeatedly:

}
