// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin >> n;
    if (n == 2 || (n & 1))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}