#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100];
    int i,n,vowels=0,consonant=0;
    scanf("%s",ar);
    n=strlen(ar);
    for(i=0;i<n;i++)
    {
        if(ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u')
        {
            vowels++;
        }
        else if (ar[i]>='a' && ar[i]<='z')
        {
            consonant++;
        }
    }
    printf("%d",consonant);
    return 0;
}
