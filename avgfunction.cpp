#include <iostream>
using namespace std;

int specialPlus(int x, int y)
{
    return x + y + 1;
}

/*

op = specialPlus
u = -1



x op u = x = u op x

specialPlus (x, -1) = x = specialPlus (-1, x)

x = 4

specialPlus (4, -1) = 4 = specialPlus (-1, 4)

4 = 4 = 4

*/

int const TOTALNUMBEROFELEMENTS = 5;

int SumOfArray(int arr[])
{
    int accumalator = 0;

    for (int i = 0; i < TOTALNUMBEROFELEMENTS; i++)
    {
        accumalator = accumalator + arr[i];
    }

    return accumalator;
}

float AverageOfArray(int arr[])
{
    return SumOfArray(arr) / (float)TOTALNUMBEROFELEMENTS;
}

int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int arr[TOTALNUMBEROFELEMENTS] = {5, 4, 5, 5, 5};
    int sum = SumOfArray(arr);

    float average = AverageOfArray(arr);

    cout << "The sum of an array : " << sum << endl;
    cout << "The average of an array : " << average;
}