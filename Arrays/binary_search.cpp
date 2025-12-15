#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int target) {
    for(int i = 0; i < arr.size(); i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {14,40,15,64,89};
    int target = 15;
    int result = search(arr,target);
    cout << result;
    return 0;
}
