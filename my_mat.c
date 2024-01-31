#include <stdio.h>
#include "my_mat.h"

void firstFunc(int matrix[SIZE][SIZE]){
    printf("Please insert the matrix values:\n");
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            printf("Please insert the value for cell [%d][%d]:\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
int secondFunc(int i, int j, int matrix[SIZE][SIZE]){
    
}
