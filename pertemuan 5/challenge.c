/*
program menggunakan prosedur atau fungsi
yaitu menentukan luas pada sebuah bangun datar persegi
*/
#include<stdio.h>

int luasPersegi(int sisi){
    int luas = sisi * sisi;

    return luas;
}

int main(){
    int sisi;
    printf("masukkan sisi persegi: ");
    scanf("%d", &sisi);

    printf("luas persegi adalah: %d", luasPersegi(sisi));


    return 0;
}
