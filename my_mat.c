#include <stdio.h>
#include "my_mat.h"
#define SIZE 10

void firstFunc(int matrix[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
