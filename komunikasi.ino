void kom() {
  //  jalan(servokan,servokir,servokan1,servokir1);
  terima = (digitalRead(D3) * 256) + (digitalRead(D4) * 128) + (digitalRead(D5) * 64) + (digitalRead(D6) * 32) + (digitalRead(D7) * 16) + (digitalRead(D8) * 8) + (digitalRead(D9) * 4) + (digitalRead(D10) * 2) + (digitalRead(D11) * 1);
  fterima = map(terima, 0,512,-90,90);
  // fterima = map(terima, -90,90,-90,90);


  //  }
  if(!fterima) {
    data = 0;
  }
  else if(fterima == 90 || fterima == -90) {
    data = 0;
  }
  
  else if (fterima == 78|| fterima == -78){
    data = 0;
  } 
  else if(fterima <= -10) {
//    data = fterima +10;
    data = -fterima;
  } 
  else if(fterima >= 10) {
//    data = fterima -10;
    data = -fterima;
  } 
  else {
    data = 0;
  }
  //   if(fterima <= -10) {
  //    data = fterima +13;
  //  } 
  //  else if(fterima >= 10) {
  //    data = fterima -13;
  //  } 
  //  else if(fterima == 90 || fterima == -90){
  //    data = 0;
  //  } 
  //  else {
  //    data = 0;
  //  }

  //  SerialUSB.println(terima);
  SerialUSB.print("fterima:");
  SerialUSB.print(fterima);
  SerialUSB.print(" || ");
  SerialUSB.print(" data ");
  SerialUSB.println(data);
}








