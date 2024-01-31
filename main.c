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
    switch (input)
    {
    case ('A'):
        /* code */
        break;
    case ('B'):
        /* code */
        break;
    case ('C'):
        /* code */
        break;
    case ('D'):
        /* code */
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

