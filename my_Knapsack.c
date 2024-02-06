#include <stdio.h>
#include "my_mat.h"

int main() {

   int weights[Array_size];
   int values[Array_size] ;
   int selected_bool[Array_size];
   int result[Array_size];


    // the items are represented by the following array
    int item[] = {'A', 'B', 'C', 'D', 'E'};

    // Get input from user to fill the weights array
    for (int i = 0; i < Array_size; i++) {
        scanf("%d", &weights[i]);
    }
    // Get input from user to fill the values array
    for (int i = 0; i < Array_size; i++) {
        scanf("%d", &values[i]);
    }
    
    // print the maximum profit
    printf("Maximum profit: %d", knapSack(weights, values, selected_bool));

    //print the items that give the maximum profit
    printf("Items that give the maximum profit: %s", result);

    return 0;
}