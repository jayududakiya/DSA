#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // pointer
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

    if (head == NULL)
    {
        printf("\n \t list is Already emplty ....\n ");
        return;
    }

    else if(head->next == NULL)
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

int main()
{
   int ch , m ;

   printf("\n \t\t Singly Link list \n\n ");

   while (ch!=0)
   {
     printf("\n\t > 1 To Insert \n");
     printf("\n\t > 2 To Delete  \n");
     printf("\n\t > 3 To Display \n");
     printf("\n\t > 0 To Exit \n\n ");

     printf("\n \t\tEnter Choice ");
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
        Display();
       break;

      case 0 : break;

      }
    
   }
   
}