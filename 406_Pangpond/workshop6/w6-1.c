#include <stdio.h>

int main()
{
    int sw;
    float result, w, h, b, r;
    printf("1. Rectangle\n");
    printf("2. Triangle\n");
    printf("3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &sw);
    if (sw == 1)
    {
        printf("Enter the width: ");
        scanf("%f", &w);
        printf("Enter the height: ");
        scanf("%f", &h);
        result = w * h;
        if (h < 0 || w < 0)
        {
            printf("The area of the rectangle is: Error");
        }
        else
        {
            printf("The area of the rectangle is: %.2f", result);
        }
    }
    else if (sw == 2)
    {
        printf("Enter the base: ");
        scanf("%f", &b);
        printf("Enter the height: ");
        scanf("%f", &h);
        result = 0.5 * b * h;
        if (b < 0 || h < 0)
        {
            printf("The area of the triangle is: Error");
        }
        else
        {
            printf("The area of the triangle is: %.2f", result);
        }
    }
    else if (sw == 3)
    {
            printf("Enter the radius: ");
            scanf("%f", &r);
            result = 3.14 * r * r;
            if (r < 0)
            {
                printf("The area of the circle is: Error");
            }
            else
            {
                printf("The area of the circle is: %.2f", result);
            }
    }
    else
    {
        printf("Invalid choice");
    }
    return 0;
}
