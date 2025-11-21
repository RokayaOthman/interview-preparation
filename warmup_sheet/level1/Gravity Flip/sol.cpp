#include <bits/stdc++.h>
using namespace std;

void solution()
{
 int n; 
 cin >> n; 
 int arr[n];
 for(int i = 0; i < n; i++){
    cin >> arr[i];
 }
 sort(arr, arr + n);
 for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
 }
}

int main()
{
    solution();

    return 0;
}