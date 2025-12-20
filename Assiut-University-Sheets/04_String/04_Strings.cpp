#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{

    string s1, s2;
    cin >> s1 >> s2;

    cout << s1.length() << " " << s2.length() << endl;

    cout << s1 << s2 << endl;
     if(!s1.empty() && !s2.empty()){
         swap(s1[0],s2[0]);
     }
   
    cout << s1 << " " << s2 << endl;
    return 0;
}
