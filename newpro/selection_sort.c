#include <stdio.h>

int main()
{
    int i, j;
    int temp, min_value;
    int min_index;
    int array_cnt = 5;
    int swap_cnt = 0;
    // int a[10] = {9, 3, 4, 2, 8, -5, 10, 150, 40, 89};
    int a[5] = {6, 1, 4, 7, 2};

    for (i = 0; i < array_cnt; i++)
    {
        printf("a[%d] = [%d]\n", i, a[i]);
    }

    for (i = 0; i < array_cnt - 1; i++)
    {
        // find min value index
        min_index = i;
        min_value = a[i];
        for (j = i + 1; j < array_cnt; j++)
        {
            if (min_value > a[j])
            {
                min_value = a[j];
                min_index = j;
            }
        }
        temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }

    printf("After Selection Sort\n");

    for (i = 0; i < array_cnt; i++)
    {
        printf("a[%d] = [%d]\n", i, a[i]);
    }

    return 0;
}