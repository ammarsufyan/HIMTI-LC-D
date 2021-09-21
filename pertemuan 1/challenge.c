#include<stdio.h>

int main(){
    char nama[25];
    char nim[25];

    printf("masukkan nama kamu: ");
    scanf("%s", nama);

    // catatan:
    // kalau kalian ingin menginput nama lengkap (ada spasi) bisa gunakan fungsi dibawah
//    fgets(nama, 25, stdin);
    printf("masukkan nim kamu: ");
    scanf("%s", nim);

    printf("halo perkenalkan nama saya %s\n", nama);
    printf("nim saya adalah %s\n", nim);

    return 0;
}
