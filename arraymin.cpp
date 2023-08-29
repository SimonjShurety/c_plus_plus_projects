#include <iostream>
using namespace std;

// iterate through an array to find the smallest value
// Save the first value and check IF the following value is smaller than previous value, if so save it, if not continue iterating.

int const TOTALNUMBEROFELEMENTS = 5;

int MinOfArray(int arr[])
{
    int minCheck = 99;

    for (int i = 0; i < TOTALNUMBEROFELEMENTS; i++)
    {
        if (minCheck > arr[i])
        {
            minCheck = arr[i];
        }
    }

    return minCheck;
}

int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int arr[TOTALNUMBEROFELEMENTS] = {9, 4, 5, 8, 99};
    int min = MinOfArray(arr);

    cout << "The min of an array : " << min << endl;
}