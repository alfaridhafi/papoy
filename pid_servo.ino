void pidServo(){
  kom();
  int kp= 9, ki = 9, kd = 0.000001;
  double setPoin = 0; 
  now1 = millis();
  timeChange = (double)(now1 - lastTime);
  error = setPoin - (data);
  errSum = errSum + (error * timeChange);
  dErr = ((error - lastErr)/ timeChange);
  outputt = kp*error + kd*dErr + ki*errSum;
  servokan  = constrain(outputt, -350,350);//11
  servokir  = constrain(outputt, -350,350);//12
  servokan2 = constrain(outputt, -350,350);//15
  servokir2 = constrain(outputt, -350,350);//16
  lastErr = error;
  lastTime = now1;
  tegakp(servokan,servokir,servokan2,servokir2);
  jalanp(servokan,servokir,servokan2,servokir2);
  lanjutanp(servokan,servokir,servokan2,servokir2);
  lanjutanp(servokan,servokir,servokan2,servokir2);
}




