#include<stdio.h>

int pangkatRekursif(int a, int b){
    if(b == 0){
        return 1;
    }
    else if(b == 1){
        return a;
    }
    return a * pangkatRekursif(a, b-1);
}

int main(){
    printf("%d", pangkatRekursif(3, 0));
    return 0;
}
