#include<stdio.h>

int main(){
    int hari, bulan, tahun;

    do{
        printf("Masukkan hari: ");
        scanf("%d", &hari);
    }while(hari <= -1);

    tahun = hari/365;
    hari %= 365;

    bulan = hari/30;
    hari %= 30;

    printf("Tahun: %d\n", tahun);
    printf("Bulan: %d\n", bulan);
    printf("Hari: %d\n", hari);

    return 0;
}
