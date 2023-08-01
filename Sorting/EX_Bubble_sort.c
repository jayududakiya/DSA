#include<stdio.h>
#include<stdlib.h>

#define n 20
int A[n];

int bubblesort()
{
    int i ,j , temp;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int Display()
{
    for(int i=0;i<n;i++)
    {
       printf(" %d ",A[i]);
    }
}

int main()
{
    int i;

    for(i=0;i<n;i++)
    {
        A[i]=rand()% 50 + 1;
    }
    
    printf(" \n \t Random Array is : \n");
    Display();

    bubblesort();
    printf(" \n \t Array Sorting by Bubble : \n");
    Display();

}