// #include <stdio.h>
// int main()

//     int num = 100,p = 2, i;

// while (num)

// {

//     for (i = 2; i * i <= p; i++)

//     {

//         if (p % i == 0)

//             break;
//     }

//     if (i * i > p)

//     {

//         printf("%d ", p);

//         num--;
//     }

//     p++;
// }

// return 0;
// }
//extra one i tried

// #include <stdio.h> 
 
// int main() { 
//     int i, j, isPrime; 
 
  
 
//     for (i = 2; i <= 100; i++) { 
//         isPrime = 1; 
 
//         for (j = 2; j < i; j++) { 
//             if (i % j == 0) { 
//                 isPrime = 0; 
//                 break; 
//             } 
//         } 
 
//         if (isPrime) { 
//             printf("%d ", i); 
//         } 
//     } 
//     printf("\n"); 
//     return 0; 
// }
#include<stdio.h>

int main()

{

int i,j,prime_no;

for(i=2;i<=100;i++)

{

prime_no=1;

for(j=2;j<i;j++)

{

if(i%j==0){

prime_no=0;

break;

}

}

if(prime_no){

printf("%d ",i);

}

}

printf("\n");

return 0;

}