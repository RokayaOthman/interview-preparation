#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;
    int len = s.length();
    map<char, int> frequencyMap;
    int counter = 0;
    for(int i = 0; i < len; i++){
        if (!frequencyMap[s[i]]) {
            counter++;
        }
        frequencyMap[s[i]] = 1;
    }
    if(counter % 2 == 0) cout << "CHAT WITH HER!" << '\n';
    else cout << "IGNORE HIM!" << '\n';
}

int main()
{
    solution();

    return 0;
}