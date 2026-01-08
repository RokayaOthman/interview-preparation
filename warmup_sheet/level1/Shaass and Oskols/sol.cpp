#include <bits/stdc++.h>
using namespace std;

void solution() {
    int numberOfWires;
    cin >> numberOfWires;
    int wireBirds[101];
    for(int i = 1; i <= numberOfWires; i++){
        cin >> wireBirds[i];
    }
    int numberOfShotBirds;
    cin >> numberOfShotBirds;
    for(int i = 1; i <= numberOfShotBirds; i++){
       int currentWire , y;
       cin >> currentWire >> y;
       int original = wireBirds[currentWire];
       int left = y - 1;
       int right = original - y;
       if(currentWire > 1) {
        wireBirds[currentWire - 1]+= left;
       }
       if(currentWire < numberOfWires){
        wireBirds[currentWire + 1] += right;
       }
       wireBirds[currentWire] = 0;
        
    }
    for(int i = 1; i <= numberOfWires; i++) {
        cout << wireBirds[i] << endl;
    }
}

int main()
{
    solution();

    return 0;
}