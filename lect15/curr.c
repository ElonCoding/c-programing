#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int maxsum = arr[0];
    for (int i = 1; i < 5; i++)
    {
        int currsum = arr[i];
        if (currsum > maxsum)
        {
            maxsum = currsum;
        }
    }
    printf("Maximum element: %d\n", maxsum);
    return 0;
}
