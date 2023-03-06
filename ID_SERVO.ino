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
void z(int sud_id22, int kec22 ){
  Dxl.setPacketType(DXL_PACKET_TYPE2);
  Dxl.goalSpeed(22, kec22);
  Dxl.goalPosition(22, sud_id22);
}
void p(int sud_id21, int kec21 ){
  Dxl.setPacketType(DXL_PACKET_TYPE1);
  Dxl.goalSpeed(21, kec21);
  Dxl.goalPosition(21, sud_id21);
}
void kepala(int id20, int id22, int id27, int kec20, int kec22, int kec27) {
    Dxl.setPacketType(DXL_PACKET_TYPE2);
  Dxl.goalPosition(20, id20); 
  Dxl.goalSpeed(20, kec20);
  Dxl.goalPosition(22, id22); 
  Dxl.goalSpeed(22, kec22);
  Dxl.goalPosition(27, id27); 
  Dxl.goalSpeed(27, kec27);
}
void takan(int id1, int id3, int id5, int id23, int id25,int id29,int kec1, int kec3, int kec5, int kec23, int kec25,int kec29) {
   Dxl.setPacketType(DXL_PACKET_TYPE2);
   Dxl.goalPosition(1, id1); 
   Dxl.goalSpeed(1, kec1);
   Dxl.goalPosition(3, id3); 
   Dxl.goalSpeed(3, kec3);
   Dxl.goalPosition(5, id5); 
   Dxl.goalSpeed(5, kec5);
   Dxl.goalPosition(23, id23); 
   Dxl.goalSpeed(23, kec23);
   Dxl.goalPosition(25, id25); 
   Dxl.goalSpeed(25, kec25);
   Dxl.goalPosition(29, id29); 
   Dxl.goalSpeed(29, kec29);
}

void takir(int id2, int id4, int id6, int id24, int id26,int id28, int kec2, int kec4, int kec6, int kec24, int kec26,int kec28) {
   Dxl.setPacketType(DXL_PACKET_TYPE2);
   Dxl.goalPosition(2, id2); 
   Dxl.goalSpeed(2, kec2);
   Dxl.goalPosition(4, id4); 
   Dxl.goalSpeed(4, kec4);
   Dxl.goalPosition(6, id6); 
   Dxl.goalSpeed(6, kec6);
   Dxl.goalPosition(24, id24); 
   Dxl.goalSpeed(24, kec24);
   Dxl.goalPosition(26, id26); 
   Dxl.goalSpeed(26, kec26);
   Dxl.goalPosition(28, id28); 
   Dxl.goalSpeed(28, kec28);
}



