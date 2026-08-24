// NORmal function ko call karna orr value ko assign karna
// #include<iostream>
// using namespace std;

// void square(int &x){
//     x = x*x;
// }
// int main() {
//     int a = 25;
//     square(a);
//     cout << a;
// }

// 2 number ko swap karna 
// #include<bits/stdc++.h>
// using namespace std;

// void swapNumbers(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main() {
//     int x=10 ,y=20;
//     swapNumbers(x,y);
//     cout << x << " " << y;
// }

// array basic question start 
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5];
//     for(int i =0; i<5; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0; i < 5; i++)
// {
//     cout << arr[i] << " ";
// }
//     return 0;
// }

// sum of  array
// #include<iostream>
// using namespace std;
// int main() {
//     int n=5;
//     int arr[n];
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int i=0; i<n; i++){
//         sum = sum + arr[i];
//     }
//     cout << sum;
//     return 0;
// }

// largest element in Array
// #include<iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     int arr[5];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int largest = arr[0];
//     for(int i =1; i< n; i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }
//     cout << largest;
//     return 0;
// }

// finding smallest element in array
// #include<iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int arr[5];
//     for(int i= 0; i<n; i++) {
//         cin >> arr[i];
//     }
//     int smallest = arr[0];
//     for(int i =1; i<n; i++) {
//         if(arr[i]<smallest){
//         smallest = arr[i];
//         }
//     }
//     cout << smallest;
//     return 0;

// }

// print even number in array
// #include<iostream>
// using namespace std;

// int main() {
//     int n =5;
//     int arr[5];
//     int count =0;
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
//     for(int i=0; i<n; i++) {
//         if(arr[i]%2 ==0) {
//             cout << arr[i] << " " ;
//             count++;
//         }
//     }
//     cout << "Count of even numbers: " << count;
//     return 0;
// }

//count odd number in array
// #include<iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     int arr[5];
//     int count =0;
//     for(int i =0; i<n; i++) {
//         cin >> arr[i];
//     }
//     for(int i=0; i<n; i++) {
//         if(arr[i]%2 !=0) {
//             count ++;
//         }
//     }
//     cout << "Count of odd numbers: " << count;
//     return 0;
// }

// linear search in array
// #include<iostream>
// using namespace std;
// int main() {
//     int n= 5;
//     int arr[5];
//     for(int i =0; i<n; i++) {
//         cin >> arr[i];
//     }
//     for(int i=0; i<n; i++) {
//         if(arr[i] == 10) {
//             cout << " Element found at index: " << i;
//         }
//     }
    
//     return 0;
// }

// next question
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     bool found = false;
//     for(int i = 0; i<n; i++) {
//         if(arr[i] == target) {
//             cout << "Element found at index:" << i << endl;
//             found = true;
//             break;
//         }
//     }
//     if(found == false) {
//         cout << "Element not found";
//     }
//     return 0;
// }

// class Solution {
//     public:
//     bool isAnagram(string s, string t) {
//         unordered_map<char,int> mpp;
//          if(s.size() !=t.size()){
//             return false;
//         }
//         for(int i=0;i<s.size();i++){
//         mpp[s[i]]++;
//         mpp[t[i]]--;
//         }
//         for(auto it : mpp){
//             if(it.second !=0){
//                 return false;
//             }
//         }
//         return true;
//     }
// }
// class Solution {
// public:
//     int maxFrequency(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         int left =0;
//         long long sum= 0;
//         int ans =1;
//         for(int right = 0; right<nums.size();right++){
//             sum += nums[right];
//         }
//         long long cost = nums[right] * (right - left + 1) - sum;
//         while(cost>k){
//             sum -=nums[left];
//             left++;
//             long long cost = nums[right] * (right - left + 1) - sum;
//         }
//         ans = max(ans, right - left + 1);
//     }
// };

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int> st;
//         vector<int> ans;
//         unordered_set<int> st2;
//         for(int i =0;i<nums1.size();i++){
//             st.insert(nums1[i]);
//         }
//         for(int i =0;i<nums2.size();i++){
//             if(st.find(nums2[i]) !=st.end() && st2.find(nums2[i])== st2.end()){
//                 ans.push_back(nums2[i]);
//                 st2.insert(nums2[i]);
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second==1){
                return it.first;
            }
        }

    }
};
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mpp;
        for(int i=0; i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(mpp[s[i]]==1){
                return i;
            }
        }
        return -1;

    }
};
 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int i=0;i<=nums.size();i++){
            if(st.find(i)== st.end()){
                return i;
            }
        }
        return -1;
        
    }
};

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> mpp;
        vector<int> ans;

        // nums1 ki frequency
        for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]]++;
        }


        // nums2 traverse + check + decrease frequency
        for(int i=0;i<nums2.size();i++){
            if(mpp[nums2[i]]>0){
                ans.push_back(nums2[i]);
                mpp[nums2[i]]--;

            }


        }


        return ans;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++) {
            // minimum price
            if(minPrice>prices[i]){
                minPrice = prices[i];
            }

            // current profit
            int currentprofit = prices[i]-minPrice;

            // maximum profit
            if(currentprofit>maxProfit){
                maxProfit=currentprofit;
            }

        }

        return maxProfit;
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i]!=0) {

                swap(nums[i], nums[j]);

                j++;
            }
        }
    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int j = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i]!= val) {

                nums[j] = nums[i];
                j++;
            }
        }

        return j;
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int j = 0;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[j]!=nums[i]) {

                j++;
                nums[j] = nums[i];

            }
        }

        return j + 1;
    }
};