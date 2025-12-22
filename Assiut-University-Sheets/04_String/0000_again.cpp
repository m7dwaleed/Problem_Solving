#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    size_t sz = s.size();
    while (s.find("EGYPT") != string::npos)
    {

        size_t f_idx = s.find("EGYPT");
        
         s.replace(f_idx, 5, " ");
    }

    cout<<s;

    return 0;
}