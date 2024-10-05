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
    {
        printf("%d\n",Farmers);
    }
   }
    return 0;
}