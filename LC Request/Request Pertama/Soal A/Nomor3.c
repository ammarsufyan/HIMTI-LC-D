#include <stdio.h>

int main() {
    // deklarasi pembilang dan penyebut
    // pembilang = a, penyebut = b
    int a1, b1, a2, b2;
    
    do {
        printf("Masukkan a1 dan b1 (a1/b1): ");
        scanf("%d/%d", &a1, &b1);
    }while(b1 == 0);

    do {
        printf("Masukkan a2 dan b2 (a2/b2): ");
        scanf("%d/%d", &a2, &b2);
    }while(b2 == 0);

    printf("========================================================\n");
    //penjumlahan pecahan 1 dan pecahan 2
    int hasil_penjumlahan;
    int fpb = b1 * b2;

    hasil_penjumlahan = (fpb/b1) * a1 + (fpb/b2) * a2;
    
    printf("\nHasil Penjumlahannya = %d/%d\n\n", hasil_penjumlahan, fpb);

    //pengurangan pecahan 1 dan pecahan 2
    int hasil_pengurangan;
    //fpb tetep pake yg penjumlahan

    hasil_pengurangan = (fpb/b1) * a1 - (fpb/b2) * a2;
    
    printf("Hasil Pengurangannya = %d/%d\n\n", hasil_pengurangan, fpb);

    //perkalian pecahan 1 dan pecahan 2
    int perkalian_pembilang, perkalian_penyebut;
    
    perkalian_pembilang = a1 * a2;
    perkalian_penyebut = b1 * b2;

    printf("Hasil Perkaliannya = %d/%d\n\n", perkalian_pembilang, perkalian_penyebut);

    //pembagian pecahan 1 dan pecahan 2
    int pembagian_pembilang, pembagian_penyebut;

    pembagian_pembilang = a1 * b2;
    pembagian_penyebut = b1 * a2;

    printf("Hasil Pembagiannya = %d/%d\n\n", pembagian_pembilang, pembagian_penyebut);
    printf("========================================================\n");

    return 0;
}