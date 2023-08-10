#include <stdio.h>
#include <stdlib.h>

#define n 6
int F = -1, R = -1;

int A[n];

int Display()
{
    if ( (R < 0 ) || (F < 0) )
    {
        printf("\t \n Queue is Empty Now... \n ");
    }
    else
    {
        for (int i = F; i <= R ; i++)
            printf("%d  ", A[i]);
    }
}

// ================= LIFO ========================

int InsertVal(int Val) // to first insert element 
{
    
    if(F<0)
    {
        F=R=0;
        A[F]=Val;
    }

    else if (F == 0)
    {
        printf("\n \t not add to this position ");
    }

    else
    {
       F--;
       A[F]=Val;
    }
}

int DeleteVal() // to last delete 
{
    if (R < 0)
    {
        printf("\t \n Queue is Already Empty... \n ");
    }
    else if (F == R)
    {
        F = R = -1;
    }
    else
    {
        R--;
    }
}


// ================= FIFO ========================

int F_insertVal(int Val)  // to last insert element 
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

int F_deleteVal()  // to first delete 
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
    int ch , m ;

    printf("\n \t\t > Queue Size is : %d < \n\n",n);  

    printf("\n \t\t > IN FIFO State < \n"); // first in first out 
    printf("\n \t 1 > To Insert ");
    printf("\n \t 2 > To Delete \n");

    
    printf("\n \t\t > IN LIFO State < \n"); // last in first out 
    printf("\n \t 4 > To Insert ");
    printf("\n \t 5 > To Delete \n");

    printf("\n \t 9 > To Display Queue \n");
    printf("\n \t\t 0 > To Exit < \n");
    
	do
     {
        printf("\n \t ENTER CHOICE :  ");
        scanf("%d",&ch);

        switch (ch)
        {

         case 1: 
             printf("\n\t Enter FI Val : ");
             scanf("%d",&m);
             F_insertVal(m);
            break;
         case 2: 
           F_deleteVal();
          break; 

         case 4: 
             printf("\n\t Enter LI Val : ");
             scanf("%d",&m);
             InsertVal(m);
            break;

         case 5: 
            DeleteVal();
           break;

         case 9: 
		    printf(" \n \t >> ");
            Display();
			printf("\n");
           break; 

         case 0:
           break; 

        default :  
          printf(" \n \t Enter valide input ");
         break;    

        }
        
    } while (ch!=0);
    
}