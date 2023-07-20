/*
    operator -> arithmetic  --> + - * / %
                relational  --> < <=, > >=, == , !=
                logical     --> && , || , !
                assignment  --> +=, -=, *=, /=, %=  
                unary       --> ++, --
                ternory     --> ? :

    for ,while, do while -> revision
                 
    AND -> first zero than no check condition
    OR -> first One than  no check condition
*/

#include<stdio.h>
int main()
{
    int a = 1, b = 1,c = 1, d;

    d = a && --b || ++c;            
    printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

    //1.
    //  d = a || --b && ++c;       
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

    //2.
    //  d = a || --b || ++c;        
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

    //3.
    //  d = --a || --b || ++c;       
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

    //4.
    //  d = --a || ++b || ++c;        
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

    // 5.
    // d = --a && ++b && ++c;        
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);

    // 6. 
    // d = a && --b && --c;        
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    
    //7.
    //  d = a && --b && c;   
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    
    //8.
    //  d = a && b && c; 
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    


    // int a = 1, b = 1,c;
    
    // 1.
    // c = --a || --b;     
    // printf("a: %d, b: %d, c:%d\n",a,b,c);

    //2.
    //  c = ++a || --b;     
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
    
    // 3.
    // c = ++a || ++b; 
    // printf("a: %d, b: %d, c:%d\n",a,b,c);

    // 4.
    // c = ++a || b;  
    // printf("a: %d, b: %d, c:%d\n",a,b,c);

    // 5.
    // c = a || b;    
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
    
    // 6.
    // c = a && --b;      
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
    
    // 7.
    // c = --a && --b;   
    // printf("a: %d, b: %d, c: %d\n",a,b,c);
    
    // 8.
    // c = --a && ++b;   
    // printf("a: %d, b: %d, c:%d\n",a,b,c);

    // 9.
    // c = ++a && ++b; 
    // printf("a: %d, b: %d, c:%d\n",a,b,c);

    // 10.
    // c = a && b; 
    // printf("a: %d, b: %d, c:%d\n",a,b,c);


}