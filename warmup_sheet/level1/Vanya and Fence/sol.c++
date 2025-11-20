#include <iostream>
using namespace std;

void solution()
{
    int num_friends, fenceheight;
    cin >> num_friends >> fenceheight;

    int result = 0;

    for (int i = 0; i < num_friends; i++)
    {
        int height;
        cin >> height;

        if (height > fenceheight)
        {
            result += 2;
        }
        else
            result++;
    }

    cout << result;
}

int main()
{
    solution();
    return 0;
}