#include<stdio.h>
#include<math.h> 
 void main()
 {
     int a,b,c,n;
     int sum=0;
     printf("Enter a number to check whether it is armstrong number : \n");
     scanf("%d", &a);
     c=a;
     b=log10(a)+1;
     for(int i=0; i<b; i++)
     {
         n=a%10;
         sum = sum + pow(n,b);
         a=(a-(a%10))/10;
     }
     if(sum==c)
     {
         printf("The number is an armstrong number.\n");
     }
     else {
         printf("The number is not an armstrong number. \n");}
}