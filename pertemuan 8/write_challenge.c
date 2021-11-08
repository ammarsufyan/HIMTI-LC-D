#include<stdio.h>

int main(){
    FILE* test = fopen("test.txt", "w");
    printf("Masukkan NIM: ");
    char nim[25];
    scanf("%s", &nim);
    fputs(nim, test);
    fclose(test);

    return 0;
}
