    #include <iostream>
    #include <string>
    #include <cctype>
    using namespace std;

    int main()
    {
    string s;
    getline(cin,s);


     
        int freq[52]={0};

    for(int i=0;i<s.length();i++){

        if( ! isalpha(s[i])){
            continue;
        }


        if(isupper( s[i] ) ){
            freq[s[i]-'A']++;
        }else{
            freq[s[i]-71]++;
        }

    }

        for(int i=0;i<52;i++){
            if(freq[i]>0){
                if(i>=0 && i<=25){
                    cout<< (char)(i+65)<<" : "<<freq[i]<<"\n";
                }else{
                    cout<< (char)(i+71)<<" : " <<freq[i]<<"\n";
                }
            }
        }

        return 0;
    }