#include <stdio.h>

int main()
{
    int x;
    printf("<<<Press 1 for Variable\n<<<Press 2 for without Variable\n");
    scanf("%d", &x);
    if (x == 1)
    {
        swapwithvariable();
    }
    else if (x == 2)
    {
        swapwithoutvariable();
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
int swapwithvariable()
{
    int a, b;
    printf("Enter The Value of a:");
    scanf("%d", &a);
    printf("Enter The Value of b:");
    scanf("%d", &b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swap: a = %d, b = %d\n", a,b);
}
int swapwithoutvariable()
{
    int a, b;
     printf("Enter The Value of a:");
    scanf("%d", &a);
    printf("Enter The Value of b:");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a,b);
  
}