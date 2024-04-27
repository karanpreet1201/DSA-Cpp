#include <iostream>
using namespace std;

int main()
{
    // int arr[10];
    // // cout << "Array created successfully" << endl;

    // int a = 5;
    // cout << "Size of a : " << sizeof(a) << endl;
    // cout << "Size of arr : " << sizeof(arr) << endl;
    // cout << "Address of a is : " << &a << endl;
    // cout << "Base Address of arr is : " << &arr << endl;
    // cout << "Base Address of arr is : " << arr << endl;

    // int arr[5] = {1 , 2 , 3 , 4 , 5};
    // int n = 5;
    // for (int i = 0 ; i < n ; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int arr[5];
    // int n = 5;
    // for (int i = 0 ; i < n ; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0 ; i < n ; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int arr[10];
    int n = 10;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0 ; i < n ; i++)
    {
        cout << 2 * arr[i] << " ";
    }
    return 0;
}