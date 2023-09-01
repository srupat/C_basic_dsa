#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int maximum(int A[], int n)
{
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    { 
        if(max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}
void countSort(int * A, int n)
{
    // find max element in A
    int max = maximum(A,n);
    int i,j;
    int * count = (int *)calloc(max+1,sizeof(int));
    for(i=0; i<n; i++)
    { 
        count[A[i]] = count[A[i]] + 1;
    }
    i=0;
    j=0;
    while (i<=max)
    {
        if(count[i]>0)
        {
            A[j] = i;
            count[i] = count[i]-1;
            j++;
        }
        else{
            i++;
        }
    }
    
}

int main()
{
    int A[] = {23, 3, 1, 87, 64, 37};
    int n = 6;
    printArray(A,n);
    countSort(A,n);
    printArray(A,n);
    return 0;
}