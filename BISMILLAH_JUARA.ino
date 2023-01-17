Dynamixel Dxl(1);
#define D11 2
#define D10 3
#define D9 4
#define D8 5
#define D7 6
#define D6 7
#define D5 8
#define D4 9
#define D3 10
int del;
//#define m1 3
//#define m2 4
//#define m3 5
//#define m4 6
//#define m5 7
//#define m6 8
//#define m7 9
//#define m8 10
//#define m9 11
int terima, fterima;
int Error, LastError, outPID,SumError;
int Ts=1;
int Pitch;
double servo;
double servooo;
int data;
double outputt,lastErr,lastTime;
double datakan,datakir,datakan1,datakir1;
double servokan, servokir, servokan1, servokir1,servokan2,servokir2;
double DeltaErr;
double DeltaError;
long now1;
double error, timeChange,errSum,dErr;
double P;
double I;    
double D;
double fpitch;
void setup() {
  SerialUSB.begin();
  pinMode(D11,INPUT_PULLUP);
  pinMode(D10,INPUT_PULLUP);
  pinMode(D9, INPUT_PULLUP);
  pinMode(D8, INPUT_PULLUP);
  pinMode(D7, INPUT_PULLUP);
  pinMode(D6, INPUT_PULLUP);
  pinMode(D5, INPUT_PULLUP);
  pinMode(D4, INPUT_PULLUP);
  pinMode(D3, INPUT_PULLUP);
  Dxl.begin(3); //1=??? 2=sudut 3=kecepatan
  Dxl.setPacketType(DXL_PACKET_TYPE1);
//Dxl.setPacketType(DXL_PACKET_TYPE2);
}
void loop(){
  //tegak();
//  tegakt();
//  jalant();
//  lanjutant();
//   lanjutant(); 
//   lanjutant();
//  tegakt();
//  lanjutan();
//  tegak();
  pidServo();
//tegakp();
//jalanp();
//lanjutanp();
//lanjutanp();
//lanjutanp();
//while(1){
//}
//lanjutan();
//lanjutan();
//lanjutan();
//lanjutan();
//lanjutan();
//lanjutan();
//lanjutan();
//lanjutant();
//lanjutant();
//lanjutant();
//gerak2();

//  pid();
//  tegak();
//  jalan();
//  lanjutan();
//   lanjutan();
}



