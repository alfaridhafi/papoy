void ka(int sud7, int sud9, int sud11, int sud13, int sud15, int sud17, int kec7, int kec9, int kec11, int kec13, int kec15, int kec17){
  Dxl.setPacketType(DXL_PACKET_TYPE1);
  Dxl.goalSpeed(7, kec7);
  Dxl.goalPosition(7, sud7);
  Dxl.goalSpeed(9, kec9);
  Dxl.goalPosition(9, sud9);
  Dxl.goalSpeed(11, kec11);
  Dxl.goalPosition(11, sud11);
  Dxl.goalSpeed(13, kec13);
  Dxl.goalPosition(13, sud13);
  Dxl.goalSpeed(15, kec15);
  Dxl.goalPosition(15, sud15);
  Dxl.goalSpeed(17, kec17);
  Dxl.goalPosition(17, sud17);
}

void ki(int sud8, int sud10, int sud12, int sud14, int sud16, int sud18, int kec8, int kec10, int kec12, int kec14, int kec16, int kec18){
  Dxl.setPacketType(DXL_PACKET_TYPE1);
  Dxl.goalSpeed(8, kec8);
  Dxl.goalPosition(8, sud8);
  Dxl.goalSpeed(10, kec10);
  Dxl.goalPosition(10, sud10);
  Dxl.goalSpeed(12, kec12);
  Dxl.goalPosition(12, sud12);
  Dxl.goalSpeed(14, kec14);
  Dxl.goalPosition(14, sud14);
  Dxl.goalSpeed(16, kec16);
  Dxl.goalPosition(16, sud16);
  Dxl.goalSpeed(18, kec18);
  Dxl.goalPosition(18, sud18);
}
void b(int sud_id19, int kec19 ){
  Dxl.setPacketType(DXL_PACKET_TYPE1);
  Dxl.goalSpeed(19, kec19);
  Dxl.goalPosition(19, sud_id19);
}
void p(int sud_id21, int kec21 ){
  Dxl.setPacketType(DXL_PACKET_TYPE1);
  Dxl.goalSpeed(21, kec21);
  Dxl.goalPosition(21, sud_id21);
}



