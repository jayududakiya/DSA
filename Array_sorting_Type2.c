#include<stdio.h>

// 50 , 20 , 30 , 40 , 10 
//  4    1   2    3    0


int main ()
{
    int A[5]={10,20,30,40,50},i=0;

    do
    {
        printf("\n [%d] : %d ",i,A[i+4]);
        printf("\n [%d] : %d ",i,A[i+1]);
        printf("\n [%d] : %d ",i,A[i+2]);
        printf("\n [%d] : %d ",i,A[i+3]);
        printf("\n [%d] : %d ",i,A[i]);
        i++;
    }while(i==0);

    
}