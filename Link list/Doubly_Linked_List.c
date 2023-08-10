#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void Display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("\n \t list is emplty ....\n ");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

void Insert(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }

     while (ptr->next != NULL)
        ptr = ptr->next;

    ptr->next = temp;
    return;
}

void Delete()
{
    struct node *ptr = head;
    struct node *p;

    if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }

    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next = NULL;
    free(ptr);
    return;
}


void Firs_insert(int val)
{
  struct node *temp = malloc(sizeof(struct  node)); 
  temp->data = val;
  
  if(head==NULL)
   {
    head = temp  ;
    temp->next=NULL;
   }
    else
  {
    struct node *ptr = head;
    temp->next =ptr ;
    head=temp;
  }  
}

void First_delete()
{
   struct node *ptr = head;
 
  if(head == NULL)
  {
    printf("link is empty Already now... ");
  }
  else
  {
      head = ptr->next ;
      free(ptr);
  }
   
}

void mid_insert(int pos,int val)
{
    struct node *ptr = head ;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
 
    while (ptr->data!=pos)
        ptr=ptr->next;

    temp->next = ptr->next;
    ptr->next= temp;


}

void mid_delete(int pos)
{
   struct node  *p ;   
   struct node  *ptr = head ;
    
    while(ptr->data!=pos)
    {
        p=ptr;
        ptr = ptr->next;
    }

     p->next = ptr->next ;
     free(ptr); 
     
}


int main()
{
    int ch , m , x;

    while(ch!=0)
    {


    printf(" \n \t > 1 To Insert \n");
    printf(" \n \t > 2 To Delete  \n");
    printf(" \n \t > 3 To First Insert \n");
    printf(" \n \t > 4 To First Delete \n");
    printf(" \n \t > 5 To mid Insert \n");
    printf(" \n \t > 6 To mid Delete \n");

    printf("\n \t\t[ 9 ] To Display \n ");
    printf("\n \t\t[ 0 ] To Exit \n");

    printf("\n Enter your choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: 
         printf("Insert Val : ");
         scanf("%d",&m);
         Insert(m);
        break;

    case 2 : 
        Delete();
       break;

    case 3 :
         printf("Insert First Position Val : ");
         scanf("%d",&m);
         Firs_insert(m);
        break;       

    case 4 : 
        First_delete();
      break;

    case 5:
         printf("Enter Insert Position : ");
         scanf("%d",&x);
         printf("\n Insert Val : ");
         scanf("%d",&m);
         mid_insert(x,m);  
        break;

    case 6 : 
         printf("Enter Delete Position : ");
         scanf("%d",&x);     
         mid_delete(x); 
        break; 

    case 9 :
       printf("\n \t\t Node Data >>");
       Display();
      break; 

    case 0 : 
      break;

    default:
        printf(" \n \t Enter Valid in put ");
        break;
    }

    } // end loop
}