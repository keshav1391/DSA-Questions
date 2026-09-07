//BRUTE FORCE APPROACH OF FINDING LEADER IN AN ARRAY.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        bool leader =true;
        for(int j= i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader = false;
                break;
            }
        }
        if(leader== true){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
//OPTIMAL APPROACH OF FINDING LEADER IN AN ARRAY.
vector<int> superiorLeaders(vector<int>& arr){
    vector<int> ans;
    int n = arr.size();
    int maxi =  INT_MIN;
    // Traverse the array from right to left
    //O(n) time complexity
    for(int i = n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        // Update the maximum value seen so far
        maxi = max(maxi, arr[i]);
    }
    // O(nlogn) for sorting the leaders in ascending order
    sort(ans.begin(),ans.end());
    return ans;
}