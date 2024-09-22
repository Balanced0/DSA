#include<iostream>
using namespace std;
int main(){
    int arr[6] = {5, 15, 22, 1, -15, 24};
    int min = 0;
    int max = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << "max is " << max << endl;
    cout << "min is " << min << endl;
    return 0;
}