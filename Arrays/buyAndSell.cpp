#include <bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int n)
{
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (price[i] > price[i - 1])
        {
            profit += (price[i] - price[i - 1]);
        }
    }
    cout << profit;
}

int main()
{
    int arr1[] = {1, 2, 783, 4, 5};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    maxProfit(arr1, len);
    return 0;
}
