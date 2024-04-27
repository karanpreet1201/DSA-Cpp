#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    int NumberOfZeroes = 0;
    int NumberOfOnes = 0;
    for (int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0 ; i < size ; i++)
    {
        if (arr[i] == 0)
        {
            NumberOfZeroes++;
        }
        else if (arr[i] == 1)
        {
            NumberOfOnes++;
        }
        else
        {
            continue;
        }
    }

    cout << "Number of Occurance of one is : " << NumberOfOnes << endl;
    cout << "Number of Occurance of zeroes is : " << NumberOfZeroes << endl;
    
    return 0;
}