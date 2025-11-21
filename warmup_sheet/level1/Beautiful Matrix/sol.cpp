#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int arr[5][5];
    int result = 0;
    bool onefound = false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (onefound)
            break;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                onefound = true;
                result = abs(i - 2) + abs(j - 2);
                break;
            }
        }
    }
    cout << result;
}

int main()
{
    solution();
    return 0;
}