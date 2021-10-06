#include <stdio.h>

int main() {
    int n = 10;              // an int variable //
    int *p;                  // a pointer to an int //

    printf("nilai n sekarang: %d\n", n);

    p = &n;
    *p = *p * 2;            // sets n to 20 //

    // print variabel n yang sudah diproses menggunakan pointer
    printf("nilai n setelah diubah dengan pointer: %d\n", n);

    // increment pointer harus menggunakan kurung agar tidak mengincrement 
    // pointer itu sendiri, tetapi mengincrement nilai yang di point
    (*p)++;
    printf("nilai n setelah diincrement dengan pointer: %d\n", n);
   
    // %p is for printing a pointer address.
    printf("pointer address p = %p\n", p);

    return 0;
}

//https://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Pointers.html