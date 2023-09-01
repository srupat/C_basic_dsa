#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1; 
    int j = high;
    int temp;
    do{
        while(A[i] <= pivot ){
            if( i >= high ){ break; }  // here we need to check until high only
            i++;
        }
        while(A[j] >= pivot ){
            if( j <= low ){ break; }   // here we need to check until low only
            j--;
        }
        if(i < j){
            int temp;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }while(i<j);
    // swap A[low] and A[j]
    if(i <= high && j >= low){
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
    }
    return low;
}
void quickSort(int A[], int low, int high)
{
    int partitionIndex; // index of pivot after partition
    partitionIndex = partition(A, low, high);
    if (low < high)
    {
        quickSort(A, low, partitionIndex - 1);  // sort left subarray
        quickSort(A, partitionIndex + 1, high); // sort right subarray
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