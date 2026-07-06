#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5};
    int size = 4;

    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}