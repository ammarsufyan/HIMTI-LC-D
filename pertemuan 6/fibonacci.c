#include<stdio.h>

int fibonacciRekursif(int N){
    if(N <= 1){
        return N;
    }
    return fibonacciRekursif(N-1) + fibonacciRekursif(N-2);
}

int fibonacciIteratif(int N){
    int a = 0, b = 1;
    for(int i=1;i<=N;i++){
        a = a + b;
        b = a - b;
    }
    return a;
}

int main(){
    printf("%d", fibonacciRekursif(6));
    printf("\n%d", fibonacciIteratif(6));
    return 0;
}
