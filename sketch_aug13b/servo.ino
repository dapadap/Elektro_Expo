void gripper_depan(){
  right_arm.write(90);
  left_arm.write(90);
  delay(100);
  right_arm.write(60);
  left_arm.write(120);
  delay(100);
  right_arm.write(30);
  left_arm.write(150);
  delay(100);
  right_arm.write(5);
  left_arm.write(175);
}

void gripper_belakang(){
  right_arm.write(90);
  left_arm.write(90);
  delay(100);
  right_arm.write(120);
  left_arm.write(60);
  delay(100);
  right_arm.write(150);
  left_arm.write(30);
  delay(100);
  right_arm.write(175);
  left_arm.write(5);
}

void gripper_tengah(){
  right_arm.write(90);
  left_arm.write(90);
}

void gripper_buka(){
  gripper.write(5);
}

void gripper_tutup(){
  gripper.write(105);
}