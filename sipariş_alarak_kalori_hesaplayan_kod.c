#include <stdio.h>
#include <string.h>

struct Urun {
    char ad[30];
    float kalori;
};

int main() {
    FILE *fKalori, *fSiparis;
    struct Urun urunler[100];
    char sipAd[30];
    float sipMiktar;
    int i, urunSayisi = 0;
    float toplamKalori = 0.0f;

    fKalori = fopen("kalori.txt", "r");
    if (fKalori == NULL) {
        printf("kalori.txt acilamadi\n");
        return 1;
    }

    while (fscanf(fKalori, "%s %f",
                  urunler[urunSayisi].ad,
                  &urunler[urunSayisi].kalori) != EOF) {
        urunSayisi++;
                  }
    fclose(fKalori);

    fSiparis = fopen("siparis.txt", "r");
    if (fSiparis == NULL) {
        printf("siparis.txt acilamadi\n");
        return 1;
    }

    while (fscanf(fSiparis, "%s %f", sipAd, &sipMiktar) != EOF) {
        for (i = 0; i < urunSayisi; i++) {
            if (strcmp(sipAd, urunler[i].ad) == 0) {
                toplamKalori += sipMiktar * urunler[i].kalori;
                break;
            }
        }
    }
    fclose(fSiparis);

    printf("Toplam Kalori: %.2f\n", toplamKalori);
    return 0;


    }