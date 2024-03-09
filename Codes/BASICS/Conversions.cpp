#include <bits/stdc++.h>
using namespace std;

// int decimalToBinaryMethod1(int n)
// {
//     // Divison Method
//     int binaryno = 0;
//     int i = 0;
//     while(n > 0)
//     {
//         int bit = n % 2;
//         // cout << bit << endl;
//         binaryno = bit * pow(10 , i++) + binaryno;
//         n = n / 2;
//     }
//     return binaryno;
// }

// int decimalToBinaryMethod2(int n)
// {
//     // Divison Method
//     int binaryno = 0;
//     int i = 0;
//     while(n > 0)
//     {
//         int bit = (n & 1);
//         // cout << bit << endl;
//         binaryno = bit * pow(10 , i++) + binaryno;
//         n = n >> 1;
//     }
//     return binaryno;
// }

int binaryTodecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while(n)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2,i++);
        n = n / 10;
    }
    return decimal;
}


int main()
{
    // int n;
    // cin >> n;
    // int binary = decimalToBinaryMethod2(n);
    // cout << binary << endl;

    int binaryno;
    cin >> binaryno;
    cout << binaryTodecimal(binaryno);
    return 0;
}