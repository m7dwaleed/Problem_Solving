#include <iostream>
#include <string >
#include<algorithm>
using namespace std;



//! the time complexty is o(n) because the string is array of char 
/*
 ??? Problem Requirements ???
 * Compare two strings lexicographically and output the smaller one.
 *
  ??? Solution Approach ???
 * Method 1: Use the '<' operator to compare strings character by character.
 * Method 2 (Pro): Use std::min(s1, s2) to get the lexicographically smaller string directly.
 */
 



int main(){
string s1,s2;
cin>>s1>>s2;

cout<< min(s1,s2);

    return 0;
}