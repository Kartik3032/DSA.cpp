#include <iostream>
#include <vector>
using namespace std;

int allocateBooks(vector<int> &books, int students)
{
    int n = books.size();
    if (n < students)
        return -1; // Not enough books for each student

    int sum = 0;
    for (int pages : books)
    {
        sum += pages;
    }

    int low = *max_element(books.begin(), books.end());
    int high = sum;
    int result = high;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int requiredStudents = 1;
        int currentSum = 0;

        for (int pages : books)
        {
            if (currentSum + pages > mid)
            {
                requiredStudents++;
                currentSum = pages;
            }
            else
            {
                currentSum += pages;
            }
        }

        if (requiredStudents <= students)
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return result;
}