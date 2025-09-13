# Algoritma ve Karar Mantığı

- MPU6050 sensöründen ivme değerleri okunur.  
- Büyüklük `|a|` hesaplanır (veya belirli eksen seçilir).  
- Eğer ivme **eşik değerini** (ör. 1.5 g) aşarsa → **sarsıntı olayı** kaydedilir.  
- Belirli bir **zaman penceresi** (ör. 500 ms) içinde birden fazla eşik aşımı olursa → **alarm tetiklenir**.  
- Alarm tetiklendiğinde:  
  - Buzzer aktif olur.  
  - Röle devreye girer (bağlı cihazları güvenli kapatır).  
  - LED yanar.  
  - Opsiyonel: LCD ekranda “Deprem Algılandı” mesajı çıkar.  
- Alarm, olay devam ettiği sürece sürdürülür (ör. 3 sn).  
- Sarsıntı kesildikten sonra sistem tekrar normal duruma geçer.  
