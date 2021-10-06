#include <stdio.h>

void setInput (int *A, int masukan) { 
    *A = masukan; 
} 

void accuInput (int *A, int masukan) { 
    *A = *A + masukan; 
} 

void averageInput (float *hasil, float a, float b, float c) {
    *hasil = (a+b+c) / 3;
}

void cetakInput (float a) {
    printf("%f\n", a);
}

int main () {
    int input, hasil;
    printf("Masukkan input: ");
    scanf("%d", &input); // 5

    setInput(&hasil, input);

    printf("hasil: %d", hasil);

    return 0;
}


