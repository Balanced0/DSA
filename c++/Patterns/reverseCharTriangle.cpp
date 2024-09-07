#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "n = ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        char c = 'A' + i - 1;
        for(int j = i; j > 0;j--){
            cout << c << " ";
            c--;
        }
        cout << endl;
    }
    return 0;
}