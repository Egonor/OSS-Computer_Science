#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    printf("minutes: ");
    int minutes = GetInt();
    
    int bottles = 12 * minutes;
    printf("bottles: %i\n", bottles);
}