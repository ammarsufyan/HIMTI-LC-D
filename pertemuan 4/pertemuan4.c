#include <stdio.h>
#include <stdbool.h>

int main () {
    int a[10];
    int n;

    printf("Masukkan n: ");
    scanf("%d", &n);

    printf("========================================\n");
    //mengisi array menggunakan for
    for (int i = 0; i < n; i++)
    {
        printf("Bilangan cacah ke-%d = ", i+1);
        scanf("%d", &a[i]);
        printf("\n");
    }
    printf("========================================\n");

    //menampilkan array menggunakan for
    for (int i = 0; i < n; i++)
    {
        printf("\nIsi larik ke-%d = %d \n", i+1, a[i]);
    }
    printf("========================================\n");


    //mencari maksimum nilai array menggunakan for
    int temp_max = a[0], temp_min = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > temp_max) {
            temp_max = a[i];
        }

        if(a[i] < temp_min) {
            temp_min = a[i];
        }
    }
    printf("temp_max = %d , temp_min = %d\n\n", temp_max, temp_min);

    //mengurutkan array dari tinggi ke rendah
    int temp = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(a[i] < a[j]) { //kalau mau rendah ke tinggi ubah aja ke (>)
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    //menampilkan array menggunakan for
    for (int i = 0; i < n; i++)
    {
        printf("\nIsi larik ke-%d = %d \n", i+1, a[i]);
    }
    printf("========================================\n");

    //mencari indeks nilai sebuah array
    int cariNilai = 0, indeks = 0;
    bool cariIndeks = false;

    printf("Masukkan nilai yang ingin Anda cari = ");
    scanf("%d", &cariNilai);

    for(int i = 0; i < n; i++) {
        if(a[i] == cariNilai) {
            indeks = i;
            cariIndeks = true;
        }
    }

    if(cariIndeks == false) {
        printf("Tidak ketemu\n");
    } else {
        printf("Indeks nilai %d dalam elemen array a adalah %d", cariNilai, indeks);
    }

    return 0;
}

