// Two sum. by better solution 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int num = nums[i];
            int moreneeded = target - num;
            if(mpp.find(moreneeded) != mpp.end()){
            return {mpp[moreneeded],i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
    }
};
// optimal solution of two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int left=0;
        int right = arr.size() -1;
        while(left<right){
            int sum = arr[left].first+arr[right].first;
            if(sum == target){
                return {arr[left].second,arr[right].second};
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }

        }
        return {};
        
        
    }
};