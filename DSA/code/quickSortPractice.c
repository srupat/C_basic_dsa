#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low+1;
    int j = high;
    // int temp;
    do{
        while(A[i]<=pivot)
        {
            if(i>=high) {break;}
            i++;
        }
        while(A[j]>=pivot)
        {
            if(j<=low) {break;}
            j--;
        }
        if(i<j) {swap(A[i],A[j]);}
    }while(i<j);
    if(i<=high && j>=low) 
    {
        swap(A[low],A[j]);
        return j;
    }
    return low;
}
void quickSort(int A[], int low, int high)
{
    int partitionIndex;
    partitionIndex = partition(A,low,high);
    if(low<high)
    {
        quickSort(A,low,partitionIndex-1);
        quickSort(A,partitionIndex+1,high);
    }
}
int main()
{
    int A[] = {3, 5, 7, 2, 13, 6};
    int n = 6;
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}