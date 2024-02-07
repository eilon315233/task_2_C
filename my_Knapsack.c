#include <stdio.h>
#include "my_mat.h"

int main() {

   int weights[Array_size];
   int values[Array_size] ;
   int selected_bool[Array_size];

   // Initialize  the result array with 0
    for (int i = 0; i < Array_size; i++)
        selected_bool[i] = 0;

    // the items are represented by the following array
    char items[Array_size];

    for(int i=0; i<Array_size-1; i++)
        {
            
           scanf("%c ", &items[i]);

            scanf("%d ", &values[i]);

            scanf("%d ", &weights[i]);

        }

            scanf("%c ", &items[Array_size-1]);

            scanf("%d ", &values[Array_size-1]);

            scanf("%d", &weights[Array_size-1]);
    
    // print the maximum profit
    printf("Maximum profit: %d\n", knapSack(weights, values, selected_bool));


    //print the items that give the maximum profit
    printf("Selected items: ");

    int printed = 0;
    for (int i = 0; i < Array_size; i++) {
        if (selected_bool[i]) {
            if (printed > 0)
                printf(" ");
            printf("%c", items[i]);
            printed++;
        }
    }
    
    
    return 0;
}