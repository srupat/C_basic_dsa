#include<stdio.h>

void main()
{
    int n;
    int arr[10];
    printf("Enter an array of 10 elements : \n");
    for(int i=0; i<10; i++)
    {
        scanf("%d ", &arr[i]);
    }
    printf("enter a number : \n");
    scanf("%d", &n);
    for(int j=0; j<n; j++)
    {
        if(n==j)
        {
            printf("The number matches with %dth element of the array\n", j);
        }
        else
        {
            printf("The number matche with no element in the array\n");
        }
    }
}