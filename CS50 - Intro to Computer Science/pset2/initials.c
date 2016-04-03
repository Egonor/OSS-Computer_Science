#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string fullName = GetString();
    
    // Print first char always
    printf("%c", toupper(fullName[0]));
    
    // Loop over string
    for (int i = 0, l = strlen(fullName); i < l; i++)
    {
        // Find Spaces(int 32 = char " ") = Hacky?
        if (fullName[i] == 32)
        {
            // Print char after space
            printf("%c", toupper(fullName[i+1]));
        }
    }
    
    printf("\n");
}