#include <stdio.h>
#include "my_mat.h"

int main() {

   int weights[Array_size];
   int values[Array_size] ;
   int result[Array_size];

   // Initialize  the result array with 0
    for (int i = 0; i < Array_size; i++)
        result[i] = 0;

    // the items are represented by the following array
    int items[] = {'A', 'B', 'C', 'D', 'E'};

    // Get input from user to fill the values array
    for (int i = 0; i < Array_size; i++) {
        scanf("%d", &values[i]);
    }

    // Get input from user to fill the weights array
    for (int i = 0; i < Array_size; i++) {
        scanf("%d", &weights[i]);
    }
    
    // print the maximum profit
    printf("Maximum profit: %d\n", knapSack(weights, values, result));


    //print the items that give the maximum profit
    printf("Items that give the maximum profit: [");

    int printed = 0;
    for (int i = 0; i < Array_size; i++) {
        if (result[i]) {
            if (printed > 0)
                printf(", ");
            printf("%c", items[i]);
            printed++;
        }
    }
    printf("]\n");
    
    return 0;
}