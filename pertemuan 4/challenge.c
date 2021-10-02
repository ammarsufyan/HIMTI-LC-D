#include<stdio.h>

int main(){
    int arr[100];
    int n, angka, total = 0;

    printf("Masukkan panjang array: ");
    scanf("%d", &n);

    printf("Proses penginputan nilai pada array:\n");
    for(int i=0;i<n;i++){
        printf("Masukkan angka: ");
        scanf("%d", &angka);
        total += angka;
    }

    printf("Total jumlah isi array adalah: %d", total);
    return 0;
}
