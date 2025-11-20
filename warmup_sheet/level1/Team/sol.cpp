#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n; 
    cin >> n;
    int arr[n - 1][3];
    int result = 0;
    bool morethatnzero = false;
    bool onezero = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                if (onezero == true) {
                    morethatnzero = true;
                }
                onezero = true;
            }
            }
        if(!morethatnzero) {
            result++;
        }    
        morethatnzero = false;
        onezero = false;
    }
    cout << result;
}


int main()
{
    solution();
    return 0;
}