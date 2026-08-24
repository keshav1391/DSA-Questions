#include<iostream>
using namespace std;
    
//PRINT NAME N TIMES USING RECURSION!!
// void name(int i,int n) {
//     if(i>n){
//         return;
//     }
//     cout << "keshav" << endl;
//     name(i+1,n);
// }

// int main() {
//     int n;
//     cin >> n;
//     name(1,n);
//     return 0;          //SPACE COMPLEXITY = O(n)
// }                     // TIME COMPLEXITY = O(n)

// PRINT LINEARLY FROM 1 TO N !!!
// void f(int i, int n) {
//     if(i>n)
//     return;
//     cout << i <<  endl;
//     f(i+1, n);
// }
// int main() {
//     int n;
//     cin >> n;
//     f(1,n);
//     return 0;
// }

// PRINT LINEARLY IN OPPOSITE DIRECTION NTO 1
// void madhav(int i, int n) {
//     if(i<1)
//     return;
//     cout << i << endl;
//     madhav(i-1, n);
// } 
// int main() {
//     int n;
//     cin >> n;
//     madhav(n ,n);
//     return 0;
// }  

//DIFFERENT METHOD OF WRITING A CODE OF 1 TO N WHICH IS CALLED BACKYTRACKING..
// void f(int i , int n) {
//     if(i<1) 
//     return;
//     f(i-1, n);
//     cout << i << endl;
// }
// int main() {
//     int n;
//     cin >> n;
//     f(n ,n);
//     return 0;
// }

//DIFFERENT METHOD OF WRITING A CODE OF N TO 1 WHICH IS CALLED BACKYTRACKING..
void k(int i , int n) {
    if(i>n)
    return;
    k(i+1,n);
    cout << i << endl;
}
int main() {
    int n;
    cin >> n;
    k(1,n);
    return 0;

}