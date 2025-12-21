#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



//* (Lock-step Iteration)


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);


    int n;
    cin >> n;

    while (n--)
    {

        string s1, s2;
        cin >> s1 >> s2;

        size_t sz1 = s1.length();
        size_t sz2 = s2.length();
        int sz3 = max(sz1, sz2);
        for (size_t i = 0; i < sz3; i++)
        {
            if (i < sz1)
            {
                cout << s1[i];
            }
            if (i < sz2)
            {
                cout << s2[i];
            }
        }

        cout << "\n";
    }

    return 0;
}