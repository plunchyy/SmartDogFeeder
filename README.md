# SmartDogFeeder เครื่องให้อาหารสุนัขอัจฉริยะ
### โปรเจคนี้เป็นส่วนหนึ่งของรายวิชา CSS499 Internet of Thing
[Demo](https://drive.google.com/file/d/162SY2mjsZ8-6Eju_jFf_h986l9WPmtPA/view?usp=sharing) การทำงานของเครื่องให้อาหารสุนัขอัจฉริยะ
### ขั้นตอนการใช้งานโค้ด และแอปพลิเคชั่น Blynk
1. เลือกบอร์ด NodeMCU 1.0 (ESP-12E Module)
2. ติดตั้ง library Servo และ Blynk
3. Upload และ Run โค้ด
4. Dowload แอปพลิเคชั่น Blynk
5. เลือก Add New Device ในแอปพลิเคชั่น Blynk
6. เชื่อมต่อ Blynk กับ ESP8266 (ใส่ชื่อ WiFi และ Password WiFi)
7. สร้าง Button สำหรับควบคุมการทำงานของ Servo Motor 
   * sub item เลือก Datastream เป็น V1
   * sub item เลือก Mode เป็น Push
8. สร้าง Gauge สำหรับดูปริมาณอาหารคงเหลือภายในเครื่องให้อาหารสุนัขอัจฉริยะ
   * sub item เลือก Datastream เป็น V3

### ฟังก์ชันการทำงานของเครื่องให้อาหารสุนัขอัจฉริยะ
1. สามารถให้อาหารสุนัขได้ ผ่านทางแอปพลิเคชั่น Blynk
2. สามารถตรวจสอบปริมาณอาหารคงเหลือภายในเครื่องให้อาหารสุนัขอัจฉริยะได้ ผ่านทางแอปพลิเคชั่น Blynk

### ขั้นตอนการใช้งานเครื่องให้อาหารสุนัขอัจฉริยะ
1. เสียบ Adapter เพื่อเริ่มใช้งาน
2. เข้าแอปพลิเคชั่น Blynk
3. กดปุ่มเพื่อให้อาหารสุนัข
4. ดูปริมาณอาหารคงเหลือภายในเครื่องให้อาหารสุนัขอัจฉริยะ
