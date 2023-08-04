#include <stdio.h>

#include <stdlib.h>

#define n 10

int A[n], B[n];

// Conqueror of Array & overlapping in old Array 

void merge(int l,int mid,int h)  
{

   int i = l , j = mid+1 , k = l;

    while (i<=mid && j<= h )
    {
        if(A[i]<A[j])
           B[k++] = A[i++];
        else   
           B[k++] = A[j++];  
    }

    while(i<=mid)
        B[k++]=A[i++];
    while(j<=h)
        B[k++]=A[j++];

    for (i=l;i<=h;i++)
    {
        A[i]=B[i];
    }

}

 // Dividing of Array 

int merge_sort(int l, int h) 
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        merge_sort(l,mid);
        merge_sort(mid+1,h);
        merge(l,mid,h);
    }
}

int main()
{

    int i;

    for (i = 0; i < n; i++)
        A[i] = rand() % 99 + 1;

    printf("\n \t\t Showing Array Aefore sorting \n");
    for (i = 0; i < n; i++)
        printf(" %d ", A[i]);

        merge_sort(0,n-1); // call dividing function

    printf("\n \t\t Showing Array After sorting \n");
    for (i = 0; i < n; i++)
         printf(" %d ", A[i]);
}
