#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};

    cout << "Size of vector: " << vec.size() << endl;

    vec.push_back(60);

    vec.pop_back();

    cout << "Front element: " << vec.front() << endl;

    cout << "Back element: " << vec.back() << endl;

    cout << "Elements at index 1: " << vec.at(1) << endl;

    return 0;
}