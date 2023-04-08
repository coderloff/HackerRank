#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s, str;
        cin >> str;
        for(int j = 0; j < str.length(); j+=2){
            s += str[j];
        }
        s += " ";
        for(int j = 1; j < str.length(); j+=2){
            s += str[j];
        }
        cout << s << endl;
    }
    return 0;
}
