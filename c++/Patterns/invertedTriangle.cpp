#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int num = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            cout << "  ";
        }
        for(int j = 1; j<= n-i; j++){
            cout << num << " ";
        }
        num++;
        cout << endl;
    }
    return 0;
}