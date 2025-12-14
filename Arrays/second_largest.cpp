#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int>& arr){
    int n = arr.size();
    int largest = -1, secondLargest = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    vector<int> arr = {1,2,19,8,15,7};
    cout << secondLargest(arr);
    return 0;
}
