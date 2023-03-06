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
  Dxl.setPacketType(DXL_PACKET_TYPE2);
}
void loop(){

//  psgmskr2();
//  cctgn();
//  salam();
//   geoll();
//  geol22();
//  tegakgeol();
//   jalan1();
//  lanjutan1();
// lanjutan1();
//pasangmasker();
//cctgn();
//   tegakkk();
//    ngeyek();
//  tegakGEOLL();
//  geol22();
//  geol22();
//  geol22();
  //  geol2();
  //  geol2();
  //  geol2();
  //  NAMORA();
  //  GRKJLN();
  //  GRKJLN();
  //  GRKJLN();
  //GRKJLN();
  //  jalan1();
  //lanjutan1();
  //lanjutan1();
  //lanjutan();
  //lanjutan();
  //lanjutan();
  //lanjutan();
  //  juara();
  //  juara();
  //  juara();
  //  juara();
  //  tgkWAK();
  //  jalan();
  //  lanjutan();
  // pidServo();
  //psgmskr2();
  while(1){
  }
}






