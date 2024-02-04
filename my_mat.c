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
    int ans=shortestPath(i, j, matrix);
    if(ans==MAX_INT||ans==0)
        return FALSE;//There is no path

    return TRUE;    
}

//function to find the shortest path between i and j
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
