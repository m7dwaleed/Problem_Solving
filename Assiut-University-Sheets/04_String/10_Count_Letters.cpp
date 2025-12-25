#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    cin >> s;
    size_t sz = s.length();
    int freq[26] = {0};

    for (int i = 0; i < sz; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << (char)(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}