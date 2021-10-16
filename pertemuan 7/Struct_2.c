#include <stdio.h>

typedef struct {
    int panjang;
    int lebar;
} PersegiPanjang;

PersegiPanjang initPersegiPanjang(int p, int l) {
    PersegiPanjang pp;
    pp.panjang = p;
    pp.lebar = l;

    return pp;
} 

int luasPP(PersegiPanjang pp) {
    return pp.panjang * pp.lebar;
}

int kelilingPP(PersegiPanjang pp){
    return 2 * (pp.panjang + pp.lebar);
}

int main() {
    PersegiPanjang pp = initPersegiPanjang(5,4);

    printf("Panjang: %d\n", pp.panjang);
    printf("Lebar: %d\n", pp.lebar);

    printf("Keliling: %d\n", kelilingPP(pp)); 
    printf("Luas: %d\n", luasPP(pp));

    return 0;
}