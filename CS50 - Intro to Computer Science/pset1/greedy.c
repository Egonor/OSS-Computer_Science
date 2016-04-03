#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float floatChange;
    do
    {
        printf("How much change is owed?\n");
        floatChange = GetFloat();
    }
    while (floatChange < 0);
    
    int change = (int)(roundf(floatChange * 100));
    
    int numCoins = 0;
    while(change > 0)
    {
        if (change >= 25)
        {
            change -= 25;
            numCoins++;
        }
        else if (change >= 10)
        {
            change -= 10;
            numCoins++;
        }
        else if (change >= 5)
        {
            change -= 5;
            numCoins++;
        }
        else
        {
            change -= 1;
            numCoins++;
        }
    }
    printf("%i\n", numCoins);
}