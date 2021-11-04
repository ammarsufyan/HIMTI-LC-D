#include<stdio.h>

typedef struct{
    char nim[20];
    char nama[25];
    float ipk;
}Mahasiswa;

typedef struct{
    char kode_prodi[10];
    char nama_prodi[20];
    Mahasiswa mhs;
}Prodi;

int main(){
    Prodi p;

    printf("Masukkan kode prodi: ");
    scanf("%s", &p.kode_prodi);

    while(getchar() != '\n');

    printf("Masukkan nama prodi: ");
    gets(p.nama_prodi);

    printf("Masukkan NIM: ");
    scanf("%s", &p.mhs.nim);

    while(getchar() != '\n');

    printf("Masukkan Nama: ");
    gets(p.mhs.nama);

    printf("Masukkan IPK: ");
    scanf("%f", &p.mhs.ipk);

    printf("Prodi %s, memiliki kode prodi %s", p.nama_prodi, p.kode_prodi);
    printf("\nMemiliki mahasiswa bernama %s, dengan NIM %s, dan memiliki IPK %0.1f", p.mhs.nama, p.mhs.nim, p.mhs.ipk);

    return 0;
}
