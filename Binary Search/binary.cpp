#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};

    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 10;

    int ans = binarySearch(arr, n, target);

    if (ans == -1)
        cout << "Element Not Found";
    else
        cout << "Element Found at Index : " << ans;
}