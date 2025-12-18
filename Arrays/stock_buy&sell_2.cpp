#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& arr){
    int n = arr.size();
    int profit = 0;
    for(int i = 0; i < n-1; i++){
        if(arr[i] < arr[i+1]){
            profit = profit+arr[i+1]-arr[i];
        }
    }
    return profit;
}

int main(){
    vector<int> arr = {100,180,260,310,40,535,695};
    cout << maxProfit(arr);
    return 0;
}
