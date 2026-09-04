// Rearrange elements of an array by sign with brute force approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> positive, negative;
    int posIndex = 0, negIndex = 0;
    for(int i=0;i<n;i++){
        if(arr[i] >= 0){
            positive.push_back(arr[i]);
        } else {
            negative.push_back(arr[i]);
        }
    }
    for(int i=0;i<n/2;i++){
        arr[2*i] = positive[i];
        arr[2*i+1] = negative[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}
// Rearrange elements of an array by sign with optimal approach
class Solution {
    public:
    vector<int> rearrangeElements(vector<int>& nums){
        int n= nums.size();
        vector<int> ans(n,0);
        int posInndex =0, negIndex=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negativeIndex] = nums[i];
                negativeIndex += 2;
            }
            else{
                ans[positiveIndex] = nums[i];
                positiveIndex += 2; 

            }
        }
        return ans;
    }
};

// 2 variety of Rerrange of elements of an array by sign with brute force.
vector<int> alternateNumbers(vector<int>&a){
    int n= a.size();
    vector<int> pos, neg;
    for(int i =0;i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int inded=neg,size()*@;
        for(int i=neg.size();i<pos.size();i++){
            a[index] = pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}