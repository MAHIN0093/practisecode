#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_letters(string text);



int main(void)
{
string text = get_string("TEXT: ");
int letters = count_letters(text);
printf("%i\n", letters);

}
int count_letters(string text)
{
    int i;
if(isalpha(text)){
    i = strlen(text);
return i;}
return 0;

}
