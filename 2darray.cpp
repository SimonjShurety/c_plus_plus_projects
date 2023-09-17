#include <iostream>
using namespace std;

int const COLUMN = 4;
int const ROW = 2;

main()
{
    int arr[COLUMN][2] = {
        {10, 11},
        {20, 21},
        {30, 31},
        {40, 41}};

    int i, j;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "Printing a 2D Array:\n";
    for (i = 0; i < COLUMN; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
}