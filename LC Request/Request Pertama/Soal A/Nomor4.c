#include<stdio.h>

int main(){
    int detik, menit, jam, hari;

    do{
        printf("Masukkan detik: ");
        scanf("%d", &detik);
    }while(detik <= -1);

    hari = detik/86400;
    detik %= 86400;

    jam = detik/3600;
    detik %= 3600;

    menit = detik/60;
    detik %= 60;

    printf("Hari: %d\n", hari);
    printf("Jam: %d\n", jam);
    printf("Menit: %d\n", menit);
    printf("Detik: %d", detik);
    return 0;
}
