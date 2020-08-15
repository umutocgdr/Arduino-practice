const int buton = 6;
int sayac = 0; 
int butonDurumu = 0;  

void setup() {
 pinMode(buton, INPUT);
 Serial.begin(9600);
}
void loop() {
 butonDurumu = digitalRead(buton);
 if (butonDurumu == HIGH) {
   delay(10); 
   sayac ++; 
   Serial.print("Butona ");
   Serial.print(sayac); 
   Serial.println(". defa basildi.");
   while(butonDurumu == HIGH){
     butonDurumu = digitalRead(buton);
   }
   delay(10);
 }
}
