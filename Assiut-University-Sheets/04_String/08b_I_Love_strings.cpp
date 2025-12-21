#include <iostream>
#include <string>
using namespace std;


//* by two pointer  (Asynchronous Movement)


int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        size_t sz1 = s1.length();
        size_t sz2 = s2.length();

        size_t x = 0;
        size_t z = 0;
        while (x < sz1 && z < sz2)
        {
            cout << s1[x] << s2[z];
            x++;
            z++;
        }
        while (x < sz1)
        {
            cout << s1[x];
            x++;
        }
        while (z < sz2)
        {
            cout << s2[z];
            z++;
        }
        cout << "\n";
    }

    return 0;
}