// left rotate the arrayby one place 
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> rotatearray(vector<int> &nums, int n){
//     int temp =nums[0];
//     for(int i=1;i<n;i++){
//         nums[i-1] = nums[i];
//     }
//     nums[n-1]= temp;
//     return nums;
// }

// left rotate array by d place
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void leftrotate(int arr[],int n,int d){
//     d=d%n;
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]= arr[i];
//     }
//     for(int i=d;i<n;i++){
//         arr[i-d] = arr[i];
//     }
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[i-(n-d)];
//     }
// }
// int main(){
//     int n;
//     cin>> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;
//     leftrotate(arr,n,d);
//     for(int i=0;i<n;i++){
//         cout << arr[i] <<" "; 
//     }
//     return 0;

// }
//left rotate array by d place in optimal solution..
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// void leftRotate(int arr[], int n, int d){
//     reverse(arr,arr+d);
//     reverse(arr+d,arr+n);
//     reverse(arr,arr+n);
// }
// right rotate array by d place in optimal solution
// void rightRotate(int arr[],int n, int d){
//     reverse(arr,arr+n);
//     reverse(arr,arr+d);
//     reverse(arr+d,arr+n);
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;
//     rightRotate(arr,n,d);
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// move all zero to the end of the array..!!!
// vector<int> moveZeros(int n, vector<int> a){
//     vector<int> temp;
//     for(int i=0;i<n;i++){
//         if(a[i]!=0){
//             temp.push_back(a[i]);
//         }
//     }
//     int nz = temp.size();
//     for(int i=0;i<nz;i++){
//         a[i] = temp[i];
//     }
//     for(int i=nz;i<n;i++){
//         a[i]=0;
//     }
//     return a;
// } 

// linear search 
// int linearSearch(int n, int num, vector<int> &nums){
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]==num){
//             return i;
//         }
//     }
//     return -1;
// }

//find the union of sorted array by brute force approach..
// #include<bits/stdc+++.h>
vector<int> sortedArray(vector <int> a, vector<int> b){
    int n1=a.size();
    int n2=b.size();
//     set<int> st;
//     for(int i =0;i<n1;i++){
//         st.insert(a[i]);
//     }
//     for(int i=0;i<n2;i++){
//         st.insert(b[i]);
//     }
//     vector<int> temp;
//     for(auto it: st){
//         temp.push_back(it);
//     }
//     return temp;
// }
// OPTIMAL APPROACH!!
// int i =0;
// int j=0;
// vector<int> unionArr;
// while(i<n1 && j<n2){
//     if(a[i]<= b[j]){
//         if(unionArr.size()==0 || unionArr.back() != a[i]){
//             unionArr.push_back(a[i]);
//         }
//         i++;
//     }
//     else {
//         if(unionArr.size()==0 || unionArr.back() != b[j]){
//             unionArr.push_back(b[j]);
//         }
//         j++;
//     }
// }
// while(j<n2){
//     if(unionArr.size()==0 || unionArr.back() != b[j]){
//         unionArr.push_back(b[j]);
//     }
//     j++;
// }
// while(i<n1){
//     if(unionArr.size()==0 || unionArr.back() != a[i]){
//         unionArr.push_back(a[i]);
//     }
//     i++;
// }
// return unionArr;
// }
// INTERSECTION OF TWO SORTED ARRAY !!!
vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B, int m){
    vector<int> ans;
    int vis[m] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i] == B[j] && vis[j] == 0){
                ans.push_back(A[i]);
                vis[j] = 1;
                break;
            }
            if(B[j] > A[j]) break;
        }
    }
    return ans;
}
// INTERSECTION OF TWO SORTED ARRAY !!! with optimal solution
vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B, int m){
    int i =0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(A[i]< B[j]){
            i++;
        }
        else if(B[j] < A[i]){
            j++;
        }
        else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;

}