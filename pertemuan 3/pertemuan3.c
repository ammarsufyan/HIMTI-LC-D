#include<stdio.h>
#include<conio.h>

int main(){
    // for menaik
    int angka, b;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    for(b=1;b<=angka;b++){
        printf("%d\n", b);
    }
    printf("\n");

    // for menurun
    int hitungMundur;
    for(hitungMundur=10; hitungMundur>=0;hitungMundur--){
        printf("%d\n", hitungMundur);
    }
    printf("GO\n\n");

    // while do
    int x = -1;
    int jumlahWhile = 0;
    while(x!=0){
        printf("Masukkan Bilangan Bulat(ketik 0 untuk berhenti): ");
        scanf("%d", &x);
        jumlahWhile = jumlahWhile+x;
    }
    printf("Jumlah Seluruh Nilai= %d\n\n", jumlahWhile);

    // do while
    int N, k, jumlahDoWhile=0;
    printf("N= ");
    scanf("%d", &N);
    k=1;
    do{
        jumlahDoWhile= jumlahDoWhile+k;
        k = k+1;
    }while(k<=N);
    printf("Jumlah deret= %d\n\n",jumlahDoWhile);

    // nested loop
    int c,d;
    for(c=1;c<=5;c++){
        for(d=1;d<=5;d++){
            printf("hai ");
        }
        printf("\n");
    }
    printf("\n");


    int e=0,f;
    while(e<5){
        f=0;
        while(f<5){
            printf("hai ");
            f++;
        }
        printf("\n");
        e++;
    }
    printf("\n");

    int g=0, h;
    do{
        h=0;
        do{
            printf("hai ");
            h++;
        }while(h<5);
        printf("\n");
        g++;
    }while(g<5);
    printf("\n");


    printf("Membuat Pola Persegi 5x5\n");
    int l, m;
    for(l=1;l<=5;l++){
        for(m=1;m<=5;m++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    printf("Program Latihan2\n");
    for(int i=1;i<=10;i++){
        for(int j=1;j<=5;j++){
            printf("%d - %d\n", i, j);
        }
        printf("-------\n");
    }

    return 0;
}
