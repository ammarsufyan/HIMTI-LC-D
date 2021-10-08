#include <stdio.h>

int main() {
    int hh, mm, ss;
    
    do {
        printf("Masukkan Jam (hh:mm:ss): ");
        scanf("%02d:%02d:%02d", &hh, &mm, &ss);
    }while(hh >= 24 || mm >= 60 || ss >= 60);

    printf("Jam Lama = %02d:%02d:%02d\n\n", hh, mm , ss);
    
    // nambah 1 detik
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

    printf("Jam Lama + 1 detik = %02d:%02d:%02d\n\n", hh, mm , ss);

    return 0;
}