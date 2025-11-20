#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int lilac, bob;
    cin >> lilac >> bob;
    int index = 0;
    
    while (lilac <= bob)
    {
        lilac *= 3;
        bob *= 2;
        index++;
    }
    
    cout << index;
}

int main()
{
    solution();

    return 0;
}