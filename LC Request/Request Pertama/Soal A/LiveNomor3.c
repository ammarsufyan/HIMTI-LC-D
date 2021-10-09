#include <stdio.h>

int main() {
    int a1, b1; //untuk pecahan 1 (a1/b1)
    int a2, b2; //untuk pecahan 2 (a2/b2)

    do {
        printf("Masukkan a1 dan b1 (a1/b1): "); 
        scanf("%d/%d", &a1, &b1);
    } while(b1 == 0);

    do {
        printf("Masukkan a2 dan b2 (a2/b2): ");
        scanf("%d/%d", &a2, &b2);
    } while(b2 == 0);

    printf("Pecahan 1 = %d/%d\n", a1, b1);
    printf("Pecahan 2 = %d/%d\n", a2, b2);

    int fpb = b1 * b2;
    //PENJUMLAHAN PECAHAN 1 DAN PECAHAN 2
    int hasil_penjumlahan = (fpb/b1) * a1 + (fpb/b2) * a2;
    printf("Hasil Penjumlahannya = %d/%d\n", hasil_penjumlahan, fpb);

    //PENGURANGAN PECAHAN 1 DAN PECAHAN 2
    int hasil_pengurangan = (fpb/b1) * a1 - (fpb/b2) * a2;
    printf("Hasil Penjumlahannya = %d/%d\n", hasil_pengurangan, fpb);
                    
    //PERKALIAN PECAHAN 1 DAN PECAHAN 2
    int perkalian_pembilang = a1 * a2;
    int perkalian_penyebut = b1 * b2;
    printf("Hasil Perkaliannya = %d/%d\n", perkalian_pembilang, perkalian_penyebut);

    //PEMBAGIAN PECAHAN 1 DAN PECAHAN 2
    int pembagian_pembilang = a1 * b2;
    int pembagian_penyebut = b1 * a2;

    printf("Hasil Pembagiannya = %d/%d\n", pembagian_pembilang, pembagian_penyebut);

    return 0;
}