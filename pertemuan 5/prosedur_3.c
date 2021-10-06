#include <stdio.h>

void luasPersegi(int);

int main() {
    int sisi;
    printf("Masukkan sisi: ");
    scanf("%d", &sisi); // 5

    luasPersegi(sisi);

    return 0;
}

void luasPersegi(int sisiSisi) {
    int luas = sisiSisi * sisiSisi;
    printf("luas persegi: %d\n", luas);
}