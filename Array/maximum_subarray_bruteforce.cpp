#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {-2, 1, -3, 4, -1};

    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;

        for (int end = st; end < n; end++)
        {
            currSum += arr[end];

            maxSum = max(maxSum, currSum);
        }
    }

    cout << "Maximum sum of contiguous subarray is: " << maxSum << endl;

    return 0;
}