#include <stdio.h>

int faktorial(int N) {
    if(N == 0 || N == 1) {
        printf(" %d", N);
        return 1;
    } else {
        printf(" %d *", N);
        return N * faktorial(N-1);
    }
}

int main() {
    printf("\nFaktorial: %d", faktorial(5));
    return 0;
}