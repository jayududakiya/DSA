#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void display()
{
    struct node *ptr= head;

    if(head==NULL)
    {
        printf("link is empty \n");
    }
    else
    {
        while (ptr->next!=head)
        {
            printf(" %d ",ptr->data);
            ptr=ptr->next;
        }
         printf(" %d ",ptr->data);
    }
    printf("\n");
}


void insert(int val)
{
    struct node *ptr = head ;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val ;

    if(head==NULL)
    {
        head=temp;
        temp->next = head;
        return;
    }

    while(ptr->next!=head)
    {
        ptr = ptr->next;
    }
    ptr->next=temp;
    temp->next=head;
    return;
}

void delete()
{
    struct node *ptr = head;
    struct node *p;

    if(head==NULL)
    {
        printf("list is already empty .... \n ");
        return;
    }

    else if(ptr->next== head)
    {
        head = NULL ;
        free(ptr);
        printf("Now link is already empty......\n ");
    }

    while (ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next = head;
    free(ptr);
    return;
}


void mid_insert(int pos , int val)
{
    struct node *ptr = head ;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val ;

    while(ptr->data!=pos)
        ptr=ptr->next;
    
    temp->next = ptr->next;
    ptr->next = temp ; 
}


void mid_delete(int pos)
{
   struct node *ptr = head ;
   struct node *p ;

   while(ptr->data!=pos)
   {
      p=ptr;
      ptr=ptr->next;
   }
   p->next=ptr->next;
   free(ptr);  
}


void first_insert(int val)
{
    struct node *ptr = head ;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val ;

    while(ptr->next!=head)
    {
        ptr = ptr->next;
    }

    ptr->next=temp;
    temp->next=head;
     head=temp;
    return;
}


void first_delete()
{

    struct node *ptr = head;
    struct node *p = head;

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
        ptr->next = p->next;  
        head = p->next;
        free(p);  
    return;
}

int main()
{
    int m , ch , x ;

   
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
        insert(m);
      break;

    case 2 : 
        delete();
      break;

    case 3 : 
        printf("Insert First  position Val : ");
        scanf("%d",&m);
        first_insert(m);
       break; 
    case 4 : 
       first_delete();
    break;

    case 5 : 
        printf("Enter Insert position : ");
        scanf("%d",&x);
        printf("\n Insert mid position Val : ");
        scanf("%d",&m);
       mid_insert(x,m);
      break;

    case 6 :
        printf("Enter Delete position : ");
        scanf("%d",&x); 
       mid_delete(x); 
      break;

    case 9 : 
       printf("\n \t\t Node Data is  >>");
       display();
     break;

    case 0 : break;      
    
    default:
       printf("\n \t\t enter valid input \n ");
        break;
    }

  }
  
}