#include<stdio.h>

#define n 5 
int A[n] , top=-1,i;


void Display()
{
   if(top<0)
       printf("\t Array is Emtpy....\n ");
    else
      for (i=0;i<=top;i++)
      {
         printf(" %d ",A[i]);
      }
}


//=========== first insert and delete =======================

int fInsert(int fin)
{
   if(top>=n-1)
   {
     printf("\t\t \n Array Is Full...... \n ");
   }

   else if(top<0)  // it's run whan First time Enter A value   
   {
      top++;     //  0
      A[top] = fin;
   }

   else   
   {
      top++;

        for(i=top;i>=0;i--)
            A[i]=A[i-1];
          
      A[0]=fin;

   }

}

int fDelete()
{ 
   if(top<0)
   {
     printf("\t\t \n Array Is Empty...... \n ");
   }
   else
   {
      for(i=0;i<top;i++)
         A[i]=A[i+1];
      
      top--;
   }

}


// ================================================


int insert(int val)
{
    if(top>=n-1)
       printf("\t Array is Full.....\n");

    else
    {
        top++;
        A[top]=val;
    }
}

int delete()
{
    if(top<0)
       printf("\t Array is Emtpy....\n ");
    else
    {
        top--;
    }      
}

// ================================================

int main()
{ 

int ch,m,j;

Try:
printf("\n \t \n Enter [1] To First Insert");
printf("\t \n Enter [2] To Delete");

printf("\n \t \n Enter [3] To Insert");
printf("\t \n Enter [4] To Delete");


printf("\t \n Enter [9] To Display\n");
printf("\t \n [0] To Exit \n");


do
{

printf("\n Enter your choice : ");
scanf("%d",&ch);  

switch (ch)
{

    case 1:
      printf("Enter Value : ");
      scanf("%d",&m);
      fInsert(m);
    break;

    case 2:
      fDelete();
    break;

    case 3:
      printf("Enter Value : ");
      scanf("%d",&m);
      insert(m);
     break;

    case 4:
      delete();
    break;

   case 9:
    printf("\t Array is : ");
      Display();
    break;
   
    case 0: break;

  default:
      printf("\t Wrong Choice........\n\t\t\n Try Again");
      goto Try;
    break;
   }
  
}while(ch!=0);

}
