#include <iostream>
#include <limits.h>
using namespace std;

int findMinimumInArray(int arr[] , int size)
{
    int minAns = __INT_MAX__;
    for (int i = 0 ; i < size ; i++)
    {
        if (arr[i] < minAns)
        {
            minAns = arr[i];
        }
    }
    return minAns;
}


int main()
{

    int arr[] = {10 , 20 , 30 , 50 , 7 , 1 , 9 , 900};
    int size = 8;

    int ans = findMinimumInArray(arr , size);
    cout << "Minimum number in an array is : " << ans << endl;



    // cout << INT_MIN << endl;
    // cout << INT_MAX << endl;
    return 0;
}