#include <iostream>
using namespace std;

int main()
{
    // Ulta
    int n;
    cin >> n;
    for (int row = 1 ; row <= n ; row++)
    {
        for (int col = 1 ; col <= n - row ; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    //Seedha
    /*
    int n;
    cin >> n;
    for (int row = 0 ; row <= n ; row++)
    {
        for (int col = 1 ; col <= row ; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    */
    return 0;
}