#include<bits/stdc++.h>
using namespace std;
// void print(){              // this function return nothing and takes no argument
//     cout << "keshav";

// }
// int main() {
//     print();
//     return 0;

// }

// int sum(int a, int b){       // this is a return tyupe function which takes two integer argument and return an integer value
//     return a+b;
// }
// int main() {       
//     int s = sum(1 ,5);
//     cout << s;
//     return 0;

// }  


// COMPARATORS IN STL

bool comp(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // if they are same 
    if(p1.first > p2.first) return true;
    return false;

}

int num = 7;
int cnt = __builtin_popcount(num);

long long num = 1342526271;
int cnt = __builtin_popcountll(num);
 
string s= "123";
int a[] = {1,2,3,4,5};
int n = sizeof(a)/sizeof(a[0]);
do {
    cout << s<< endl;
} while(next_permutation(s.begin(), s.end()));

int maxi = *max_element(a,a+n);


int main() {
    return 0;
}
