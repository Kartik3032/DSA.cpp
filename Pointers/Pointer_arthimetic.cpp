#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    cout << "Initial Pointer" << endl;
    cout << "Address : " << ptr << endl;
    cout << "Value   : " << *ptr << endl;

    // ptr++
    ptr++;
    cout << "\nAfter ptr++" << endl;
    cout << "Address : " << ptr << endl;
    cout << "Value   : " << *ptr << endl;

    // ptr--
    ptr--;
    cout << "\nAfter ptr--" << endl;
    cout << "Address : " << ptr << endl;
    cout << "Value   : " << *ptr << endl;

    // ptr + n
    cout << "\n*(ptr + 2) = " << *(ptr + 2) << endl;

    // ptr - n
    cout << "*(ptr + 4) = " << *(ptr + 4) << endl;
    cout << "*(ptr + 4 - 2) = " << *(ptr + 2) << endl;

    // Array notation
    cout << "\narr[3]      = " << arr[3] << endl;
    cout << "*(arr + 3)  = " << *(arr + 3) << endl;

    // Pointer Difference
    int *p1 = &arr[1];
    int *p2 = &arr[4];

    cout << "\nPointer Difference = " << p2 - p1 << endl;

    return 0;
}