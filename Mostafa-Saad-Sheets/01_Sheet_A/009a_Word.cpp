#include <iostream>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int count_Lower = 0;
    int count_Upper = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            count_Upper++;
        }
        else
        {
            count_Lower++;
        }
    }

    if (count_Lower >= count_Upper)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                s[i] -= 32;
            }
        }
    }

    cout<<s;
    return 0;
}