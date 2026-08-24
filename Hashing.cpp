#include<iostream>
#include<map>
using namespace std;

// CHECKING A NUMBER IN ARRAY IS REPEATING OR NOT 
// int f(int number, int arr[],int n){
//     int count =0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==number){
//             count += 1;
//         }
//     }
//     return count;
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++ ){
//         cin >> arr[i];
//     }
//     cout << f(1,arr,n);
//     return 0;
// } 
// HOW MANY TIME A NUMBER IS APPEAR IN ARRAY USING HASH ARRAY.
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         cin >> arr[i];
//     }

//     //precompute
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] +=1;
//     }



//     int q;
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;
//         //fetch
//         cout << hash[number] << endl;
//     }
//     return 0;
// }  

//CHARACTER HASHING
// int f(char c, string s,int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(s[i]==c){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     cout << f('a',s,n);
//     return 0;
// }

// int main() {
//     string s;
//     cin >> s;

//     //pre compute
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i] -'a']++;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//     char c;
//     cin >> c;
//     cout << hash[c-'a'] << endl;
//     }
//     return 0;
// }

// MAP
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     //pre compute
//     map<int,int> mpp;
//     for(int i=0;i<n;i++) {
//         mpp[arr[i]]++;
//     }

//     //iterate in the map
//     // for(auto it : mpp){
//     // cout << it.first << "->" << it.second << endl;
//     // }

//     int q;
//     cin >> q;                               // map stored all the value in sorted order
//     while(q--){
//         int number;
//         cin >> number;
//         //fetch
//         cout << mpp[number] << endl;
//     }
//     return 0;
// }

//unordered map

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //pre compute
    unordered map<int,int> mpp;
    for(int i=0;i<n;i++) {
        mpp[arr[i]]++;
    }
       int q;
    cin >> q;                               // unorderedmap stored all the value in unsorted order
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }
    return 0;
}