#include<stdio.h>

#define n 5


int main ()
{
    int A[n],i,Temp;

    for (i=0;i<n;i++)
    {
        printf("\n Enter A : ");
        scanf("%d",&A[i]);
    }


    for(i=0;i<n;i++)
    {
        Temp=A[0];      // now A[0] is Empty 
        printf("\n [%d] : %d ",i,A[i+1]);
    }   

    
}