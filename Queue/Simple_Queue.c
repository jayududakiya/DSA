#include <stdio.h>
#include <stdlib.h>

#define n 5

int F = -1, R = -1;
int A[n];

int Display()
{
    if (F < 0)
    {
        printf("Queue is empty....");
    }
    else
    {
        for (int i = F; i <= R; i++)
        {
            printf(" %d ", A[i]);
        }
    }
}

int InsertVal(int Val)
{
    if (R >= n - 1)
    {
        printf("\t \n Queue is full Now..... \n ");
    }

    else if (R < 0)
    {
        F = R = 0;
        A[R] = Val;
    }

    else
    {
        R++;
        A[R] = Val;
    }
}

int DeleteVal()
{
    if (F < 0)
    {
        printf("\t \n Queue is Already Empty... \n ");
    }
    else if (F == R)
    {
        F = R = -1;
    }
    else
    {
        F++;
    }
}

int main()
{
    int ch , m;
    printf("1. Insert \n ");
    printf("2. Delete \n");
    printf("3. Display \n ");
    printf("0. Exit \n ");
   
  do
  {
    
   
    printf("\n\n ENTER CHOLICE :  ");
    scanf("%d",&ch);   

    switch (ch)
    {
    case 1: 
         printf("Enter Val : ");
         scanf("%d",&m);
         InsertVal(m);
        break;
    
    case 2: 
        DeleteVal();
      break;

    case 3 : 
         Display();
       break;

    case 0: 
       break;   
 
    }

  } while (ch!=0);
}