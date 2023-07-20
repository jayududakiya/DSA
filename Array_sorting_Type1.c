#include<stdio.h>

int main ()
{
    int A[5]={10,20,30,40,50},i;

    for(i=0;i<4;i++)
    {
        printf("\n [%d] : %d ",i,A[i+1]);
    }    
        printf("\n [%d] : %d ",i,A[i-4]);

    
}