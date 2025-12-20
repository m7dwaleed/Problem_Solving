#include <iostream>
#include<string>
using namespace std;


/*
  ??? Problem Requirements ???
 * The program must accept a string containing spaces.
 * It should output the string up to the first '\' character.
 *
  ??? The Solution ???
 * 1. Input:
 * To read a full line with spaces, use: getline(cin, string_name).
 * (Standard 'cin' stops at the first space).
 *
 * 2. Processing (There are two solutions):
 * * [Method 1]: Loop (Naive Approach)
 * - Iterate through the string using a loop.
 * - Search for '\\'. If found, break. Else, print the character.
 * - Note: This is valid but less readable in modern C++.
 *
 * [Method 2]: Find & Substring (Optimized/Modern)
 * - Find the index of the first '\\' using 's.find()'.
 * - If found: Use 's.substr()' to extract the part before the '\'.
 * - If not found: Print the entire string.
 */

int main(){
string s;
getline(cin,s);

size_t sz=s.length();

size_t pos=s.rfind("\\");

if(pos==string::npos){
    cout<<s;
}else{
   cout<< s.substr(0,pos)<<endl;
}

    return 0;
}