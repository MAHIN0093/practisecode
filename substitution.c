#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool is_unique(string c);

int main(int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2)
    {
        printf("USAGE: ./substitution KEY\n");
        return 1;
    }
    else
    {
        if (strlen(key) != 26)
        {
            printf("KEY must contain 26 characters!\n");
            return 1;
        }
        else
        {
            if (isalpha(key) != 26)
            {
                printf("KEY must contain only alphabatical characters!\n");
                return 1;
            }
            else if(is_unique(key) == false)
            {
                printf("KEY must only contain unique characters!\n");
                return 1;
            }
            else
            {
                string plaintext = get_string("plaintext: ");

                printf("%s\n",plaintext);
            }
        }

    }

}

bool is_unique(string c)
{
    int n = strlen(c);
    int i, j = 1;
    for (i = 1; i < n; i++)      //hold an array element
    {
        for (j = 0; j < i; j++)
        {
            if (c[i] == c[j])    //Check for duplicate elements
            {
                return false;
            }
        }
    }
return true;
}
