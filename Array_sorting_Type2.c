#include<stdio.h>

// 50 , 20 , 30 , 40 , 10 
//  4    1   2    3    0

#define n 5

int main ()
{
    int A[n],i,temp;

    for (i=0;i<n;i++)
    {
        printf("\n Enter A :");
        scanf("%d",&A[i]);
    }

    for (i=0;i<n;i++)
    {
        if(i==0)
     {
       temp=A[0];
       A[0]=A[n-1];
       A[n-1]=temp;
     }  
       printf(" %d ",A[i]);
    }

}