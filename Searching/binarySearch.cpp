#include <stdio.h>

int bSearch1(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;

        else if (arr[mid] > x)
            high = mid - 1;

        else
            low = mid + 1;
    }

    return -1;
}

int bSearch(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == x)
        return mid;

    else if (arr[mid] > x)
        return bSearch(arr, low, mid - 1, x);

    else
        return bSearch(arr, mid + 1, high, x);
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60}, n = 6;

    int x = 25;

    printf("%d", bSearch(arr, n, x));
    return 0;
}