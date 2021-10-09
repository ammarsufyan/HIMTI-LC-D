#include <stdio.h>

int main() {
    int hh, mm, ss;

    do {
        printf("Masukkan Jam Lama (hh:mm:ss):");
        scanf("%02d:%02d:%02d", &hh, &mm, &ss);
    }while(hh >= 24 || mm >= 60 || ss >= 60);    

    printf("\nJam Lama = %02d:%02d:%02d", hh, mm, ss);

    ss += 1;
    if(ss == 60) {
        mm += 1;
        ss = 0;
    }

    if(mm == 60) {
        hh += 1;
        mm = 0;
    }

    if(hh == 24) {
        hh = 0;
    }

    printf("\nJam Lama + 1 Detik = %02d:%02d:%02d", hh, mm, ss);
    return 0;
}