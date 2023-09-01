#include<stdio.h>

void main()
{
    int a,rem,rev=0;
    printf("Enter any integer number : ");
    scanf("%d", &a);
    while(a>0)
    {
      rem = a%10;
      rev = rem*10 + rev;
      a=(a-a%10)/10; 
    }
    
        
    
    
    printf("%d",rev);
}