#include<bits/stdc++.h>
using namespace std;

// int main() {
//     int i , j;
//     for(i=0; i<4; i++){
//         for(j=0; j<4; j++){
//             cout << " * ";
//         }
//         cout << endl;
//     }
//     return 0;
// } 

// void print1(int n) {
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//         cout << " * ";
//         }
//         cout << endl;
//     }
    
// }
    


// int main() {
//     int n;
//     cin >> n;
//     print1(n);       // yaah toh yeh nhi toh dusre wALA CHALA LE !!
// }
// void print2(int n) {
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//         cout << " * ";
//         }
//         cout << endl;
//     }
    
// }

// void print3(int n) {
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//         cout <<  i <<"  ";
//         }
//         cout << endl;
//     }
    
// }
    
// int main() {
//     int t;
//     cin >> t;
//     for(int i=0;i<t;i++) {
//         int n;
//         cin >> n;
//         print3(n);
//     }
// }

// void print4(int n) {
//     for(int i = 1; i<=n; i++) {
//         for(int j=0; j<n-i+1;j++){
//           cout << " * ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int t;
//     cin >> t;
//     for(int i=0; i<t;i++) {
//         int n;
//         cin >> n;
//         print4(n);
//     }
// }
// void print5(int n) {
//     for(int i = 1; i<=n; i++) {
// //         for(int j=1; j<=n-i+1;j++) {
// //           cout << j << " ";
// //         }
// //         cout << endl;
// //     }
// // }
// // int main() {
// //     int t;
// //     cin >> t;
// //     for(int i=0; i<t;i++) {
// //         int n;
// //         cin >> n;
// //         print5(n);
// //     }
// // }

// void print6(int n) {
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout << "*";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int t;
//     cin >> t;
//     for(int i = 0; i<t;i++){
//         int n;
//         cin >> n;
//         print6(n);
//     }
// }
// void print7(int n) {
//     for(int i=0; i<n; i++){
//         //space
//         for(int j=0; j<i; j++){
//             cout << " ";
//         }
//         //star
//         for(int j=0; j< 2*n - (2*i + 1); j++){
//             cout << "*";
//         }
//         //space
//         for(int j=0; j<i; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int t;
//     cin >>t;
//     for(int i = 0; i<t; i++){
//         int n;
//         cin >> n;
//         print6(n);
//         print7(n);
//     }
// }
// void print8(int n){
//     for(int i=1; i<=2*n-1; i++){
//         int stars = i;
//         if(i> n) stars =2*n-i;
//         for(int j =1; j<=stars; j++){
//             cout << "*";
//         }
//         cout << endl;

//     }
// }
// int main () {
//     int t;
//     cin >> t;
//     for(int i=0; i<t; i++){
//         int n;
//         cin >> n;
//         print8(n);
//     }
//     return 0;
// } 
// void print9(int n){
//     int start = 1;
//     for(int i=0; i<n; i++){
//         if(i%2 == 0) start =1;
//         else start = 0;
//         for(int j = 0; j<=i; j++){
//             cout << start;
//             start = 1 - start;
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int t;
//     cin >> t;
//     for(int i= 0; i<t; i++){
//         int n;
//         cin >> n;
//         print9(n);
// //     }
// // }
// void print10(int n) {
//     int space = 2* (n-1);
//     for(int i =1; i<=n; i++){
//         //number
//         for(int j=1; j<=i; j++){
//             cout << j;
//         }

//         //space
//         for(int j=1; j<=space; j++){
//             cout << " ";
//         }
        
//         //number
//          for(int j=i; j>=1; j--){
//             cout << j;
//         }
//         space -= 2;
//         cout << endl;
//     }

// }

// int main() {
//     int t;
//     cin >> t;
//     for(int i= 0; i<t; i++){
//         int n;
//         cin >> n;
//         print10(n);
//     }
// }
// void print11(int n){
//     int num=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i;j++){
//             cout << num << " ";
//             num +=1;  
//         }
//         cout << endl;

