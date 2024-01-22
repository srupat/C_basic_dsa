#include<stdio.h>
#include<stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[],int mid,int low,int high)
{
    int i,j,k,B[100];
    i = low;
    j = mid +1;
    k = low;
    while (i<=mid && j<=high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;k++;
        }
        else{
            B[k] = A[j];
            j++;k++;
        }
    }
    while (i<=mid)
    {
        B[k] = A[i];
        k++;i++;
    }
    
    while (j<=high)
    {
        B[k] = A[j];
        k++;j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}
void mergeSort(int A[], int low, int high)
{
    if(low<high)
    {
        int mid = (low + high) / 2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        merge(A,mid,low,high);
    }
}
int main()
{
    int n = 6;
    int * A = (int*)calloc(n, sizeof(int));
    printf("Enter the elements of array\n");
    
    for(int i =0;i<n;i++) 
    {
        printf("Enter element %d ", i);
        scanf("%d", &A[i]);
    }
    printArray(A,n);
    mergeSort(A,0,5);
    printArray(A,n);
    return 0;

}