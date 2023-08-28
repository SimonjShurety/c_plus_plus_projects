#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    // initialise array
    int arr[] = {2, 4, 6, 8};
    int size = 4;

    // initialise sum to zero
    int sum = 0;

    // use function
    sum = accumulate(arr, arr + size, sum);

    cout << "The sum of the elements in the array: " << sum;
}