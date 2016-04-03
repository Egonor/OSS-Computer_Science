#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

bool search(int value, int values[], int n);
void sort(int values[], int n);

int main(int argc, string argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./find needle\n");
        return -1;
    }
    
    // remember needle
    int needle = atoi(argv[1]);
    
    // fill haystack
    int size = 10;
    int nums[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    
    printf("\n");
    
    // sort the haystack
    sort(nums, size);

    // try to find needle in haystack
    if (search(needle, nums, size))
    {
        printf("\nFound needle in haystack!\n\n");
        return 0;
    }
    else
    {
        printf("\nDidn't find needle in haystack.\n\n");
        return 1;
    }
}

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
            // might be infinite loop
        }
        // doesnt do anything
        return false;
    }
    else
        return false;
    
    //  Binary Search
    
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