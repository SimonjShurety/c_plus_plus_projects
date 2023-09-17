#include <iostream>
using namespace std;

int const TOTALNUMBEROFELEMENTS = 5;

void Print1dArray(int arr[TOTALNUMBEROFELEMENTS])
{
    for (int i = 0; i < TOTALNUMBEROFELEMENTS; i++)
    {

        cout << "\t" << arr[i];

        cout << endl;
    }
}

main()
{

    int arr[TOTALNUMBEROFELEMENTS] = {9, 4, 5, 8, 99};

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "Printing a 1D Array:\n";
    Print1dArray(arr);

    for (int i = TOTALNUMBEROFELEMENTS - 1; i >= 0; i--)
    {
        if (i != 0)
        {
            cout << i << ", ";
        }
        else
        {
            cout << i;
        }
    }
    cout << endl;
}