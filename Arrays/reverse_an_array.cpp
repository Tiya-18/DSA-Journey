#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        swap(arr[i],arr[n-1]);
        n--;
    }
}

int main(){
    vector<int> arr = {14,76,55,92,30};
    reverseArray(arr);
    for(int num:arr){
        cout << num << " ";
    }
    return 0;
}
