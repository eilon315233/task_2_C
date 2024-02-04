#include <stdio.h>
#include "my_mat.h"

//function declarations
void initMatrix(int matrix[SIZE][SIZE]);
void setMatrixValue(int matrix[SIZE][SIZE]);
int checkPath(int i, int j, int matrix[SIZE][SIZE]);
int shortestPath(int i, int j, int matrix[SIZE][SIZE]);


int main() { 
    
    char input;
    int matrix[SIZE][SIZE];


    // Initialize matrix
    //initMatrix(matrix);

    int i, j;
    do
    {
        // Get input from user
        scanf("%c", &input);
        switch (input)
        {
        case ('A'):
            setMatrixValue(matrix);
            //printMatrix(matrix);
            break;
        case ('B'):
            scanf("%d %d", &i, &j);
            int ans=checkPath(i,j,matrix);
            if(ans==TRUE)
                printf("True\n");
            else
                printf("False\n");
            break;
        case ('C'):
            scanf("%d %d", &i, &j);
            ans=shortestPath(i,j,matrix);
            if(ans==MAX_INT||ans==0)
                printf("-1\n");
            else
                printf("%d\n",ans);
            break;
        case ('D'):
            break;
        case ('E')://print matrix
            for(int i=0;i<SIZE;i++) {
                for(int j=0;j<SIZE;j++) {
                    printf("%d ",matrix[i][j]);
                }
                printf("\n");
            }
        default:
            break;
        }
    }
    while (input!='D');
    
    return 0;
}

void initMatrix(int matrix[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            matrix[i][j] = 0;
        }
    }
}

/*
void printMatrix(int matrix[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
*/
