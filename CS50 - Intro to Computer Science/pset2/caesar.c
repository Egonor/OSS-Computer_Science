#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int shift = atoi(argv[1]);
        
        if (shift > 0)  // Check Positive (breaks on int wrap)
        {
            string input = GetString();
            
            for(int i = 0, n = strlen(input); i < n; i++)
            {
                if (isalpha(input[i]))
                {
                    if (isupper(input[i]))
                    {
                        printf("%c", (((input[i] - 65) + shift) % 26) + 65);
                    }
                    else if (islower(input[i])) // Unnecessasarily verbose?
                    {
                        printf("%c", (((input[i] - 97) + shift) % 26) + 97);
                    }
                }
                else
                    printf("%c", input[i]);
            }
            printf("\n");
        }
        else
        {
            printf("Invalid shift specified, try a positive integer!\n");
            return 1;
        }
    }
    else
    {
        printf("No shift value specified. Launch with ./caesar ##\n");
        return 1;
    }
}