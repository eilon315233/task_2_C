#include <stdio.h>
#include "my_mat.h"

void setMatrixValue(int matrix[SIZE][SIZE]){
    printf("Please insert the matrix values:\n");
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            printf("Please insert the value for cell [%d][%d]:\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
int checkPath(int i, int j, int matrix[SIZE][SIZE]){
    int ans=shortestPath(i, j, matrix);
    if(ans==MAX_INT||ans==0)
        return FALSE;//There is no path

    return TRUE;    
}
/*
this function will get a matrix and will return the shortest path from vertex i to vertex j
*/
int shortestPath(int i, int j, int matrix[SIZE][SIZE]){
    
    //Copy matrix
    int temp[SIZE][SIZE];
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            if(matrix[i][j] == 0)
                temp[i][j] = MAX_INT;
            else if(i == j)
                temp[i][j] = 0;
            else
                temp[i][j] = matrix[i][j];
        }
    }

    //Floyd-Warshall algorithm
    for(int k=0;k<SIZE;k++){
        for(int i=0;i<SIZE;i++) {
            for(int j=0;j<SIZE;j++) {
                if(temp[i][j] > temp[i][k] + temp[k][j]){//in value
                    temp[i][j] = temp[i][k] + temp[k][j];
                }
            }
        }
    }
    return temp[i][j];
}
