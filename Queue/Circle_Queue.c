#include<stdio.h>

#define n 5

int A[n],R=-1,F=-1;


int Display()
{
    int i = F;

    if(F<0)
    {
        printf("\n\t Queue is empty.. ");
    }

    else
    {
         do{
            printf(" %d ",A[i]);
            i=(i+1)%n;
         }while (i!=(R+1)%n);
    }
}

int Insert_end(int fin)
{
    if (R<0)
    {
        F=R=0;
        A[R]=fin;
    }

    else if((R+1)%n==F)
    {
        printf("\n \t  Queue is Full....");
    }

    else{
       R=(R+1)%n;        
       A[R]=fin;
    }
    
}

int Delete()
{
    
     if(R==F)
    {
        R=F=-1;
        printf("\n \t Queue is empty now .... \n");
    }

    else 
    {
        F=(F+1)%n;
    }
}


int main()
{
   int m , ch ;

   printf("\n \t 1 > To InsertVal ");
   printf("\n \t 2 > To Delete  ");
   printf("\n \t 3 > To Display  ");
   printf("\n \t 0 > To Exit  ");


   do
   {
      printf("\n \t\t Enter choice ");
      scanf("%d",&ch);

     switch (ch)
     {
     case 1: 
          printf("\n \t  Enter Val : ");
          scanf("%d",&m);
          Insert_end(m);
        break;

      case 2: 
          Delete();
         break;

       case 3: 
           Display();
         break;

     default:

        break;
     }
   } while (ch!=0);
   
}