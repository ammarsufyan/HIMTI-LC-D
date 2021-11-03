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
    // fputs("COBA MASUKKIN INI", demo);

    fputs("\n", demo); // membuat baris baru

    //GUA COBA PAKAI INPUT
    char input[100];
    printf("Masukkan kata: ");
    fflush(stdin);
    scanf("%s", input);
    fputs(input, demo);
    
    rewind(demo);
    readFile(demo);
    fclose(demo);
    return 0;
}

