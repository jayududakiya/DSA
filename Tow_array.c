#include<stdio.h>

int main ()
{

    int m=5;
    int A[5]={1,2,3,4,5} , B[5]={6,7,8,9,10} , marge[10] ,i;

     for(i=0;i<m;i++)
     {
        marge[i]=A[i]; 
        marge[i+m]=B[i];  
     }
     
     printf("\n Merge Array : ");
     for (i=0;i<10;i++)
     {
        printf(" %d ",marge[i]);
     }
     
}