/*Pin definitions*/
#define pumpRelay 10 //Water pump relay pin
#define flowSensor 2 //Interrupt pin for flow rate sensor o/p

/*Frequency-to-volume attributes*/
/*Do not change unless you know what these are*/
#define zeta 7.5 //Calibration coefficient of flow rate sensor
#define flowSampleRate 1000 //Flow rate sensor sampling rate in milliseconds
/*...*/

/*Calculation variables*/
unsigned long pulseCount = 0;
unsigned long milliLitres = 0;

/*Function pumps water of volume defined by the argument*/
void pumpWater(unsigned long volume){

   while(milliLitres < volume){
    
    milliLitres = pulseCount*1000/(zeta * 60);
    digitalWrite(pumpRelay, LOW);
    Serial.println(milliLitres);
    
    }

    digitalWrite(pumpRelay, HIGH);    
  
  }

/*ISR to calculate flow rate sensor rotations*/
void flow(){
  pulseCount++;
  }



void setup()
{
  //Initialize Serial
   Serial.begin(9600);

   //Initialize GPIOs
   pinMode(flowSensor, INPUT_PULLUP);
   pinMode(pumpRelay, OUTPUT);

   digitalWrite(pumpRelay,HIGH);

   //Initialize Interrupt
   attachInterrupt(digitalPinToInterrupt(flowSensor), flow, RISING); //Interrupt at the rising edge of Hall Sensor
   sei(); //Enable Interrrupt
}

void loop (){

  pumpWater(1000); //Volume in mL

}
