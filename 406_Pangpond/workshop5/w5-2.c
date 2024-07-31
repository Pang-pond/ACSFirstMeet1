#include <stdio.h>

int main()
{
    int i,max,min;
    int number[10];
    for(i=0;i<10;i++){
        scanf("%d",&number[i]);
    }
    max = number[0];
    min = number[0];
    for(i=0;i<10;i++)
    {
        if(number[i]>max){
        max=number[i];}
        else if (number[i]<min)
        {
           min=number[i];
        }
     }
     printf("Maximum number: %d\n",max);
     printf("Minimum number: %d",min);
    return 0;

}