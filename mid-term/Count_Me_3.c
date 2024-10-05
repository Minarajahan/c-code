#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int T;
   scanf("%d",&T);
   for(int i=0; i<T; i++)
   {
    char s[1000];
    scanf("%s",s);
    int capital=0,small=0,digit=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>='A'&& s[i]<='Z')
        {
            capital++;
        }
        if(s[i]>='a' && s[i]<='z')
        {
            small++;
        }
        if(s[i]>='0' && s[i]<='9')
        {
            digit++;
        }
    }
    printf("%d %d %d\n",capital, small, digit);
   }
    return 0;
}