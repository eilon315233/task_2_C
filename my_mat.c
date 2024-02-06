#include <stdio.h>
#include "my_mat.h"

//function to initialize matrix
void setMatrixValue(int matrix[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

//function to check if there is a path between i and j
int checkPath(int i, int j, int matrix[SIZE][SIZE]){
    if(matrix[i][j] != 0)
        return TRUE;
    else
        return FALSE;   
}

    //Floyd-Warshall algorithm
void floyd_Warshall (int matrix[SIZE][SIZE]){
    
    for(int k=0;k<SIZE;k++){
        for(int i=0;i<SIZE;i++) {
            for(int j=0;j<SIZE;j++) {
                if(matrix[i][j] == 0 && (i!=j) && (matrix[i][k] != 0) && (matrix[k][j] != 0)){
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
                else if(((matrix[i][j] != 0) && (matrix[i][k] != 0) && (matrix[k][j] != 0)) && (matrix[i][j] > matrix[i][k] + matrix[k][j])){
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }

}
