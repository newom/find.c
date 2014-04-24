
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */


bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
    int ctr = 0;
    
    if (n < 0)
        {
            return false; 
        }
    
    for (ctr = 0; ctr < n; ctr++)
       {
        if (value == values[ctr])
            {
                return true;
                break;
            }
        }
    return false;          
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm

     int inner, outer, didSwap, temp;
    
     for(outer = 0; outer < n; outer++)
        {
            didSwap = 0;
            
            for (inner = outer; inner < n; inner++)
                {
                  if (values[inner] < values[outer])
                    {
                        temp = values[inner];
                        values[inner] = values[outer];
                        values[outer] = temp;
                        didSwap = 1;
                          
                    }
                }

            if (didSwap == 0)
                { break; }
         
        return;
       }
}
