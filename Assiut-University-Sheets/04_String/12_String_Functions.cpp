#include <iostream>
#include<algorithm>
#include <string>
using namespace std;


/*
كود تحفه علي فكرة ال :

 Buffer وال cin
وكمان فكره ان الدوال ال ليها بدايه ونهايه دايما بتقف بعد النهايه ب واحد 
وكمان بفكره لما يقولي في الكونيسترين ان ال رقم اقل من ال 1 يعني بيقولي based-1 
وكمان لازم تهندل لو ال البدايه اكبر من النهاية تعمل اسواب

*/

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);



    int n, q;
    string s;
    cin >> n >> q;
    cin >> s;

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "pop_back")
        {
            s.pop_back();
        }
        else if (cmd == "front")
        {
            cout << s.front()<<"\n";
        }
        else if (cmd == "back")
        {
            cout << s.back()<<"\n";
        }
        else if (cmd == "print")
        {
            int p;
            cin >> p;
            cout << s.at(p - 1)<<"\n";
        }
        else if (cmd == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
        else if (cmd == "reverse")
        {
            int l;
            int r;
            cin >> l >> r;
            if(l>r) swap(l,r);
            reverse(s.begin() + l - 1, s.begin() + r );
        }
        else if (cmd == "substr")
        {
            int l;
            int r;
            cin >> l >> r;
             if(l>r) swap(l,r);
            cout << s.substr(l - 1, (r - l + 1))<<"\n";
        }
        else if (cmd == "sort")
        {
            int l;
            int r;
            cin >> l >> r;
             if(l>r) swap(l,r);
            sort(s.begin()+ l-1, s.begin() + r);
        }
        
    }

    
    return 0;
}