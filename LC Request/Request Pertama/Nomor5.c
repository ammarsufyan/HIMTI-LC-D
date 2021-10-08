#include <stdio.h>

int main() {
    float hari;

    do {
        printf("Masukkan Hari: ");
        scanf("%f", &hari);
    } while(hari <= 0);

    float bulan = hari/30;

    float tahun = hari/365;

    printf("============================================\n");
    printf("hari  = %f\n"
           "bulan = %f\n"
           "tahun = %f\n",
            hari, bulan, tahun);
    printf("============================================\n");

    printf("(YY:MM:DD) = %.2f:%.2f:%.2f\n", tahun, bulan, hari);
    printf("============================================\n");
    return 0;
}