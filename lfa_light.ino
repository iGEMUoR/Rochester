const
int analogPin = 0;//the analog input pin attach to

const
int ledPin = 6;//the led attach to

int
inputValue = 0;//variable to store the value coming from sensor

int
outputValue = 0;//variable to store the output value

/******************************************/

void
setup()

{

  Serial.begin(9600);//set the serial


}

/******************************************/

void
loop()

{

  inputValue = analogRead(analogPin);//read the value from the potentiometer

  Serial.print("Input: "); //print "Input"

  Serial.println(inputValue); //print inputValue

  outputValue = map(inputValue, 0, 1023, 0,255); //Convert from 0-1023 proportional to the number of a number of from 0 to 255

  Serial.print("Output: "); //print "Output"

  Serial.println(outputValue); //print utputValue

  analogWrite(ledPin, outputValue); //turn the LED on depending on the output value

  delay(1000);

}
