#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void printArray(int arr[][4] , int row , int col)
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
    for (int i = 0 ; i < row ; i++)
    {
        int sum = 0;
        for (int j = 0 ; j < col ; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum is : " << sum << endl;
    }
}


// Transpose of a matrix 

void transposeMatrix(int arr[][4] , int row , int col)
{
    for(int i = 0 ; i < row ; i++)
    {
        for (int j = i ; j < col ; j++)
        {
            swap(arr[i][j] , arr[j][i]);
        }
    }
}


int main()
{
    // Create 2 d array 
    // int arr[3][3];


    // Initialse
    // int arr[3][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};

    
    // int brr[][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};

    // int crr[][] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};


    // int arr[4][4] = {
    //                     {100,200,300,400} , 
    //                     {500,600,700,800} , 
    //                     {900,110,111,112} ,
    //                     {113,114,115,116}
    //                 };
    // // int target = 11;
    // int row = 4;
    // int col = 4;

    // cout << "Array before transpose : " << endl;
    // printArray(arr , row , col);



    // transposeMatrix(arr , row , col);


    // cout << "Array after transpose : " << endl;
    // // arraySum(arr , row , col);

    // cout << "Maximum number in this array is : " << findMax(arr , row , col) << endl;
    // printArray(arr , row , col);

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

    // 2-D ARRAY IN VECTOR ...

    vector< vector<int> > arr(5 , vector<int>(10,0));

    for (int i = 0 ; i < arr.size() ; i++)
    {
        for (int j = 0 ; j < arr[i].size() ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Jagged Array :- 
    /* The array whose all the row size are not same 
    
    */

   cout << "Jagged array is : " << endl;
   vector <vector <int> > brr;

   vector<int> vec1(10,1);
   vector<int> vec2(7,2);
   vector<int> vec3(2,3);
   vector<int> vec4(9,4);
   vector<int> vec5(4,5);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

   for (int i = 0 ; i < brr.size() ; i++)
    {
        for (int j = 0 ; j < brr[i].size() ; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}