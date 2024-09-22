#include<iostream>
using namespace std;
int main(){
    int arr[7] = {4, 2, 7 , 8, 1, 2, 5};
    int target = 8;
    bool flag = false;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(target == arr[i]){
            flag = true;
            cout << target << " found at index " << i << endl;
        }
    }
    return 0;
}