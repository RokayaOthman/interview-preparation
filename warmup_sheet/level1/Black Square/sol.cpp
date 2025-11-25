#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int arr[4];
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
        
    }
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        int num = s[i] - '0';
        count += (arr[num - 1]);
    }
    cout  << count;
}

int main()
{
    solution();
    return 0;
}