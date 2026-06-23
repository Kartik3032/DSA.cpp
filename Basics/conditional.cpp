#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "The character is a lowercase letter." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The character is an uppercase letter." << endl;
    }
    return 0;
}