#include <stdio.h>
#include <stdlib.h>

int n = 15 ;

void print(int a[])
{
    int i;
    printf("\n");

    for (i = 0 ; i < n; i++)
        printf("%d ", a[i]);
}

void Quick_sort(int a[], int first, int last)
{
    int i, j, temp, pivot;

    if (first < last) // 1 condition
    {
        print(a);
        pivot = first;
        i = first;
        j = last;
        while (i < j) //  sem condition as above
        {
            while (a[i] <= a[pivot] && i < last)
                i++;
            while (a[j] > a[pivot])
                j--;
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

                temp = a[pivot];
                a[pivot] = a[j];
                a[j] = temp;
     
        }
             Quick_sort(a, first, j - 1);
             Quick_sort(a, j + 1, last);

    }
}

int main()
{
    int i, a[n];

    for (i = 0; i < n; i++)
        a[i] = rand() % 20 + 1 ;

         printf("\n \t\t  Array size is [ %d ] \n" , n);

    printf("\n \t Showing Array Before Sorting \n ") ;

    Quick_sort(a, 0, n - 1); // call fuction

    printf("\n \t Showing Array After Sorting \n ") ;
 
    print(a);
}