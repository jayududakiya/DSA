// slef 


#include<stdio.h>

struct node
{
    int data;
    char ch;
    struct node *ptr;
};


int main()
{
    struct node x,y,k,j;

    x.ch='X';
    x.data= 88;
    x.ptr = NULL;
  
    y.ch='Y';
    y.data= 89;
    y.ptr=NULL;

    k.ch='K';
    k.data= 67 ;
    k.ptr=NULL;


    j.ch='J';
    j.data= 76;
    j.ptr=NULL;

    

    j.ptr = &x;
    x.ptr = &y;
    y.ptr = &k;
    k.ptr = &j;


    printf("X : \n data : %d \t Ch : %c ",y.ptr->data,y.ptr->ch);
    printf("\n\n Y : \n data : %d \t Ch : %c ",k.ptr->data,k.ptr->ch);
    printf("\n\n K : \n data : %d \t Ch : %c ",j.ptr->data,j.ptr->ch);
    printf("\n\n J : \n data : %d \t Ch : %c ",x.ptr->data,x.ptr->ch);
        
}