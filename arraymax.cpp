#include <iostream>
using namespace std;

// iterate through an array to find the highest value
// Save the first value and check IF the following value is larger than previous value, if so save it, if not continue iterating.

int const TOTALNUMBEROFELEMENTS = 5;

int MaxOfArray(int arr[])
{
    int maxCheck = 0;

    for (int i = 0; i < TOTALNUMBEROFELEMENTS; i++)
    {
        if (maxCheck < arr[i])
        {
            maxCheck = arr[i];
        }
    }

    return maxCheck;
}

int MaxOfArray2(int arr[])
{
    int maxCheck = 0;

    for (int i = 0; i < TOTALNUMBEROFELEMENTS; i++)
    {
        int val = arr[i];
        if (maxCheck < val)
        {
            maxCheck = val;
        }
    }

    return maxCheck;
}

int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int arr[TOTALNUMBEROFELEMENTS] = {9, 4, 5, 8, 99};
    int max = MaxOfArray(arr);

    cout << "The max of an array : " << max << endl;
}