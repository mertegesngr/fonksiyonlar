#include <stdio.h>
#include <stdlib.h>

void fonksiyon(int _sayi) {
    int basamak;
    int gecici1 = _sayi;
    int toplam = 0;
    int faktoriyel;

    while (gecici1 > 0) {
        basamak = gecici1 % 10;  // Sayının son basamağını al
        gecici1 = gecici1 / 10;  // Bir sonraki basamağa geç

        // Basamağın faktöriyelini hesapla
        faktoriyel = 1;
        for (int j = 1; j <= basamak; j++) {
            faktoriyel *= j;
        }

        toplam += faktoriyel;  // Faktöriyel toplamına ekle
    }

    // Güçlü sayı kontrolü
    if (toplam == _sayi) {
        printf("%d sayısı güçlü sayıdır.\n", _sayi);
    } else {
        printf("%d sayısı güçlü sayı değildir.\n", _sayi);
    }
}

int main() {
    int sayi;

    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);

    fonksiyon(sayi);

    return 0;
}
