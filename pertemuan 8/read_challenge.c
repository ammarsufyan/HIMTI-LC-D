#include<stdio.h>
//#include<assert.h>

int main(){
    FILE* test = fopen("test.txt", "r");
    if (test == NULL) {
        printf("File tidak ada");
        return 1;
    }
//    assert(test!=NULL);
    char nim[25];
    while(1){
        char *success = fgets(nim, 25, test);
        if(success == NULL) break;
        printf("NIM: %s", nim);
    }
    fclose(test);
    return 0;
}
