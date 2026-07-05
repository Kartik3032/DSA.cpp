#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int target = 30;
    cout << "Enter elemenet to search: ";
    cin >> target;

    int index = -1; // Initialize index to -1 (not found)
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            index = i; // Update index if target is found
            break;     // Exit the loop once the target is found
        }
    }
    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}