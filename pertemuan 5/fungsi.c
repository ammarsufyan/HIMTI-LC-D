#include<stdio.h>

int hasilPangkat(int a, int b){
    /*
    fungsi yang akan memangkatkan masukkan informasi dari fungsi yaitu a dan b
    sehingga hasil pangkatnya akan menjadi a^b
    */
    int hasil = 1;
    for(int i=0;i<b;i++){
        hasil = hasil * a;
    }
    return hasil;
}

int main(){
    int a, b;
    printf("masukkan angka pertama: ");
    scanf("%d", &a);
    printf("masukkan angka kedua: ");
    scanf("%d", &b);

    printf("%d\n", hasilPangkat(a, b));
    int x = hasilPangkat(a, b);
    printf("%d\n", x);

    if(hasilPangkat(a, b) < 100){
        printf("kode ini yg keluar");
    }
    else{
        printf("kode ini yg keluar dong");
    }

    return 0;
}
