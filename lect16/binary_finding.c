#include <stdio.h>
int main()
{
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 11;
    int start = 0;
    int end = size - 1;
    int found = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            found = 1;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (found)
    {
        printf("Element %d found in the array.\n", target);
    }
    else
    {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}