//void pid() {
//  kom();
//  //rumus pid
//  int SetPoint = 0;   
//  int kp=4, kd = 4, ki =  0.000001;   // Setpoint yang diinginkan 
//  Error = SetPoint - data;        // Error
//  DeltaError = Error - LastError; // Delta Error (Selisih error sekarang e(t) dengan error sebelumya e(t-1))
//  SumError = LastError;                 // Akumulasi error
//  P = kp * Error;                  // Kontrol proporsional
//  I = ki * SumError * Ts;        // Kontrol integral
//  D = ((kd / Ts) * DeltaErr ); // Kontrol derivative
//  LastError = Error;                     // Error sebelumnya
//  outPID = P + I + D;                    // Output PID
//  servo  = outPID;// Motor Kiri
////  servooo = - outPID;
//  servokan  = constrain(servo, -350,350);//11
//  servokir  = constrain(servo, -350,350);//12
//  servokan1 = constrain(servo, -350,350);//13
//  servokir1 = constrain(servo, -350,350);//14
//  servokan2 = constrain(servo, -350,350);//15
//  servokir2 = constrain(servo, -350,350);//16
//  //
////  servokan  = constrain(servooo, -350,350);//11
////  servokir  = constrain(servooo, -350,350);//12
////  servokan1 = constrain(servooo, -350,350);//13
////  servokir1 = constrain(servooo, -350,350);//14
////  servokan2 = constrain(servooo, -350,350);//15
////  servokir2 = constrain(servooo, -350,350);//16
//  tegakt(servokan,servokir,servokan1,servokir1,servokan2,servokir2);
////  delay(5000);
////  jalant(servokan,servokir,servokan1,servokir1,servokan2,servokir2);
////  lanjutant(servokan,servokir,servokan1,servokir1,servokan2,servokir2);
////  tegakt(servokan,servokir,servokan1,servokir1,servokan2,servokir2);
////  gerakjoget(servokan,servokir,servokan1,servokir1,servokan2,servokir2);
////  tegakt(servokan,servokir,servokan1,servokir1,servokan2,servokir2);
//}
//
//
//
//
//
//
//
//
//

