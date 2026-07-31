#include <iostream>
using namespace std;

int main()
{
    int *ptr = nullptr;

    if (ptr != nullptr)
    {
        cout << *ptr;
    }
    else
    {
        cout << "Pointer is NULL";
    }

    return 0;
}