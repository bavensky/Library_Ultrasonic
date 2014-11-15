  /*******************************************************************************
   * Example for using ultrasonic HC_SR04                                        *
   * Code By Bavenky :3                                                          *
   * E-Mail   : Aphiuk_Sang-ngenchai@hotmail.com                                *
   * Date     : 15/11/2014 [dd/mm/yyyy]                                          *
   * Released into the public domain                                             *
   *******************************************************************************/
   
  #include <Ultrasonic.h>  //   เรียกใช้งานไลบรารี่ Ultrasonic   //
  
  /*******************************************
   Ultrasonic apiruk(trigpin, echopin);
   apiruk    คือ ชื่อที่จะเรียกใช้งาน
   trigpin   คือ ขาที่ใช้สำหรับทริ๊คให้กับอัลตร้าโซนิค
   echopin   คือ ขาที่ใช้สำหรับอ่านค่าจากอัลตร้าโซนิค
  ********************************************/
  Ultrasonic apiruk(12, 11);
  
  
  int distance = 0;  //  ประกาศตัวแปรแบบจำนวนเต็มโดยตั้งชื่อว่า distance
  
  void setup() {
    Serial.begin(9600);  //  ตั้งความเร็วอัตราของการถ่ายทอดข้อมูล 9600 bps
      
  }
  
  void loop() {
    distance = apiruk.check();  //  อ่านค่าจากอัลตร้าโซนิคและคำนวนเป็นเซนติเมตร
                                //  โดยเก็บค่าไว้ที่ตัวแปร distance 
    Serial.print("Distance = ");                       
    Serial.print(distance);       
    Serial.println(" cm ");
  }