//     }


// }

// int main() {
//      int t;
//      cin >> t;
//      for(int i= 0; i<t; i++){
//          int n;
//          cin >> n;
//          print11(n);
//         }
// }
// void print12(int n){
//     for(int i=0; i<n; i++){
//         for(char ch ='A'; ch<='A' + i; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }

// }
// int main() {
//      int t;
//      cin >> t;
//      for(int i= 0; i<t; i++){
//          int n;
//          cin >> n;
//          print12(n);
//         }
// }
// void print13(int n){
//     for(int i=0; i<n; i++){
//         for(char ch ='A'; ch<='A' +(n- i - 1); ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }

// }
// int main() {
//      int t;
//      cin >> t;
//      for(int i= 0; i<t; i++){
//          int n;
//          cin >> n;
//          print13(n);
//         }
// }
// }
// void print14(int n) {
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }
//         // character
//         char ch ='A';
//         int breakpoint = (2*i+1) / 2;
//         for(int j=0;j<2*i+1;j++){
//             cout << ch;
//             if(j < breakpoint){
//                 ch++;
//             }
//             else{
//                 ch--;
//             }
//         }
        
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int t;
//     cin >> t;
//     for(int i = 0; i<t;i++){
//         int n;
//         cin >> n;
//         print14(n);
//     }
// }
// void print15(int n){
//     for(int i=0; i<n; i++) {
//         for(char ch = 'E'-i; ch<='E'; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }


// }

// int main() {
//     int t;
//     cin >> t;
//     for(int i = 0; i<t;i++){
//         int n;
//         cin >> n;
//         print14(n);
//     }
// }

// void print15(int n){
//     int inis = 0;
//     for(int i=0; i<n; i++){
//         //stars
//         for(int j=1; j<=n-i; j++){
//             cout << "*";
//         }
//         //spaces
//         for(int j=0; j<inis; j++){
//             cout << " ";
//         }
//         //stars
//         for(int j=1; j<=n-i; j++){
//             cout << "*";
//         }
//         inis += 2;  
//         cout << endl;
//                                   //iniS=2*n-2 instead of 8
//     }
//     inis =8;
//     for(int i =1; i<=n; i++) {
//         //stars
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         //spaces
//         for(int j=0; j<inis; j++){
//             cout << " ";
//         }
//         //stars
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         inis -= 2;
//         cout << endl;
        
//     }

// }
// int main() {
//     int t;
//     cin >> t;
//     for(int i = 0; i<t;i++){
//         int n;
//         cin >> n;
//         print15(n);
//     }
// }
// void print16(int n) {
//     int space = 2*n-2;
//     for(int i=1; i<=2*n-1; i++){
//         int stars = i;
//         if(i>n) stars = 2*n-i;
//         //stars
//         for(int j=1; j<=stars; j++){
//             cout << "*";
//         }
//         //spaces
//         for(int j=1; j<=space; j++){
//             cout << " ";
//         }
//         //stars
//         for(int j=1; j<=stars; j++){
//             cout << "*";
//         }
//         cout << endl;
//         if(i<n) space -= 2;
//         else space += 2;
//     }
// }
// int main() {
//     int t;
//     cin >> t;
//     for(int i = 0; i<t;i++){
//         int n;
//         cin >> n;
//         print16(n);
//     }
// }
// void print17(int n) {
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n;j++){
//             if(i==0 || j==0 || i == n-1 || j == n-1) {
//                 cout << "*";
//             }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     for(int i = 0; i<t;i++){
//         int n;
//         cin >> n;
//         print17(n);
//     }
// }
void print18(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j = 0; j<2*n-1; j++){
            int top=i;
            int left=j;
            int right=2*n-2-j;
            int bottom=2*n-2-i;
            cout << n - min(min(top,bottom),min(left,right)) << " ";
        }
        cout << endl;
    }
    
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i<t;i++){
        int n;
        cin >> n;
        print18(n);
    }
}