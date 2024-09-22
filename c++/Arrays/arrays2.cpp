#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {4, 2, 7, 8, 1, 2, 5};
    int a = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int b = size - 1;
    while (a < b)
    {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}