#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};
    int size = vec.size();

    int target = 30;
    cout << "Enter element to search: ";
    cin >> target;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            cout << "Element found at index " << i;
        }
    }
    return 0;
}