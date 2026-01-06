#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    
    vector<int> home(n), guest(n);
    vector<int> guestFreq(101, 0); // Frequency of guest colors (1-100)
    
    // Read input and count guest uniform frequencies
    for(int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
        guestFreq[guest[i]]++; // Count how many teams have this guest color
    }
    
    int count = 0;
    // For each team's home uniform color, check how many teams
    // have that color as their guest uniform
    for(int i = 0; i < n; i++) {
        count += guestFreq[home[i]];
    }
    
    cout << count << endl;
}

int main() {
    solution();
    return 0;
}