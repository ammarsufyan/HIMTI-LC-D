#include <stdio.h>

int main() {
    float detik;

    do {
        printf("Masukkan Detik: ");
        scanf("%f", &detik);
    } while(detik <= 0);

    float menit = detik/60;

    float jam = detik/3600;

    float hari = detik/86400;

    printf("============================================\n");
    printf("Detik = %f\n"
           "Menit = %f\n"
           "Jam   = %f\n"
           "Hari  = %f\n",
            detik, menit, jam, hari);
    printf("============================================\n");

    //dengan format (DD:hh:mm:ss)
    printf("(DD:hh:mm:ss) = %.2f:%.2f:%.2f:%.2f\n", hari, jam, menit, detik);
    printf("============================================\n");
    return 0;
}