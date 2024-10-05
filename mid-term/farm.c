#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n;
   scanf("%d",&n);
   for(int i=0; i<n; i++)
   {
    int M1,M2,D,X;
    scanf("%d %d %d",&M1,&M2,&D);
    X=(M1*D)/(M1+M2);
    int Farmers=D-X;
    if(M2==0)
    {
        printf("0\n");
    }
    else if(X==0)
    {
        printf("1\n");
    }
    else{
        printf("%d\n",Farmers);
    }
   }
    return 0;
}
// Another code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
int t;
scanf("(%d,&t");
int ans;
for(int i=1; i<=t; i++)
{
    int M1,M2,D1,W,D2;
    scanf("%d %d %d",&M1,&M2,&D1);
    D2=M1+M2;
    W=M1*D1;
    D2= W/(M1+M2);
    ans=D1-D2;
    printf("%d\n",ans);
}
    return 0;
}