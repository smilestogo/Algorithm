#include <stdio.h>

int main()
{
    int c;
    int sum = 0;
    for (c = 1; c <= 3; c++)
    {
        sum = sum + c;
    }

    printf("sum=[%d]", sum);
    return 0;
}