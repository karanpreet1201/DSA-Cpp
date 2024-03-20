#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Ulta pyramid
    
    for (int row = 0 ; row < n ; row++)
    {
        for (int col = 0 ; col < n - row ; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }




    
/*
    // Seedha 
    int Rows;
    cout << "Enter Rows : ";
    cin >> Rows;
    for (int row = 0 ; row < Rows ; row++)
    {
        for (int col = 0 ; col <= row ; col++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
*/
    return 0;
}