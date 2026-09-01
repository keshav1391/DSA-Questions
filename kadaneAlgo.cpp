//Brute force of finding Maximum Subarray Sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maximum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum =0;
            for(int k=i;k<j;k++){
                sum +=arr[k];
                maximum = max(maximum,sum);
            }

        }
    }
    cout << maximum;
    return 0;
}
//Better  soltution of finding Maximum Subarray sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maximum = INT_MIN;
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            maximum = max(maximum,sum);
        }
    }
    cout << maximum;
    return 0;
}
// Optimal solution of finding Maximum Subarray sum
#include<bits/stdc++.h>
long long MaxSubarraySum(int arr[],int n){
    long long sum =0;
long long maximum = INT_MIN;
    for(int i=0;i<n;i++){
        sum +=arr[i];
        if(sum>maximum){
            maximum = sum;
        }
        if(sum < 0){
            sum =0;
        }
    }
    return maximum;
}