#include <stdio.h>

// prosedur untuk menampilkan tulisan di setiap baris sampai baris terakhir file
void readFile(FILE *fPtr)
{
    char ch;
    do {
        ch = fgetc(fPtr);
        putchar(ch);
    } while (ch != EOF);
}

int main() {
    // FILE *test = fopen(“namafile",“filemode");
    FILE *demo = fopen("file_teks.txt", "a+"); // a+ = append dan read

    // memasukkan kata yang diinput user ke file
    char input_user[100];
    printf("Masukkan kata: ");
    fgets(input_user, 100, stdin);
    fputs(input_user, demo);

    rewind(demo); // balikin cursor ke awal
    readFile(demo); // baca file
    fclose(demo); // tutup file

    // TEST UNTUK VALIDASI FILE JIKA TIDAK ADA
    // FILE *demo = fopen("asd.txt", "r"); // r = read
    // if (demo == NULL) {
    //     printf("FILE BELUM DIBUAT!\n");
    //     return 1;
    // }
    
    // printf("BARIS INI GAK DI JALANIN");
    return 0;
}