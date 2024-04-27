#include <iostream>
using namespace std;

// void solve(int arr[] , int size)
// {
//     for (int i = 0 ; i < size ; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

bool linearSearch(int arr[] , int size , int target)
{
    for (int i = 0 ; i < size ; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    bool ans = linearSearch(arr,n,target);

    if (ans == 1)
    {
        cout << "Target found";
    }
    else
    {
        cout << "Target not found";
    }


    // int arr[5] = {2 , 4 , 6 , 8 , 10};
    // int n = 5;
    // int target = 11;
    // bool flag = 0;
    // for (int i = 0 ; i < n ; i++)
    // {
    //     if (arr[i] == target)
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag == 1)
    // {
    //     cout << "Target Found Yeah!!!";
    // }
    // else
    // {
    //     cout << "Target not Found ";
    // }
    




    /*
    int n;
    cin >> n;
    int arr[n];
    int target;
    cin >> target;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0 ; i < n ; i++)
    {
        if (arr[i] == target)
        {
            cout << "Target found at index : " << i << endl;
            return 0;
        }
    }
    cout << "Target not found!!!" << endl;
    */
    return 0;
}