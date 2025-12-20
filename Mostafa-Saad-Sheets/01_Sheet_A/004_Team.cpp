#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int Sum_of_sol = 0;
    for (int i = 0; i < n; i++)
    {

        int arr[3];
        int Sum_of_ones = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            Sum_of_ones += arr[i];
        }

        if (Sum_of_ones > 1)
        {
            Sum_of_sol += 1;
        }
    }

    cout << Sum_of_sol;

    return 0;
}