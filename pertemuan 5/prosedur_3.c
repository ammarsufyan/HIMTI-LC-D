#include <stdio.h>

void luasPersegi() {
    int sisiSisi = 10;
    int luas = sisiSisi * sisiSisi;
    printf("luas persegi: %d\n", luas);
}

int main() {
    //memanggil prosedur
    luasPersegi();
    return 0;
}