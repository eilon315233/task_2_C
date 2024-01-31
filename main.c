#include <stdio.h>
#include "my_mat.h"

//function declarations
void firstFunc(int matrix[SIZE][SIZE]);

int main() { 
    
    char input;
    int matrix[SIZE][SIZE];


    // Initialize matrix
    //initMatrix(matrix);

    // Get input from user
    printf("Please insert a letter:\n");
    scanf("%c", &input);
    int i, j;
    switch (input)
    {
    case ('A'):
        setMatrixValue(matrix);
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
        printf("Exit the program\n");
         printf("bye bye\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }
}
void initMatrix(int matrix[SIZE][SIZE]){
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            matrix[i][j] = 0;
        }
    }
}

