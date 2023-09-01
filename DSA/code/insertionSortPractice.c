// insertion sort cha vishay asay ki ek element ghyaycha ani array madhe tya element pasna mage baghaycha to element kuthe bastoy array madhe ani tyala tithe insert karaycha

#include<stdio.h>
void printArray(int *A,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void insertionSort(int *A, int n)
{
    int key,j;
    for (int i = 1; i <= n-1; i++)
    {
        // printArray(A,n);
        key = A[i]; 
        j = i-1;
        while(j>=0 && A[j]>key) // while previous elements are bigger than me, shift them towards me and insert me in the right position
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
    
}
int main()
{
    int A[] = {9, 7, 53, 32, 1, 4};
    int n = 6;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    
    return 0;
}