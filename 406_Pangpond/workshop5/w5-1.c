#include <stdio.h>

int main()
{
    int i,n=0;
    int number[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&number[i]);
        n += number[i];
    }
    printf("Sum of entered numbers: %d",n);
    printf("\nNumbers in array:");
    for(i=0;i<5;i++)
    {
        printf(" %d",number[i]);
    }
    return 0;
}