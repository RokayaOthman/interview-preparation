#include <bits/stdc++.h>
using namespace std;

void solution()
{
 int n;
 cin >> n;

 char arr[n]; 
 cin >> arr[0];

 int total = 0;
 char last = arr[0];
 char curr;

 if (n > 1){
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        curr = arr[i];
        last = arr[i - 1];
        
        if (curr == last) {
            total += 1;
           
        }
    }
 }
cout << total;
}

int main()
{
    solution();

    return 0;
}