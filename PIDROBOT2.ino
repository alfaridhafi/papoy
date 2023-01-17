void tegakt(int servokan,int servokir,int servokan2,int servokir2){
  //step0
  kom();
  ka (1972, 2052, 1962-servokan, 2193, 2166+servokan2, 2045,  30, 30, 55, 76, 31, 30);  
  ki (1985, 2046, 2024+servokir, 2038, 1938-servokir2, 2033,  30, 30, 72, 103, 43, 2);  
  b  (2072, 40);
  p  (512, 40);
  delay(6000);
}
void jalant(int servokan,int servokir,int servokan2,int servokir2){
  //step1
  kom();
  ka (2015, 2161, 2045-servokan, 2138, 2174-servokan2, 2287,  10, 25, 19, 12, 2, 47);  
  ki (2003, 1950, 2089-servokir, 2060, 1972-servokir2, 2175,  4, 22, 15, 5, 8, 35);  
  b  (2074, 40);
  p  (512, 40);
  delay(800);
  //step2
  ka (2047, 2180, 1790+servokan, 2011, 1881+servokan2, 2203,  7, 4, 58, 29, 66, 10);  
  ki (2045, 1989, 2063+servokir, 2060, 1972-servokir2, 2175,  9, 9, 6, 30, 30, 30);  
  b  (2074, 40);
  p  (512, 40);
  delay(700);
  //step3
  kom();
  ka (2013, 2107, 1814-servokan, 2200, 2039-servokan2, 2091,  8, 16, 5, 43, 36, 25);  
  ki (2045, 2033, 2026+servokir, 2026, 1873+servokir2, 2046,  30, 10, 8, 8, 22, 27);  
  b  (2074, 40);
  p  (512, 40);
  delay(900);
  //step4
  kom();
  ka (2008, 2023, 1900-servokan, 2200, 2150-servokan2, 1888,   2, 19, 70, 1, 40, 45);  
  ki (1997, 1847, 2190-servokir, 1952, 1940-servokir2, 1791,  11,42, 37, 17, 15, 58);  
  b  (2059, 40);
  p  (512, 40);
  delay(800);
  //step5
  kom();
  ka (2008, 2023, 1900-servokan, 2200, 2150+servokan2, 1888,  30, 30, 30, 30, 30, 30);  
  ki (2005, 1847, 2437-servokir, 1952, 2130-servokir2, 1753,  2,30, 56, 30, 43, 9);  
  b  (2059, 40);
  p  (512, 40);
  delay(700);
  //step6
  kom();
  ka (2008, 2149, 1911-servokan, 2315, 2256-servokan2, 2106,  30, 29,9 , 26, 26, 61);  
  ki (2002, 2093, 2290+servokir, 1964, 2021+servokir2, 2027,  1, 56, 30, 3, 25, 65);  
  b  (2059, 40);
  p  (512, 40);
  delay(850);
  //step7
  kom();
  ka (2008, 2294, 1872+servokan, 2070, 2035+servokan2, 2374,  30, 33, 9, 56, 50, 61);  
  ki (2002, 2037, 2262+servokir, 1964, 1979+servokir2, 2200,  30, 13, 4,30, 9, 39);  
  b  (2059, 40);
  p  (512, 40);
  delay(800);
  //step8
  kom();
  ka (2008, 2309, 1640+servokan, 2070, 1897+servokan2, 2284,  30, 3, 53, 49, 31, 20);  
  ki (2002, 2119, 2262+servokir, 1964, 1979+servokir2, 2200,  30, 19, 30, 28, 30, 30);  
  b  (2059, 40);
  p  (512, 40);
  delay(700);
  //step9
  kom();
  ka (2013, 2107, 1814-servokan, 2200, 2039-servokan2, 2091,  2, 46, 39, 16, 32, 44);  
  ki (2045, 2033, 2026+servokir, 2026, 1873+servokir2, 2046,  10, 19, 54, 14, 24, 39);  
  b  (2074, 40);
  p  (512, 40);
  delay(650);
}
void lanjutant(int servokan,int servokir,int servokan2,int servokir2) {
  //step4
  kom();
  ka (2008, 2023, 1850-servokan, 2200, 2141-servokan2, 1888,  2, 19, 50, 1, 23, 45);  
  ki (1997, 1847, 2190-servokir, 1952, 1940-servokir2, 1791,  11,42, 37, 17, 15, 58);  
  b  (2059, 40);
  p  (512, 40);
  delay(800);
  //step5
  kom();
  ka (2008, 2023, 1870-servokan, 2200, 2141-servokan2, 1888,  30, 30, 30, 30, 30, 30);  
  ki (2005, 1847, 2437-servokir, 1952, 2130-servokir2, 1753,  2,30, 56, 30, 43, 9);  
  b  (2059, 40);
  p  (512, 40);
  delay(700);
  //step6
  kom();
  ka (2008, 2149, 1911-servokan, 2315, 2256-servokan2, 2106,  30, 29,9 , 26, 26, 61);  
  ki (2002, 2093, 2290+servokir, 1964, 2021+servokir2, 2027,  1, 56, 30, 3, 25, 65);  
  b  (2059, 40);
  p  (512, 40);
  delay(850);
  //step7
  kom();
  ka (2008, 2294, 1872+servokan, 2070, 2035+servokan2, 2374,  30, 33, 9, 56, 50, 61);  
  ki (2002, 2037, 2262+servokir, 1964, 1979+servokir2, 2200,  30, 13, 4, 30,  9, 39);  
  b  (2059, 40);
  p  (512, 40);
  delay(800);
  //step8
  kom();
  ka (2008, 2309, 1640+servokan, 2070, 1897+servokan2, 2284,  30,  3, 53, 49, 31, 20);  
  ki (2002, 2119, 2262+servokir, 1964, 1979+servokir2, 2200,  30, 19, 30, 28, 30, 30);  
  b  (2059, 40);
  p  (512, 40);
  delay(700);
  //step9
  kom();
  ka (2013, 2107, 1814-servokan, 2200, 2039-servokan2, 2091,  2,  46, 39, 16, 32, 44);  
  ki (2045, 2033, 2026+servokir, 2026, 1873+servokir2, 2046,  10, 19, 54, 14, 24, 39);  
  b  (2074, 40);
  p  (512, 40);
  delay(650);
   //step4
  kom();
  ka (2008, 2023, 1850-servokan, 2200, 2141-servokan2, 1888,  2,  19, 50, 1, 23, 45);  
  ki (1997, 1847, 2190-servokir, 1952, 1940-servokir2, 1817,  11, 42, 37, 17, 15, 58);  
  b  (2059, 40); 
  p  (512, 40);
  delay(800);
}
void gerakjoget(int servokan,int servokir,int servokan2,int servokir2){
  //step1
  kom();
  ka (1972, 2052, 1725+servokan, 2523, 2296-servokan2, 2045,  30, 30, 53,  74, 29, 30);  
  ki (1985, 2046, 2334-servokir, 1583, 1753+servokir2, 2036,  30, 30, 70, 103, 42, 2);  
  b  (2072, 40);
  p  (512, 60);
  delay(800);
    //step2
  kom();
  ka (1972, 2208, 1962-servokan, 2193, 2166+servokan2, 2188,  30, 35, 53,  74, 29, 32);  
  ki (1985, 2195, 2024+servokir, 2038, 1938-servokir2, 2172,  30, 34, 70, 102, 42, 31);  
  b  (2072, 40);
  p  (427, 60);
  delay(800);
  //step3
  kom();
  ka (1972, 2052, 1725+servokan, 2523, 2296-servokan2, 2045,  30, 35, 53,  74, 29, 32);  
  ki (1985, 2046, 2334-servokir, 1583, 1753+servokir2, 2036,  30, 34, 69, 103, 42, 31);  
  b  (2072, 40);
  p  (582, 60);
  delay(800);
  //step4
  kom();
  ka (1972, 1884, 1962-servokan, 2193, 2166+servokan2, 1858,  30, 39, 53,  74, 29, 42);  
  ki (1985, 1877, 2024+servokir, 2038, 1938-servokir2, 1849,  30, 38, 70, 103, 42, 42);  
  b  (2072, 40);
  p  (433, 60);
  delay(800);
   //step5
  kom();
  ka (1972, 2052, 1725+servokan, 2523, 2296-servokan2, 2045,  30, 39, 53, 76, 29, 42);  
  ki (1985, 2046, 2334-servokir, 1583, 1753+servokir2, 2036,  30,38, 70, 103, 42, 42);  
  b  (2072, 40);
  p  (512, 60);
  delay(800);
}


