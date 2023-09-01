#include<stdio.h>
int binarySearch(int A[], int low, int high, int x)
{
    if(low<high)
    {
        int mid = (low + high) / 2;
        if(A[mid] == x) return mid;
        if(A[mid]<x) return binarySearch(A,mid+1,high,x);
        if(A[mid]>x) return binarySearch(A,low,mid-1,x);
    }
    return -1;
}
int main()
{
    int A[] = {1, 2, 5, 6, 12, 87};
    int size = sizeof(A)/sizeof(int);
    // printf("%d", size);
    printf("%d\n", binarySearch(A,0,size,87));
    return 0;
}