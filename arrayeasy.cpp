#include<bits/stdc++.h>
// int largestelement(vector<int> &arr, int n){
//     int largest = arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }
//     return largest;
// }


// SECOND LARGEST AND SMALLEST
int secondlargest(vector<int> &arr ,int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i=1; i< n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}
int secondsmallest(vector<int> &a; int n){
    int smallest =a[0];
    int ssmallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i]!= smallest && a[i] < ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;
}
vector<int> getsecondorderelement(int n, vector<iny> a){
    int slargest = secondlargest(a, n);
    int ssmallest(a , n);
    return {slargest,smallest};
}


//check if the array is sorted orr not!!
int isSorted(int n, vector<int> arr){
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){
        
        }
        else{
        return false;
        }
    }
    return true;

}

//
class Solution {
    public:
    bool check(vector<int> &nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > nums[(i+1)%nums.size()]){
                count++;
            }
        }
        if(count<=1){
            return true;
        }
        else{
            return fakse;
        }
    }
}; 

int removeDuplicates(vector<int> &arr, int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
// third largest
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int largest =nums[0];
        int slargest = INT_MIN;
        int tlargest = INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>largest){
                tlargest=slargest;
                slargest=largest;
                largest=nums[i];
            }
            else if(nums[i]<slargest && nums[i]>tlargest){
                tlargest=nums[i];
            }
        }
        return tlargest;
    }
};