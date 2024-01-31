#include <stdio.h>
#include "my_mat.h"
#define SIZE 10

//function declarations
void initMatrix(int matrix[SIZE][SIZE]);

int main() { 
    
    char input;
    int matrix[SIZE][SIZE];


    // Initialize matrix
    initMatrix(matrix);

    // Get input from user
    scanf("%c", &input);
    switch (input)
    {
    case ('A'):
        firstFunc(matrix);
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

