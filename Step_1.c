const int trigger1 = 2; //Trigger pin of 1st Sensorconst int echo1 = 3; //Echo pin of 1st Sensorconst int trigger2 = 4; //Trigger pin of 2nd Sensorconst int echo2 = 5;//Echo pin of 2nd Sensorvoid setup() {Serial.begin(9600);pinMode(trigger1, OUTPUT);pinMode(echo1, INPUT);pinMode(trigger2, OUTPUT);pinMode(echo2, INPUT);}
