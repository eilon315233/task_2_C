#include <limits.h> // Include the header file for limits
#define SIZE 10
#define TRUE 1
#define FALSE 0
#define MAX_INT INT_MAX // Define a constant representing the maximum value for int
void setMatrixValue(int matrix[SIZE][SIZE]);
int checkPath(int i, int j, int matrix[SIZE][SIZE]);
int shortestPath(int i, int j, int matrix[SIZE][SIZE]);
void printMatrix(int matrix[SIZE][SIZE]);
