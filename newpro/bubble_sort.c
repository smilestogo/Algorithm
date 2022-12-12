#include <stdio.h>

int main()
{
    int i, j;
    int array_cnt = 5;
    int swap_cnt = 0;
    int temp;
    // int a[10] = {9, 3, 4, 2, 8, -5, 10, 150, 40, 89};
    int a[5] = {6, 1, 4, 7, 2};

   // for (i = 0; i < array_cnt; i++)
   //{
   //    printf("a[%d] = [%d]\n", i, a[i]);
   //}

    for (i = 0; i < array_cnt - 1; i++)
    {
        // printf("i=[%d], a[i]=%d, a[i+1]=%d", i, a[i], a[i+1]);
        for (j = i + 1; j < array_cnt; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                swap_cnt++;

                printf("a[0-4]=[%d],[%d],[%d],[%d],[%d]\n", a[0], a[1], a[2], a[3], a[4]);
            }
        }
    }
    printf("After Bubble Sort swap_cnt = [%d]\n", swap_cnt);
    // for (i = 0; i < array_cnt; i++)
    //{
    //     printf("a[%d] = [%d]\n", i, a[i]);
    // }

    return 0;
}