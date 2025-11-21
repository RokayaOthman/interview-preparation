#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    string arr[n];
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
        result = 1;
    if (n > 1)
    {
        for (int i = 0; i < n - 1; i++)
    { 
        // If adjacent magnets have same orientation, they repel (new group)
        // If they have different orientations, they attract (same group)
        if (arr[i] != arr[i + 1])
        {
            // They attract, stay in same group
        }
        else
        {
            // They repel, start new group
            result++;
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