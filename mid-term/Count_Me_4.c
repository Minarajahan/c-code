#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[10001];
    scanf("%s",s);
    int cnt[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int val=s[i]-'a';
        cnt[val]++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i])
        printf("%c - %d\n",i+'a',cnt[i]);
    }
    return 0;
}