#include <stdio.h>
// 0 1 1 2 3 5 8 13 
// x y z
// 0 1 1
// 
// x รอบแรกคือ y ในรอบถัดไป
// y รอบแรกคือ z ในรอบถัดไป
int main()
{
    int x=0,y=1,z;
    for(int i=0;i<10;i++) 
    {
        printf("%d ",x);
        z = x+y;
        x = y;
        y = z;
    }
    return 0;
}