# OtomatikMetronom- BpMO

📌 Proje Adı
Arduino Tabanlı Otomatik BPM Ayarlamalı Dijital Metronom Tasarımı

📌 Proje Tanımı
Bu proje kapsamında Arduino Uno mikrodenetleyici kullanılarak dijital bir metronom sistemi tasarlanmıştır. Sistem, potansiyometre yardımıyla anlık BPM (Beats Per Minute) ayarı yapabilmekte, her 16 vuruşta BPM değerini otomatik 4 birim artırmakta ve hem buzzer hem LED aracılığıyla ritmi kullanıcıya işitsel ve görsel olarak bildirmektedir.

📌 Özellikler
BPM ayarlama (60-240 BPM arası)

Her 16 vuruşta otomatik BPM artışı (+4 BPM)

Potansiyometre ile gerçek zamanlı BPM kontrolü

LED ve buzzer ile senkron vuruş bildirimleri

Arduino IDE ortamında geliştirilmiş yazılım

📌 Kullanılan Malzemeler
Parça	Adet
Arduino Uno	1
10K Potansiyometre	1
LED	1
220Ω Direnç	1
Buzzer	1
Breadboard	1
Jumper Kablolar	Gerektiği kadar

📌 Devre Bağlantıları
Potansiyometre:

Orta bacak → A0 (Arduino)

Sağ bacak → 5V (Arduino)

Sol bacak → GND (Arduino)

Buzzer:

Uzun bacak → D9 (Arduino)

Kısa bacak → GND (Arduino)

LED ve Direnç:

D8 (Arduino) → 220Ω Direnç → LED Uzun Bacak (Anot)

LED Kısa Bacak → GND (Arduino)

📌 Kod Kullanımı
Arduino IDE ortamında .ino dosyası açılır.

Kablo bağlantıları yukarıdaki şemaya uygun şekilde yapılır.

Kod yüklenir.

Sistem açıldığında otomatik çalışmaya başlar.

📌 Proje Videosu
Projenin çalışır halde videosunu aşağıdaki bağlantıdan izleyebilirsiniz:

🔗 YouTube Video Linki: https://www.youtube.com/shorts/3sarBobchBk

📌 Simülasyon ve Kod Bağlantıları
Tinkercad Simülasyon Linki: https://www.tinkercad.com/things/gmqSepDFVlE-daring-hillar/editel?returnTo=%2Fthings%2FgmqSepDFVlE-daring-hillar&sharecode=x0dERtjarLnRbCXJdek67yvE5drAiXCy7oUySptYYrU

GitHub Kod Linki: https://github.com/sercanbahadiir/OtomatikMetronom/blob/main/metronom.ino

📌 Proje Amacı
Bu proje; temel Arduino programlama, elektronik devre tasarımı ve fiziksel programlama prensiplerini öğretmek amacıyla geliştirilmiştir. Proje öğrencinin gerçek zamanlı sinyal işleme, zamanlayıcılar, sensör kullanımı ve basit gömülü sistem tasarımı yetkinliğini artırmayı hedeflemektedir.

📌 Katkı ve Teşekkür
Bu proje, Ankara Üniversitesi, Bilgisayar ve Öğretim Teknolojileri Eğitimi dersi kapsamında gerçekleştirilmiştir.

