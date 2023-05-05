#include <iostream>
using namespace std;

int largest1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            return i;
        }
    }
}

int largest2(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int arr1[] = {
        901,
        2001,
        3,
        3001,
        9001,
        1,
        2,
        4,
        67,
    };
    int len = sizeof(arr1) / sizeof(arr1[0]);

    int res = largest1(arr1, len);
    int res2 = largest2(arr1, len);
    cout << "Largest Index : " << res << endl;
    cout << "Largest Index : " << res2;

    return 0;
}

// 1,2,783,4,5