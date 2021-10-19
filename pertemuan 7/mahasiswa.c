#include<stdio.h>

typedef struct{
    char nim[20];
    char nama[30];
    float ipk;
}Mahasiswa;

int main(){
    Mahasiswa mhsArray[3];

    for(int i=0;i<3;i++){
        printf("Masukkan NIM: ");
        scanf("%s", mhsArray[i].nim);

        while(getchar() != '\n'); // buffer

        printf("Masukkan Nama: ");
        gets(mhsArray[i].nama);

        printf("Masukkan IPK: ");
        scanf("%f", &mhsArray[i].ipk);

        printf("\n");
    }

    // print data
    for(int i=0;i<3;i++){
        printf("NIM: %s\n", mhsArray[i].nim);
        printf("Nama: %s\n", mhsArray[i].nama);
        printf("IPK: %0.1f\n\n", mhsArray[i].ipk);
    }
    return 0;
}
