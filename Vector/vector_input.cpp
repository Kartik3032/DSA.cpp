#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    cout << "Vector elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}