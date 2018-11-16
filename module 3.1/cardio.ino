void cardio(){
  int i = 0;
  int SenVal = analogRead (A0);
  Serial.println(SenVal);
  while(SenVal>60){
      i += 1;
  }
  i = i*4;
}
 
