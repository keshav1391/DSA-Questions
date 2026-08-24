// #include<iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >>N;
//     int count =0;
//     while(N>0) {
//         int lastdigit = N%10;
//         N = N/10;
//         cout << lastdigit << " ";
//         count++;
//     }
//     cout << endl;
//     cout << "Count of digits: " << count;
//     return 0;
// }
        
       //TIME COMPLEXITY OF ABOVE CODE IS O(log10(n)) WHERE D IS NUMBER OF DIGITS IN N
       //TIME COMPLEXITY OF BELOW CODE IS O(1) CONSTANT TIME COMPLEXITY
// #include<bits/stdc++.h>
// using namespace std;

// int count(int n) {
//     int cnt = (int)(log10(n) + 1);
//     return cnt;
// }

// int main() {
//     int n;
//     cin >> n;
//     int ans = count(n);         
//     cout << ans;
// } 

// reversing a number
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int reverse = 0;
//     while(n>0) {
//         int lastdigit = n%10;
//         reverse = reverse*10 + lastdigit;
//         n = n/10;
//     }
//     cout << reverse;
//     return 0;
// }


// check palindrome or not1???
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int rev =0;
//     int dup = n;
//     while(n>0) {
//         int ld = n%10;
//         rev = (rev*10) + ld;
//         n = n/10;
//     }
//     if(dup ==rev) cout << "true";
//     else cout << "false";
// }


//Amstrong number
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int sum = 0;
//     int dup = n;
//     while(n>0) {
//         int ld = n%10;
//         sum = sum + (ld*ld*ld);
//         n = n/10;
//     }
//     if(dup == sum) cout << "true";
//     else cout << "false";
// }


// print all Divisors
#include<iostream>
using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for(int i =1; i<=n; i++){
//         if(n%i == 0) cout << " " << i ;
//     }
//     cout << endl << "These all are Divisors of:" << n ;
// }

// A different way of writting a code..

// void printdivisor(int n) {
//     for(int i =1; i<=n; i++) {
//         if(n%i == 0) {
//             cout << i << " ";
//         }
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     printdivisor(n);
//     return 0;
// }

// Another way 
// void printdivisors(int n) {
//     vector<int> ls; 
    
//     // instead of writing this i<=sqrt(n) = i*i<=n 
//     for(int i = 1; i<=sqrt(n);i++) {       // O(sqrt(n))
//         if(n%i==0) {
//             ls.push_back(i);
//             if((n/i) != i) {
//                 ls.push_back(n/i);
//             }
//         }
//     }

//     // O(no of factors * log (no of factors)): n is the number of factors
//     sort(ls.begin(), ls.end());
//     // o(number of factors)
//     for(auto it : ls) cout << it << " ";
// }
// int main () {
//     int n ;
//     cin >> n;
//     printdivisors(n);
//     return 0;
// }

// prime number 
//->exactly 2 factors 1 & itself..

// int main() {
//     int n;
//     cin >> n;

//     int count = 0;

//     for(int i =1; i*i<=n; i++) {
//         if(n%i == 0) {
//             count++;
            
//             if((n/i)!=i) {
//                 count ++;
//             }
//         }
//     }
//     if(count == 2)
//      cout << "it is a prime" ;
//     else
//      cout << "it is not a primne ";

//     return 0;
// }

// GCD/HCF

// broote force method....

// int main() {
//     int n1;
//     int n2;
//     cin >> n1 >> n2;
//     int gcd =1;
//     for(int i =1; i<=min(n1,n2); i++){        // time complexity = O(min(n1,n2))
//         if(n1%i ==0 && n2%i == 0) {
//             gcd = i;
            
//         }
//     }
//     cout << gcd;
//     return 0;

// }

// another method = euclidean algorithm

int main() {
    int a, b;
    cin >> a >> b;
    while(a>0 && b>0) {
        if(a>b) {
            a= a%b;
        }
        else {
            b = b % a;
        }
    }
    if (a==0) { cout << b;}
    else { cout << a;}
    return 0;
}
// time complexity = O(log(min(a,b)))



  //WHEN EVER DIVISION IS HAPPENING THE TIME COMPLEXITY IS ALWAYS IN THE FORM OF LOG...