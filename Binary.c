#include<stdio.h>

#define n 10

int Binary_search(int A[],int l ,int h, int m)
{
    int mid;

  while (l<=h)
  {
    mid = (l+h)/2;
    
     if(A[mid] == m)
       return mid + 1;
     
     else if(A[mid]<m)
        l=mid+1;
      
     else 
       h=mid-1;
  }

  return -1;

}

int main()
{
    int A[n]={1,2,4,66,76,54,34,78,99,90},m;

    printf("Enter search elemnat : ");
    scanf("%d",&m);

    int J = Binary_search(A,0,n-1,m);

    if(J == -1)
        printf("\t \nSearch elemant is not found.....\n");
    else
        printf("\t \nSearch elemant is %d position\n",J);
}