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

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve the 0-1 knapsack problem
int knapSack(int weights[], int values[], int included[]) {
    int i, w;
    int dp[ Array_size+ 1][MAX_WEIGHT + 1];

    // Build the dp table bottom up
    for (i = 0; i <= Array_size; i++) {
        for (w = 0; w <= MAX_WEIGHT; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    // Trace back to find the items included
    int res = dp[Array_size][MAX_WEIGHT];
    w = MAX_WEIGHT;
    for (i = Array_size; i > 0 && res > 0; i--) {
        // If the result comes from the top (previous item) or not
        if (res == dp[i - 1][w])
            continue;
        else {
            // This item is included
            included[i - 1] = 1;
            res -= values[i - 1];
            w -= weights[i - 1];
        }
    }

    return dp[Array_size][MAX_WEIGHT];
}

