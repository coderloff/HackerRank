#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0, sum = 0, maxNumber = 0;
    cin >> n;

    while(n != 0)
    {
        i = n % 2;
        n /= 2;

        if(i == 1)
        {
            sum++;
        }
        else
        {
            sum = 0;
        }   
        maxNumber = max(sum, maxNumber);
    }
    cout << maxNumber;

    return 0;
}
