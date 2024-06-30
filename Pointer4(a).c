#include<stdio.h>

int main()
{
    int size , k ;

    printf("Enter size of array please\n");
    scanf("%d" , &size);

    int myarr[size] ;
    printf("\nEnter elements of array please\n");
    for(k = 0 ; k < size ; k++)
    {
        scanf("%d" , &myarr[k]);
    }

    printf("\nGiven array\n");
    for(k = 0 ; k < size ; k++)
    {
        printf("%d " , myarr[k]);
    }
    printf("\n");

    int *ptrarr = myarr ;
    printf("\nMemory address of each array element\n");
    for(k = 0 ; k < size ; k++)
    {
        printf("%d\n" , (ptrarr + k));
    }
    printf("\n");
    return 0 ;
}