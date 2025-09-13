# Sistem Mimarisi

Bu proje **Arduino tabanlı otomatik deprem güvenlik sistemi**dir.  
Sistem katmanları şu şekildedir:

- **Sensör Katmanı**  
  MPU6050 (ivmeölçer + jiroskop) → sarsıntı verilerini toplar.

- **Kontrol Katmanı**  
  Arduino Uno → sensör verilerini işler, eşik değerine göre karar verir.

- **Uyarı/Çıkış Katmanı**  
  - Buzzer → sesli alarm verir.  
  - Röle → bağlı cihazları güvenli şekilde kapatır.  
  - LED → görsel uyarı sağlar.  
  - (Opsiyonel) LCD ekran → kullanıcıya bilgi gösterir.

- **Güvenlik ve Dayanıklılık**  
  - Fail-safe çalışma (sensör arızasında güvenli moda geçiş).  
  - Eşik değeri kalibrasyonu ve yalancı tetiklemelere karşı filtre.

---

Bu mimari, sistemin hem güvenilir hem de anlaşılır bir şekilde çalışmasını sağlar.
