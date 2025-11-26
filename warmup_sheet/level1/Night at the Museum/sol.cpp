#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int count = 0;
    string s;
    cin >> s;
    char current = 'a';
    for(int i = 0; i < s.length(); i++){
        char target = s[i];
        int diff = abs(target - current);
        int rotations = min(diff, 26 - diff);
        count += rotations;
        current = target;
    }
    cout << count;
}

int main()
{
    solution();
    return 0;
}