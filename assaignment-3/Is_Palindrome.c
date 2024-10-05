#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char *s)
{
    int flag = 1;
    int  j=strlen(s)-1;
    for (int i = 0; i <j ; i++)
    {
        if (s[i]==s[j])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
       j--;

    }
    return flag;
}
int main()
{

    char s[1001];

    scanf("%s", s);
    int value = is_palindrome(s);
    if (value==1)
    {
        printf("Palindrome");
    }else
    {
        printf("Not Palindrome");
    }
    return 0;
}