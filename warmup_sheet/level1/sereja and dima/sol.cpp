#include <bits/stdc++.h>
using namespace std;

void solution() {
        int n; 
        cin >> n;
        int arr[n];
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ser = 0, dima = 0;

        if (n == 1) {
            ser = arr[0];
            dima = 0;
        }
        else {
            l = 0;
            r = n - 1;
            bool serturn = true, dimaturn = false;
            while (l < r){
                if (serturn) {
                    if (arr[l] > arr[r]) {
                        ser += arr[l];
                        l++;
                        
                    }   
                    else {
                        ser += arr[r];
                        r--;
                       
                    }
                }
                else if (dimaturn) {
                    if (arr[l] > arr[r]) {
                        dima += arr[l];
                        l++;
                    }
                    else {
                        dima += arr[r];
                        r--;
                    }
                }
                serturn = !serturn;
                dimaturn = !dimaturn;
            }
            if (serturn) ser += arr[l];
            else if (dimaturn) dima += arr[r];
        }
        
         cout << ser << " " << dima << "\n";
    }

int main()
{
    solution();

    return 0;
}