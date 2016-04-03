#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string keyWord = argv[1];
        int keyLength = strlen(keyWord);
        
        // Test Keyword is Valid (Alphabetical)
        for (int i = 0; i < keyLength; i++)
        {
            if (!isalpha(keyWord[i]))
            {
                printf("Keyword must be alphabetical!   ");
                printf("Usage: ./vigenere keyword\n");
                return 1;
            }
            else // Convert key to shift values
            {
                if (isupper(keyWord[i]))
                    keyWord[i] -= 65;
                else //if (islower(keyWord[i])) ***Unnecessasarily verbose?
                    keyWord[i] -= 97;
            }
        }
        
        string input = GetString();
        
        for(int i = 0, n = strlen(input), index=0; i < n; i++)
        {
            if (isalpha(input[i]))
            {
                if (isupper(input[i]))
                {
                    int newVal = (((input[i] - 65) + keyWord[index]) % 26) + 65;
                    printf("%c", newVal);
                    index = ((index + 1) % keyLength);
                }
                else //if (islower(input[i]))   ***Unnecessasarily verbose?
                {
                    int newVal = (((input[i] - 97) + keyWord[index]) % 26) + 97;
                    printf("%c", newVal);
                    index = ((index + 1) % keyLength);
                }
            }
            else
                printf("%c", input[i]);
        }
        printf("\n");
        
    }
    else
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    
    
    
}