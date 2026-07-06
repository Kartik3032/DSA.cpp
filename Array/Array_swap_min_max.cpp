#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }

        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);

    cout << "Array after swapping Min & Max:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}