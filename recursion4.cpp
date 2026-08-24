#include<iostream>
using namespace std;

// REVERSING A ARRAY BY TWO POINTER USING RECURSION

// void f(int arr[],int l, int r){
//     if(l>=r){
//         return;
//     }
//     swap(arr[l],arr[r]);
//     f(arr,l+1,r-1);
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n; i++){
//         cin >> arr[i];
//     }
//     f(arr,0,n-1);
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

//REVERSING A ARRAY BY ONE POINTER USING RECURSION

// void f2(int arr[],int s,int n){
//     if(s>=n/2){
//         return;
//     }
//     swap(arr[s],arr[n-s-1]);
//     f2(arr,s+1,n);
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     f2(arr,0,n);
//     for(int i=0; i<n; i++){
//         cout << arr[i]  << " ";
//     }
// }

//CHECK IF THE GIVEN STRING IS PALINDROME OR NOT!!!

bool f3(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return f3(i+1,s);
}
int main() {
    string s="madsm";
    cout << f3(0,s);
    return 0;                    //TIME COMPLEXITY=O(n/2)
                                 //SPACE COMPLEXITY=O(n/2)

}