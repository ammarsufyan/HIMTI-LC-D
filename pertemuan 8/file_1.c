#include <stdio.h>

#define BUFFER_SIZE 1000
void readFile(FILE *fPtr)
{
    char ch;
    do {
        ch = fgetc(fPtr);
        putchar(ch);
    } while (ch != EOF);
}

int main() {
    //FILE *test = fopen(“namafile",“filemode");
    FILE *demo = fopen("file_keren.txt", "a+");
    // gw pake a+ karena dia append dan sekalian buat file kalau gaada

    // fputs("COBA MASUKKIN INI", demo); //MASUKIN MANUAL
    // fputs("\n", demo); // membuat baris baru

    //GUA COBA PAKAI INPUT
    char input[100];
    printf("Masukkan kata: ");
    fflush(stdin);
    scanf("%s", input);
    fputs(input, demo);
    
    rewind(demo); // balikin pointer/cursor ke awal
    readFile(demo); // prosedur untuk baca file
    fclose(demo); // abis dibuka jgn lupa ditutup
    return 0;
}