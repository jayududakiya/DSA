#include<stdio.h>
#include<stdlib.h>

//Linear Search & with Random Array

#define n 70
int A[n], i;


int Find_Elememnt(int Z){ // Linear Search

    for(i=0;i<n;i++){
        if(Z==A[i])
           return i;
    }

    return -1 ;
}



int main(){

   int m , J ;

    for(i=0;i<n;i++)  // Generat Random Array
    {    
        A[i]=rand()%100;        
              printf("%d:[%d]",i+1,A[i]);     
            for(int x=0;x<2;x++)
            {
              printf("\t");
            }
    }

    printf("\n\nEnter Searching Element  : ");
    scanf("%d",&m);

     J = Find_Elememnt(m);    

        
    if(J!=-1)
       printf("\n \t Array Element Index  is : %d",i+1);
    else
        printf("\n \t Element is Not Found....");

}