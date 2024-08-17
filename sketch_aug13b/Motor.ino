void mati(){
  digitalWrite(A_ENA,LOW);
  digitalWrite(A_ENB,LOW);
  digitalWrite(B_ENA,LOW);
  digitalWrite(B_ENB,LOW);

  digitalWrite(A_IN1,LOW);
  digitalWrite(A_IN2,LOW);
  digitalWrite(A_IN3,LOW);
  digitalWrite(A_IN4,LOW);

  digitalWrite(B_IN1,LOW);
  digitalWrite(B_IN2,LOW);
  digitalWrite(B_IN3,LOW);
  digitalWrite(B_IN4,LOW);
}

void maju(){
  digitalWrite(A_ENA,HIGH);
  analogWrite(A_ENB,110);
  digitalWrite(B_ENA,HIGH);
  analogWrite(B_ENB,110);

  digitalWrite(A_IN1,LOW);
  digitalWrite(A_IN2,HIGH);
  digitalWrite(A_IN3,HIGH);
  digitalWrite(A_IN4,LOW);

  digitalWrite(B_IN1,LOW);
  digitalWrite(B_IN2,HIGH);
  digitalWrite(B_IN3,HIGH);
  digitalWrite(B_IN4,LOW);
}

void mundur(){
  digitalWrite(A_ENA,HIGH);
  digitalWrite(A_ENB,HIGH);
  digitalWrite(B_ENA,HIGH);
  digitalWrite(B_ENB,HIGH);

  digitalWrite(A_IN1,HIGH);
  digitalWrite(A_IN2,LOW);
  digitalWrite(A_IN3,LOW);
  digitalWrite(A_IN4,HIGH);

  digitalWrite(B_IN1,HIGH);
  digitalWrite(B_IN2,LOW);
  digitalWrite(B_IN3,LOW);
  digitalWrite(B_IN4,HIGH);
}

void geser_kiri(){
  digitalWrite(A_ENA,HIGH);
  digitalWrite(A_ENB,HIGH);
  digitalWrite(B_ENA,HIGH);
  digitalWrite(B_ENB,HIGH);

  digitalWrite(A_IN1,LOW);
  digitalWrite(A_IN2,HIGH);
  digitalWrite(A_IN3,HIGH);
  digitalWrite(A_IN4,LOW);

  digitalWrite(B_IN1,HIGH);
  digitalWrite(B_IN2,LOW);
  digitalWrite(B_IN3,LOW);
  digitalWrite(B_IN4,HIGH);
}

void geser_kanan(){
  digitalWrite(A_ENA,HIGH);
  digitalWrite(A_ENB,HIGH);
  digitalWrite(B_ENA,HIGH);
  digitalWrite(B_ENB,HIGH);

  digitalWrite(A_IN1,HIGH);
  digitalWrite(A_IN2,LOW);
  digitalWrite(A_IN3,LOW);
  digitalWrite(A_IN4,HIGH);

  digitalWrite(B_IN1,LOW);
  digitalWrite(B_IN2,HIGH);
  digitalWrite(B_IN3,HIGH);
  digitalWrite(B_IN4,LOW);
}

void belok_kiri(){
  digitalWrite(A_ENA,40);
  digitalWrite(A_ENB,HIGH);
  digitalWrite(B_ENA,40);
  digitalWrite(B_ENB,HIGH);

  digitalWrite(A_IN1,LOW);
  digitalWrite(A_IN2,HIGH);
  digitalWrite(A_IN3,LOW);
  digitalWrite(A_IN4,LOW);

  digitalWrite(B_IN1,LOW);
  digitalWrite(B_IN2,HIGH);
  digitalWrite(B_IN3,LOW);
  digitalWrite(B_IN4,LOW);
}

void belok_kanan(){
  digitalWrite(A_ENA,80);
  digitalWrite(A_ENB,HIGH);
  digitalWrite(B_ENA,80);
  digitalWrite(B_ENB,HIGH);

  digitalWrite(A_IN1,LOW);
  digitalWrite(A_IN2,LOW);
  digitalWrite(A_IN3,HIGH);
  digitalWrite(A_IN4,LOW);

  digitalWrite(B_IN1,LOW);
  digitalWrite(B_IN2,LOW);
  digitalWrite(B_IN3,HIGH);
  digitalWrite(B_IN4,LOW);
}

void kanan_koreksi(){
  digitalWrite(A_ENA,230);
  digitalWrite(A_ENB,HIGH);
  digitalWrite(B_ENA,230);
  digitalWrite(B_ENB,HIGH);

  digitalWrite(A_IN1,LOW);
  digitalWrite(A_IN2,HIGH);
  digitalWrite(A_IN3,HIGH);
  digitalWrite(A_IN4,LOW);

  digitalWrite(B_IN1,LOW);
  digitalWrite(B_IN2,HIGH);
  digitalWrite(B_IN3,HIGH);
  digitalWrite(B_IN4,LOW);
}

void kiri_koreksi(){
  analogWrite(A_ENA,HIGH);
  analogWrite(A_ENB,100);
  analogWrite(B_ENA,HIGH);
  analogWrite(B_ENB,100);

  digitalWrite(A_IN1,LOW);
  digitalWrite(A_IN2,HIGH);
  digitalWrite(A_IN3,HIGH);
  digitalWrite(A_IN4,LOW);

  digitalWrite(B_IN1,LOW);
  digitalWrite(B_IN2,HIGH);
  digitalWrite(B_IN3,HIGH);
  digitalWrite(B_IN4,LOW);
}


