#include <iostream>
using namespace std;

void changeArray(int arr[], int size)
{
    cout << "in function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    changeArray(arr, 5);
    cout << "in main\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}