#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    map<string, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name; int number;
        cin >> name >> number;
        m.insert({name, number});
    }
    string name;
    while(cin >> name){
        if(m.count(name) > 0){
            cout << name << "=" << m[name];
        }else{
            cout << "Not found";
        }
        cout << endl;
    }
    return 0;
}
