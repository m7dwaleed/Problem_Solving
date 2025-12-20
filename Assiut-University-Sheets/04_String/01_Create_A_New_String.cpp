#include <iostream>
#include <string>
using namespace std;


/*
? what is reqired 
? here are two string print length of each and concatinate them
?
?the solution
?you use string_name.length() to calculate the size of each string
?and use + to concatinate two strings or use operator << and print each string
?
?


*/
int main()
{
    string s, m;
    getline(cin,s);
    getline(cin,m);
    size_t length_s = s.length();
    size_t length_m = m.length();

    cout<<length_s<<" "<<length_m<<endl;
    cout<<s<<" "<<m;
    
}