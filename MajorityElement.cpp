// brute force solution of  finding Majority Element..
#include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<n;i++){
//         int count =0;
//         for(int j=0;j<n;j++){
//             if(arr[j]==arr[i]){
//                 count++;
//             }
//             if(count>(n/2)){
//                 cout << arr[i];
//                 return 0;
//             }
//         }
//     }
//     cout << -1;
//     return 0;
// }

// better solution of finding Majority Element..
// int majorityElement(vector<int> v){
//     map<int,int>mpp;
//     for(int i=0;i<v.size();i++){
//         mpp[v[i]]++;
//     }
//     for(auto it: mpp){
//         if(it.second> (v.size()/2)){
//             return it.first;
//         }
//     }
//     return -1;
// }
// optimal solution of finding Majority Element..
int majorityElement(vector<int> v){
    int cnt =0;
    int el;
    for(int i=0;i<v.size();i++){
        if(cnt == 0){
            cnt =1;
            el=v[i];
        }
        else if(v[i]== el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i =0;i<v.size();i++){
        if(v[i]== el)cnt++;
    }
    if(cnt1 > (v.size()/2)){
        return el;
    }
    return -1;
}