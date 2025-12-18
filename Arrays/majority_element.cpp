#include<bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int>& arr) {
    int n = arr.size();
    long long ele1 = -2e14, ele2 = -2e14;
    int count1 = 0, count2 = 0;
    
    for(int ele : arr){
        if(ele1 == ele){
            count1++;
        }
        else if (ele2 == ele){
            count2++;
        }
        else if(count1 == 0){
            ele1 = ele;
            count1++;
        }
        else if (count2 == 0){
            ele2 = ele;
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    
    vector<int> res;
    count1 = 0;
    count2 = 0;
    
    for(int ele: arr){
        if(ele1 == ele) count1++;
        if(ele2 == ele) count2++;
    }
    if(count1>n/3) res.push_back(ele1);
    if(count2>n/3 && ele1!=ele2) res.push_back(ele2);
    
    sort(res.begin(),res.end());
    return res;
}

int main(){
    vector<int> arr = {2,2,3,1,3,2,1,1};
    vector<int> res = findMajority(arr);
    for(int ele:res){
        cout << ele << " ";
    }
    return 0;
}
