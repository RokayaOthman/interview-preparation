#include <bits/stdc++.h>
using namespace std;

void solution() {
    stack<int> crime; 
    stack<int> conan;
    int n; 
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == -1) {
            if(!conan.empty()) {
                int top = conan.top(); // current investigator
                top--;
                conan.pop();
                conan.push(top);
                if(top == 0){
                    conan.pop();
                }
            }
            else {
                crime.push(arr[i]); // -1
            }
        }
        else {
            conan.push(arr[i]);
        }
    }
    cout << crime.size();
}

int main()
{
    solution();

    return 0;
}