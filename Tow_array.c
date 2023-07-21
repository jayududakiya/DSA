#include<stdio.h>

int main()
{
    int m=3,n=5,i,k;
     
     k=m+n;

    int A[m],B[n],marge[k];

    // printf("\n Enter size of Array  A ");
    // scanf("%d",&m);

    for(i=0;i<m;i++)
    {
        printf("Enter A : ");
        scanf("%d",&A[i]);
    }
 
     printf("\n");
     
    // printf("\n Enter size of Array  B ");
    // scanf("%d",&n);
   

    for(i=0;i<n;i++)
    {
        printf("Enter B : ");
        scanf("%d",&B[i]);
    }


    for (i=0;i<m;i++)
    {
        marge[i]=A[i];
    }

    for (i=0;i<n;i++)
    {
        marge[i+m]=B[i];
    }

    for (i=0;i<k;i++)
    {
        printf("\n [%d] %d ",i,marge[i]);
    }

}