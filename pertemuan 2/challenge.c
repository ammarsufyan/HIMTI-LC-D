#include <stdio.h>

int main() {
    float formatif, UTS, UAS, nilaiAkhir;

    printf("Masukkan Nilai Formatif Anda: ");
    scanf("%f", &formatif);

    printf("Masukkan Nilai UTS Anda: ");
    scanf("%f", &UTS);

    printf("Masukkan Nilai UAS Anda: ");
    scanf("%f", &UAS);

    //menentukan nilai akhir dengan ketentuan 40% formatif, 30% UTS, dan 30% UAS.
    nilaiAkhir = formatif * 0.4 + UTS * 0.3 + UAS * 0.3;

    if(nilaiAkhir >= 90 && nilaiAkhir <= 100) {
        printf("\nNilai Huruf Anda = A");
    } else if (nilaiAkhir >= 80 && nilaiAkhir <= 89) {
        printf("\nNilai Huruf Anda = B");
    } else if (nilaiAkhir >= 70 && nilaiAkhir <= 79) {
        printf("\nNilai Huruf Anda = C");
    } else if (nilaiAkhir >= 60 && nilaiAkhir <= 69) {
        printf("\nNilai Huruf Anda = D");
    } else if (nilaiAkhir >= 0 && nilaiAkhir <= 59) {
        printf("\nNilai Huruf Anda = E");
    } else {
        printf("\nNilai Anda Tidak Jelas");
    }

    return 0;
}