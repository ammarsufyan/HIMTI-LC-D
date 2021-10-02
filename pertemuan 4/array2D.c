#include<stdio.h>

int main(){
    // penulisan array 1 dimensi
    int arr1D[3] = {1, 2, 3};
    // penulisan array 2 dimensi
    int arr2D[3][3] = {{1, 2, 3}, {3, 4, 5}, {5, 6, 7}};

    int nilaiB[2][2];
    nilaiB[0][0] = 1;
    nilaiB[0][1] = 2;
    nilaiB[1][0] = 3;
    nilaiB[1][1] = 4;
    printf("%d %d\n", nilaiB[0][0], nilaiB[0][1]);
    printf("%d %d\n", nilaiB[1][0], nilaiB[1][1]);

    int arr[3][3];
    printf("Melakukan penginputan nilai pada array 2D\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("mohon isi untuk nilai array pada indeks ke-[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n\nMelakukan pencetakan hasil nilai yang sudah diinput pada array 2D\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("isi nilai array pada indeks ke-[%d][%d] adalah: %d\n", i, j, arr[i][j]);
        }
    }

    printf("\n\nMelakukan pencetekan sehingga hasilnya mirip seperti matriks\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
