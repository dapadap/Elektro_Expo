void baca_sensor(){

  IR1=(digitalRead(S1));
  IR2=(digitalRead(S2));
  IR3=(digitalRead(S3));
  IR4=(digitalRead(S4));
  IR5=(digitalRead(S5));

  display.clearDisplay(); 
	display.setTextSize(2);
	display.setCursor(10, 35); 
  display.print(IR1); display.print(IR2); display.print(IR3); display.print(IR4); display.print(IR5); 
  display.display(); 
}