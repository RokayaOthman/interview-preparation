#include <bits/stdc++.h>
using namespace std;

void solution()
{
 
    string a, b;
    cin >> a >> b;
    for(int i = 0; i  < a.length() ; i++) 
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    if (a < b) cout << -1;
    else if (b < a) cout << 1;
    else cout << 0;
}

int main()
{
    solution();

    return 0;
}