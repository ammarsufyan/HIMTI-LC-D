#include <stdio.h>

int main() {
    int hh, mm, ss;
    
    do {
        printf("Masukkan Jam (hh:mm:ss): ");
        scanf("%02d:%02d:%02d", &hh, &mm, &ss);
    }while(hh >= 24 || mm >= 60 || ss >= 60);

    printf("Jam Lama = %02d:%02d:%02d\n\n", hh, mm , ss);

    // nambah 1 menit
    int tambahMenit;

    printf("Ingin menambah berapa menit?");
    scanf("%02d", &tambahMenit);

    mm += tambahMenit;

    while(mm >= 60) {
        mm -= 60;
        hh += 1;
    }

    if(hh == 24) {
        hh = 0;
    }

    printf("Jam Lama + 1 menit = %02d:%02d:%02d\n\n", hh, mm , ss);

    return 0;
}