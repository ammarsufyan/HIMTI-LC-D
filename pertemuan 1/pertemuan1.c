#include <stdio.h>

#include<math.h>

#define uangJajan 50000
#define karakter 'A'
#define phi 3.14
#define prodi "Teknik Informatika"

int main(){
    // integer
    // bilangan bulat
    int A = 3;
    int B = -4;
    printf("nilai A: %d\n", A);
    printf("nilai B: %d\n", B);

    // float double
    // bilangan pecahan
    float C = 3.5+4;
    double D = 3.14 * 10;
    printf("nilai C: %f\n", C);
    printf("nilai D: %lf\n", D);

    // char
    char gradeKamu = 'A';
    char gradeAku = gradeKamu;
    printf("nilai dari variabel gradeKamu: %c\n", gradeKamu);
    printf("nilai dari variabel gradeAku: %c\n", gradeAku);

    // string
    // gabungan dari beberapa char
    char nama[25] = "adit";
    printf("nama saya %s\n", nama);

    // menggunakan fungsi header
    int angka = 9;
    float hasil = sqrt(angka);
    printf("hasil kuadratnya adalah: %f\n", hasil);

    int contohAngka; // deklarasi
    contohAngka = 2; // inisialisasi
    float angkaDesimal; // deklarasi
    angkaDesimal = 9.9; // inisialisasi
    char simbol; // deklarasi
    simbol = '$'; // inisialisasi

    // menggunakan konstanta
    printf("uang jajan saya hari ini %d\n", uangJajan);
    printf("nilai dari konstanta karakter adalah: %c\n", karakter);
    printf("nilai phi: %f\n", phi);
    printf("saya mahasiswa UIN Jakarta prodi %s", prodi);

    // contoh penginputan
    int inputAngka;
    printf("masukkan angka: ");
    scanf("%d", &inputAngka);
    printf("angka kamu: %d", inputAngka);

    // macam-macam operasi aritmatika
    int z;
    int x = 3;
    int y = 2;
    // penambahan
    z = x + y;
    printf("nilai z: %d\n", z);

    // pengurangan
    z = x - y;
    printf("nilai z: %d\n", z);

    // perkalian
    z = x * y;
    printf("nilai z: %d\n", z);

    // pembagian
    z = x / y;
    printf("nilai z: %d\n", z);

    // modulus
    z = x % y;
    printf("nilai z: %d\n", z);

    // contoh increment dan decrement
    int angkaLain = 1;
    angkaLain++; // increment
    printf("angka sekarang menjadi: %d\n", angkaLain);

    angkaLain--; // decrement
    printf("angka sekarang menjadi: %d\n", angkaLain);


    // sekuens
    int angka1, angka2, angka3, angka4;
    angka1 = 1;
    angka2 = 2;
    angka3 = 3;
    angka4 = 10;

    angka4 = angka1 + angka3; // nilai angka4 berubah yang semula 10 menjadi 4
    printf("nilai dari angka4 adalah %d\n", angka4);

    angka2 = angka2 + angka1; // nilai angka2 berubah yang semula 2 menjadi 3
    angka4 = angka2 * angka3; // nilai angka4 berubah yang semula 4 menjadi 9
    printf("nilai dari angka4 berubah! sekarang nilainya adalah %d\n", angka4);

    return 0;
}
