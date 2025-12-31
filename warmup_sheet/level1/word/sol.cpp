#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;
    int lcount = 0;
    int ucount = 0;
    for(int i = 0; i < s.length(); i++){
        if(islower(s[i])){
            lcount++;
        }
        else{
            ucount++;
        }
    }
    for(int i = 0; i < s.length(); i++){
            if(ucount > lcount) {
                s[i] = toupper(s[i]);

            }
            else {
                s[i] = tolower(s[i]);
                
            }
        }
    cout << s;
}

int main()
{
    solution();

    return 0;
}