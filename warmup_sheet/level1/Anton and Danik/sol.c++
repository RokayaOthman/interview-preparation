#include <iostream>
#include <string>
using namespace std;

void solution()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')
        {
            d++;
        }
        else if (s[i] == 'A')
        {
            a++;
        }
    }
    string result = "";
    if (a > d)
    {
        result = "Anton";
    }
    else if (d > a)
    {
        result = "Danik";
    }
    else
    {
        result = "Friendship";
    }
    cout << result;
}

int main()
{
    solution();
    return 0;
}