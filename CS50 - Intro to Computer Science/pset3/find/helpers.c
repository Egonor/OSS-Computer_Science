/**
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
    if (n > 0)
    {
        /*  Linear Search
        for (int i = 0; i < n; i++)
        {
            if (value == values[i])
                return true;
        }
        return false;
        */
        
        //  Binary Search (Iterative)
        int left = 0;
        int right = (n - 1);
        while (left <= right)
        {
            int middle = ((left + right) / 2);
            if (value == values[middle])
            {
                return true;
            }
            else if (value < values[middle])
            {
                right = middle - 1;
            }
            else if (value > values[middle])
            {
                left = middle + 1;
            }
        }
        
        // TODO: Binary Search (Recursive)
        return false;
    }
    else
        return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    /*  Bubble Sort
    int swaps;
    do 
    {
        swaps = 0;
        for (int i = 0; i < (n-1); i++)
        {
            if (values[i] > values[i+1])
            {
                int container = values[i];
                values[i] = values[i+1];
                values[i+1] = container;
                swaps++;
            }
        }
    } while (swaps > 0);
    */
    
    /*  Selection Sort
    for (int i = 0; i < (n-1); i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (values[j] < values[min])
                min = j;
        }
        if (min != i)
        {
            int container = values[min];
            values[min] = values[i];
            values[i] = container;
        }
    }
    */
    
    //  Insertion sort
    for (int i = 1; i < n; i++)
    {
        int container = values[i];
        int j = i; // j = current element's index
        while (j > 0 && values[j - 1] > container)
        {
            values[j] = values[j - 1];
            j = j - 1;
        }
        values[j] = container; 
    }
    
}