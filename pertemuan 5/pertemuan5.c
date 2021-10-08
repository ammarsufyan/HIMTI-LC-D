/*
melakukan perbedaan struktur antara prosedur dengan fungsi
*/
#include<stdio.h>

// prosedur
void luasPersegiProsedur(int sisi, int *luas){
//    int sisi = 10;
    *luas = sisi * sisi;
    printf("%d", *luas);
}

// function
int luasPersegiFungsi(int sisi, int *luas){
//    int sisi = 10;
    *luas = sisi * sisi;
    return *luas;
}

int main(){
    int input;
    int hasil;
    printf("masukkan sebuah angka: ");
    scanf("%d", &input);
    luasPersegiProsedur(input, &hasil);

    printf("\n%d", luasPersegiFungsi(input, &hasil));

    printf("\n%d", hasil);

    return 0;
}
