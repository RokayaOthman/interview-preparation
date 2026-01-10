#include <bits/stdc++.h>
using namespace std;

void solution()
{
    string s;
    getline(cin, s);
    set<int> ss;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') {
            ss.insert(s[i]);
        }
    }
  
    
    cout << ss.size();
}

int main()
{
    solution();
    return 0;
}