#include <stdio.h>

int main() {
    int hh, mm, ss, tambahMenit;

    do {
        printf("Masukkan Jam Lama (hh:mm:ss):");
        scanf("%02d:%02d:%02d", &hh, &mm, &ss);
    }while(hh >= 24 || mm >= 60 || ss >= 60);    

    printf("\nJam Lama = %02d:%02d:%02d\n", hh, mm, ss);

    do {
        printf("Ingin Menambah Berapa Menit? ");
        scanf("%02d", &tambahMenit);
    }while(tambahMenit < 0);

    mm += tambahMenit; // mm = mm + tambahMenit

    if(mm == 60) {
        hh += 1;
        mm = 0;
    }

    if(hh == 24) {
        hh = 0;
    }

    printf("\nJam Lama + 1 Menit = %02d:%02d:%02d", hh, mm, ss);

    return 0;
}