#include<stdio.h>
#include<string.h>

int main()
{
    char string[200];
    int len, i, j;

    gets(string);
    len = strlen(string);

    for(i = 0; i < len; i++)
    {
        if(string[i] == ' ')
        {
            for(j = i; j < len; j++)
            {
                string[j] = string[j+1];
            }
            i--;
        }
    }
    puts(string);
}
