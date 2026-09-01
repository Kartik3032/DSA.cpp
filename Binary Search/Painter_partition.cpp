#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &boards, int painters, int maxTime)
{
    int painterCount = 1;
    int currentTime = 0;

    for (int board : boards)
    {
        if (currentTime + board <= maxTime)
        {
            currentTime += board;
        }
        else
        {
            painterCount++;
            currentTime = board;
        }
    }

    return painterCount <= painters;
}

int painterPartition(vector<int> &boards, int painters)
{
    int start = 0;
    int end = 0;

    for (int board : boards)
    {
        start = max(start, board);
        end += board;
    }

    int answer = end;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(boards, painters, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return answer;
}

int main()
{
    vector<int> boards = {10, 20, 30, 40};
    int painters = 2;

    cout << painterPartition(boards, painters);

    return 0;
}