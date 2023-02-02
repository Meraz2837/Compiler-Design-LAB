#include<stdio.h>
#include<string.h>
void main()
{
    char string[100];
    int len, i;
    gets(string);

    len = strlen(string);

    for(i = 0; i<len; i++)
    {
        if(string[i] == 'o')
        {
            printf("O in index: %d\n", i);
        }
    }
}
