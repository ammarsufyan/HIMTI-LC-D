#include <stdio.h>

void setInput (int *A, int masukan) 
{ 
    *A = masukan; 
} 

int main () {
    int input, hasil;
    printf("Masukkan input: ");
    scanf("%d", &input);
    setInput(&hasil, input);
    printf("hasil: %d", hasil);

    return 0;
}


