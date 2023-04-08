#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a; double t; string str; char temp;
    cin >> a;
    cin >> t;
    cin >> temp;
    getline(cin, str);
    cout << a + i << endl;
    cout << fixed << setprecision(1)<< d + t << endl;
    cout << s + temp +str;
    return 0;
}