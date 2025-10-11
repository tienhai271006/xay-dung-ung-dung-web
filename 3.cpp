#include <bits/stdc++.h>
using namespace std;    
int main() {
    int n;
    cin >> n;
    int tong = 0;
    while(n){
    tong += n % 10;
    n /= 10;
    }
    cout << tong << endl;
    return 0;
}