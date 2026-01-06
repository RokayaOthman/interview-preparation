#include <bits/stdc++.h>
using namespace std;

void solution() {
   int price, coin; 
   cin >> price >> coin ;
   int result = -1;
   for(int i = 1; i < 1000; i++) {
    if ((price * i) % 10 == 0 || ((price * i ) - coin ) % 10 == 0) {
        result = i; 
        break;
    }
   }
    cout <<  result;
}

int main() {
    solution();
    return 0;
}