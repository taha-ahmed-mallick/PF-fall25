// Problem Link: https://leetcode.com/problems/can-place-flowers/
#include <stdbool.h>

bool canPlaceFlowers(int *flowerbed, int flowerbedSize, int n)
{
    int space[] = {0, 0}, max = 0, start = 0, end = 0, before = 1, after = 1;
    if (!*flowerbed)
    {
        before = 0;
        start = 1;
        space[0] = 0;
    }
    for (int i = 0; i < flowerbedSize; i++)
    {
        if (i == flowerbedSize - 1 && !*(flowerbed + i))
        {
            after = 0;
            end = 1;
            space[1] = i;
        }
        if (*(flowerbed + i))
            if (!(start || end))
            {
                start = 1;
                space[0] = i;
            }
            else if (start)
            {
                space[1] = i;
                end = 1;
            }
        if (start && end)
        {
            printf("%d %d %d %d\n", space[0], space[1], before, after);
            if (!before && !after)
                max += (space[1] - space[0] + 2) / 2;
            else if (!before || !after)
                max += (space[1] - space[0]) / 2;
            else
                max += (space[1] - space[0] - 2) / 2;
            before = start = 1;
            end = 0;
            space[0] = i;
            printf("max: %d\n", max);
        }
    }
    if (n <= max)
        return true;
    return false;
}