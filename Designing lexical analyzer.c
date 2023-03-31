#include<stdio.h>
#include<string.h>

int keyword(char buffer[])
{
    char keywords[32][10] = {"auto","break","case","char","const","continue","default",
                             "do","double","else","enum","extern","float","for","goto",
                             "if","int","long","register","return","short","signed",
                             "sizeof","static","struct","switch","typedef","union",
                             "unsigned","void","volatile","while"
                            };
    int flag = 0;

    for(int i = 0; i < 32; i++)
    {
        if(strcmp(keywords[i], buffer)==0)
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

int main()
{
    char input[100];
    char operators[] = "+-*/%=";
    char buffer[15];
    int k = 0;


    gets(input);

    int len = strlen(input);
    for(int i = 0; i < len; i++)
    {
        char ch = input[i];
        for(int j = 0; j < 6; j++)
        {
            if(ch == operators[j])
            {
                printf("%c is an operator\n", ch);
            }
        }

        if(isalnum(ch))
        {
            buffer[k++] = ch;
        }
        else if((ch == ' ' || ch == '\n') && (k != 0))
        {
            buffer[k] = '\0';
            k = 0;
            if(keyword(buffer))
            {
                printf("%s is a keyword\n", buffer);
            }

            else
            {
                printf("%s is a Identifier\n", buffer);
            }
        }

    }

}
