#include <limits.h> // Include the header file for limits
#define SIZE 10
#define TRUE 1
#define FALSE 0
#define Array_size 5 
#define MAX_WEIGHT 20
void setMatrixValue(int matrix[SIZE][SIZE]);
int checkPath(int i, int j, int matrix[SIZE][SIZE]);
void floyd_Warshall(int matrix[SIZE][SIZE]);
void printMatrix(int matrix[SIZE][SIZE]);
int knapSack(int weights[], int values[], int selected_bool[]);
