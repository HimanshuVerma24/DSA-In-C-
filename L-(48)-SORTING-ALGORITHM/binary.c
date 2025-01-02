#include <stdio.h>

int binary(int arr[], int a, int size)
{
    int min, max, mid;
    min = 0;
    max = size - 1;

    while (min <= max)
    {

        mid = (max + min) / 2;
        if (arr[mid] == a)
        {
            return mid;
        }
        else if (arr[mid] > a)
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int x;
    scanf("%d",&x);

    int y = binary(arr,x,10);
    printf("The Element %d Present At %d",x, y);

    return 0;
}