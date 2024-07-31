#include <stdio.h>

int main()
{
    int a,i=0,result;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        result = a*i;
        printf("%d * %d = %d\n",a,i,result);
    }
    return 0;
}