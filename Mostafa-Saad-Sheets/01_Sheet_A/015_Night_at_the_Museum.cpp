#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int sum = 0;
    int all = 26;

    int st = 'a';

    for (int i = 0; i < s.length(); i++)
    {
        int ed = s[i];

        int clockwise = abs(ed - st);
        int counterclockwise(all - clockwise);

        sum += min(clockwise, counterclockwise);

            st = ed;
    }
    cout << sum;
    return 0;
}