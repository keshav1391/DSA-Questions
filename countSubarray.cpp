//brute solution of number of sub array with sum k
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0;i < n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k = i;k<j;k++){
                sum+=arr[k];
            }
            if(sum == k){
                count++;
            }
        }
    }
    return 0;

}
// beter solution of number of sub array with sum k 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0;i < n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            }
            if(sum == k){
                count++;
            }
        }
    return 0;
}

// optimal solution of number of sub array with sum k
int findAllSubarraywithGivenSum(vector<int> & arr, int k ){
    unordered_map<int,int> mpp;
    mpp[0] = 1;
    int presum =0, cnt =0;
    for(int i=0; i< arr.size();i++){
        presum += arr[i];
        int remove = presum - k;
        cnt += mpp[remove];
        mpp[presum] += 1;
    }
    return cnt;
}
