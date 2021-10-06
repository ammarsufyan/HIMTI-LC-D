#include <stdio.h>

void luasPersegi(int sisiSisi) {
    int luas = sisiSisi * sisiSisi;
    printf("luas persegi: %d\n", luas);
}

int main() {
    int sisi;

    printf("Masukkan angka:");
    scanf("%d", &sisi);
    printf("nilai sisi: %d\n", sisi);
    
    //memanggil prosedur
    luasPersegi(sisi);
    return 0;
}