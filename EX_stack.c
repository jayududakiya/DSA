#include<stdio.h>

#define n 5
int A[n],top=-1;


void Display()
{
    int i;
    for(i=0;i<=top;i++)
       printf("%d ",A[i]);
}

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

int main()
{ 

int ch,m,j;
Try:
printf("\n \t \n Enter [1] To Insert");
printf("\t \n Enter [2] To Delete");
printf("\t \n Enter [3] To Display\n");
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
      insert(m);
      // goto Try;
    break;

   case 2:
    printf("Enter Delete Array number : ");
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
      delete();
    }
      // goto Try;
    break;

   case 3:
    printf("\t Array is : ");
      Display();
      // goto Try;
    break;
   
    case 0: break;

  default:
      printf("\t Wrong Choice........\n\t\t\n Try Again");
      goto Try;
    break;
   }
  
}while(ch!=0);

}