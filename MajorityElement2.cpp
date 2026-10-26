#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
    vector<int> ls;
    unordered_map<int,int> mp;
    int n = v.size();
    int mini = (int)(n/3) +1;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
        if(mp[v[i]] == mini){
            ls.push_back(v[i]);
        }
        if(ls.size() == 2) break;
    }
    //O(2log2(2)) = O(1)
    sort(ls.begin(),ls.end());
    return ls;

}
// optimal solution of majority element 2 is using moore voting algorithm
vector<int> majorityElement2(vector<int> v) {
int cnt1 =0, cnt2 =0;
int el1 = INT_MIN, el2 = INT_MIN;
for(int i=0;i<v.size();i++){
    if(cnt1==0 && el2 != v[i]){
        cnt1 =1;
        el1 = v[i];
    }
    else if(cnt2 == 0 && el2 != v[i]){
        cnt2 =1;
        el2 = v[i];
    }
    else if(v[i] == el1) cnt1++;
    else if(v[i] == el2) cnt2++;
    else{
        cnt1--;
        cnt2--;
    }
}
vector<int> ls;
int cnt1 =0, cnt2=0;
for(int i=0;i<v.size();i++){
    if(v[i] == el1) cnt1++;
    else if(v[i] == el2) cnt2++;
}
int mini = (int) (v.size()/3) + 1;
if(cnt1 >= mini) ls.push_back(el1);
if(cnt2 >= mini) ls.push_back(el2);
sort(ls.begin(),ls.end());
return ls;
}