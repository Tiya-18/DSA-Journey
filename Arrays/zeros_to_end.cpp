#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& arr){
    int count = 0;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main(){
    vector<int> arr = {1,2,0,4,0,0,5,9};
    moveZerosToEnd(arr);
    for(int num:arr){
        cout << num << " ";
    }
    return 0;
}
