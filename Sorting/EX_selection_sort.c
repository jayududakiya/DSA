#include<stdio.h>
#include<stdlib.h>

#define n 20
int A[n];

int Selection_sort()
{
    int i ,j , temp;

    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
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

    Selection_sort();
    printf(" \n \t Array Sort by Selection : \n");
    Display();

}