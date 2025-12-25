# Sipari-alarak-kalori-hesaplama-sistemi
Ürünlerin kalori bilgilerini dosyadan okuyarak, müşteri siparişine göre toplam kalori miktarını hesaplayan C programıdır. Kalori bilgileri kalori.txt dosyasında, siparişler ve miktarları siparis.txt dosyasında tutulur. Program, sipariş dosyasındaki ürünleri kalori listesiyle eşleştirir ve miktar ile birim kaloriyi çarparak toplam kaloriyi hesaplar.

KULLANILAN YÖNTEM VE YAPILAR:
struct kullanılarak ürün adı ve kalori bilgileri tutulmuştur
Dosya işlemleri (fopen, fscanf, fclose)
String karşılaştırması (strcmp)
Dinamik sipariş hesaplama (önceden sipariş sayısı bilinmeden)

DOSYA YAPISI:
kalori.txt → Ürün adı ve kalori bilgilerini tutar
siparis.txt → Sipariş edilen ürün adı ve miktarını tutar.
main.c → Programın kaynak kodu

PROGRAM ÇIKTISI:
Program çalıştırıldığında siparişe ait toplam kalori değeri ekrana yazdırılır.

