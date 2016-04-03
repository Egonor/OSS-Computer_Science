#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        printf("height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    for (int row = 0; row < height; row++)
    {
        
        for (int col = row; col < height+row+1; col++)
        {
            if (col < (height-1))
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}