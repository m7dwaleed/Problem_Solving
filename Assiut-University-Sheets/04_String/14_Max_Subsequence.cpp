#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;
    cin >> s;

    string sub;

    sub.push_back(s[0]);

    int i = 0;
    int j = 0;

    while(n>i){
        if (s[i] != sub[j])
        {
            j++;
            sub.push_back(s[i]);
        }
        i++;
}

    cout << sub.size();
    return 0;
}