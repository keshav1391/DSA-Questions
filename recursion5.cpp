#include<iostream>
using namespace std;

// MULTIPLE RECURSION CALLS
// Ex->1.FIBONACCI 
int f(int n){
    if(n<=1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last+slast;
}
int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0; 
}                   // TC->O(2^n) e4xponential