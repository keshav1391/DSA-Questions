// MISSING NUMBER
int missingNumber(vector<int> &a,int n){
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++){
        xor2 = xor2^a[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1^ n;
    return xor1 ^ xor2;
} 
//Find the number that appears once, and other numbers twice.
#include<iostream>
using namespace std;
int getSingleElement(vector<int> &arr){
    int arr= 0;
    for(int i=0;i<arr.size();i++){
        xorr = xorr^arr[i];
    }
    return xorr;
}