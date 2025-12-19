#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A;
    vector<int> B;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
        cin >> x;
        B.push_back(x);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if (B[i] == A[j])
                {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}