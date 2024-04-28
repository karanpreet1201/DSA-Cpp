#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[][3] , int row , int col)
{
    // For Row Wise print.....
    for (int i = 0 ; i < row ; i++)
    {
        for (int j = 0 ; j < col ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }




    // For column Wise print .....
    /*
    for (int i = 0 ; i < col ; i++)
    {
        for (int j = 0 ; j < row ; j++)
        {
            cout << arr[j][i] << "    ";
        }
        cout << endl;
    }
    */
}

bool findTarget(int arr[][4] , int row , int col , int target)
{
    for (int i = 0 ; i < row ; i++)
    {
        for (int j = 0 ; j < col ; j++)
        {
            if (target == arr[i][j])
            return 1;
        }
    }
    return 0;
}



int findMax(int arr[][4] , int row , int col)
{
    int maxAns = INT_MIN;
    
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0 ; j < col ; j++)
        {
            if (arr[i][j] > maxAns)
            {
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}


void arraySum(int arr[][4] , int row , int col)
{
    
}

int main()
{
    // Create 2 d array 
    // int arr[3][3];


    // Initialse
    // int arr[3][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};

    
    // int brr[][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};

    // int crr[][] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};


    int arr[3][4] = {
                        {1,2,3,4} , 
                        {5,6,7,8} , 
                        {9,10,11,12}
                    };
    // int target = 11;
    int row = 3;
    int col = 4;

    arraySum(arr , row , col);

    cout << "Maximum number in this array is : " << findMax(arr , row , col) << endl;
    // int tf = findTarget(arr , row , col , target);
    // if (tf == 1)
    // {
    //     cout << true;
    // }
    // else
    // {
    //     cout << false;
    // }

    // // Printing 2-D Array

    // int row = 3;
    // int col = 4;
    // printArray(arr , row , col);



    // Taking Input

    // int arr[3][3];
    
    // int row = 3;
    // int col = 3;

    // for (int i = 0 ; i < row ; i++)
    // {
    //     for (int j = 0 ; j < col ; j++)
    //     {
    //         cout << "Enter the input for row index : " << i << " column index : " << j << endl;
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << endl;
    // printArray(arr , row , col);

    return 0;
}