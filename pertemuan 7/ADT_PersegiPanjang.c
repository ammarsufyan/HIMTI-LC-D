#include<stdio.h>

typedef struct{
    int panjang;
    int lebar;
}PersegiPanjang;

// constructor
PersegiPanjang initPersegiPanjang(int p, int l){
    PersegiPanjang pp;
    pp.panjang = p;
    pp.lebar = l;

    return pp;
}

// mutator
void ubahPersegiPanjang(PersegiPanjang *pp, int p, int l){
    (*pp).panjang = p;
    (*pp).lebar = l;
}

// accessor
int getLuas(PersegiPanjang pp){
    return pp.panjang * pp.lebar;
}

int getKeliling(PersegiPanjang pp){
    return 2 * (pp.panjang + pp.lebar);
}

int main(){
    PersegiPanjang pp1; // container
    pp1 = initPersegiPanjang(3, 6);
    ubahPersegiPanjang(&pp1, 5, 10);
    printf("Panjang: %d\n", pp1.panjang);
    printf("Lebar: %d\n", pp1.lebar);

    printf("Luas: %d\n", getLuas(pp1));
    printf("Keliling: %d\n", getKeliling(pp1));
    return 0;
}
