void takan(int id1, int id3, int id5, int id23, int id25,int id29,int kec1, int kec3, int kec5, int kec23, int kec25,int kec29) {
  dxl.setPacketType(DXL_PACKET_TYPE2);
  dxl.goalPosition(1, id1); 
  dxl.goalSpeed(1, kec1);
  dxl.goalPosition(3, id3); 
  dxl.goalSpeed(3, kec3);
  dxl.goalPosition(5, id5); 
  dxl.goalSpeed(5, kec5);
  dxl.goalPosition(23, id23); 
  dxl.goalSpeed(23, kec23);
  dxl.goalPosition(25, id25); 
  dxl.goalSpeed(25, kec25);
  dxl.goalPosition(29, id29); 
  dxl.goalSpeed(29, kec29);
}

void takir(int id2, int id4, int id6, int id24, int id26,int id28, int kec2, int kec4, int kec6, int kec24, int kec26,int kec28) {
  dxl.setPacketType(DXL_PACKET_TYPE2);
  dxl.goalPosition(2, id2); 
  dxl.goalSpeed(2, kec2);
  dxl.goalPosition(4, id4); 
  dxl.goalSpeed(4, kec4);
  dxl.goalPosition(6, id6); 
  dxl.goalSpeed(6, kec6);
  dxl.goalPosition(24, id24); 
  dxl.goalSpeed(24, kec24);
  dxl.goalPosition(26, id26); 
  dxl.goalSpeed(26, kec26);
  dxl.goalPosition(28, id28); 
  dxl.goalSpeed(28, kec28);
}

void ka(int sud7, int sud9, int sud11, int sud13, int sud15, int sud17, int kec7, int kec9, int kec11, int kec13, int kec15, int kec17){
  dxl.setPacketType(DXL_PACKET_TYPE1);
  dxl.goalSpeed(7, kec7);
  dxl.goalPosition(7, sud7);
  dxl.goalSpeed(9, kec9);
  dxl.goalPosition(9, sud9);
  dxl.goalSpeed(11, kec11);
  dxl.goalPosition(11, sud11);
  dxl.goalSpeed(13, kec13);
  dxl.goalPosition(13, sud13);
  dxl.goalSpeed(15, kec15);
  dxl.goalPosition(15, sud15);
  dxl.goalSpeed(17, kec17);
  dxl.goalPosition(17, sud17);
}

void ki(int sud8, int sud10, int sud12, int sud14, int sud16, int sud18, int kec8, int kec10, int kec12, int kec14, int kec16, int kec18){
  dxl.setPacketType(DXL_PACKET_TYPE1);
  dxl.goalSpeed(8, kec8);
  dxl.goalPosition(8, sud8);
  dxl.goalSpeed(10, kec10);
  dxl.goalPosition(10, sud10);
  dxl.goalSpeed(12, kec12);
  dxl.goalPosition(12, sud12);
  dxl.goalSpeed(14, kec14);
  dxl.goalPosition(14, sud14);
  dxl.goalSpeed(16, kec16);
  dxl.goalPosition(16, sud16);
  dxl.goalSpeed(18, kec18);
  dxl.goalPosition(18, sud18);
}
void b(int sud_id19, int kec19 ){
  dxl.setPacketType(DXL_PACKET_TYPE1);
  dxl.goalSpeed(19, kec19);
  dxl.goalPosition(19, sud_id19);
}
void badan(int id21,int kec21 )  {
  dxl.setPacketType(DXL_PACKET_TYPE1);
  dxl.goalPosition(21, id21); 
  dxl.goalSpeed(21, kec21);                          
}
void kepala(int id20, int id22, int id27, int kec20, int kec22, int kec27) {
    dxl.setPacketType(DXL_PACKET_TYPE2);
  dxl.goalPosition(20, id20); 
  dxl.goalSpeed(20, kec20);
  dxl.goalPosition(22, id22); 
  dxl.goalSpeed(22, kec22);
  dxl.goalPosition(27, id27); 
  dxl.goalSpeed(27, kec27);
}

