#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool is_not_unique(string c);
void cipher(char pos,string key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("USAGE: ./substitution KEY\n");
        return 1;
    }
    else
    {
        if (strlen(argv[1]) != 26) //counting all characters;
        {
            printf("KEY must contain 26 characters!\n");
            return 1;
        }
        else
        {
            int alpha_count = 0;
            for (int i = 0; i < 26; i++)
            {
                if (isalpha(argv[1][i]))
                {
                    alpha_count++; //counting only alphabets;
                }

            }
            if (alpha_count != 26)
            {
                printf("KEY must contain only alphabatical characters!\n");
                return 1;
            }
            else if(is_not_unique(argv[1]))
            {
                printf("KEY must only contain unique characters!\n");
                return 1;
            }
            else
            {
                string plaintext = get_string("plaintext: ");
                printf("ciphertext:");
                for( int i = 0; i < strlen(plaintext); i++)
                {
                    if (isalpha(plaintext[i]))
                    {
                        if(islower(plaintext[i]))
                        {
                            cipher(tolower(plaintext[i]));
                        }
                        else
                        {
                            cipher(toupper(plaintext[i]));
                        }
                    }
                    else
                    {
                        printf("%c",plaintext[i]);
                    }
                }
                printf("\n");
            }
        }

    }

}

bool is_not_unique(string c)
{
    int n = strlen(c);
    int i, j = 1;
    for (i = 1; i < n; i++)      //hold an array element
    {
        for (j = 0; j < i; j++)
        {
            if (c[i] == c[j])    //Check for duplicate elements
            {
                return true;
            }
        }
    }
    return false;
}

void cipher(char pos,string key)
{
    string alpha_array = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < strlen(alpha_array); i++)
    {
        if (islower(pos))
        {
            if(pos == islower(alpha_array[i]))
            printf("%c",tolower(key[i]));
        }
        else if (isupper(pos))
        {
            if(pos == isupper(alpha_array[i]))
            printf("%c",toupper(key[i]));
        }
    }
}
