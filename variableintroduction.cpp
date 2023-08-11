#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int myVar; // declare variable named "my var"
    myVar = 2; // assign the value 9

    int mySecondVar = 10;

    // myVar = myVar + 1;
    // myVar += 1;
    myVar++;

    // myVar = myVar * 2;
    myVar *= 2;

    bool myBool = false;

    myBool = myVar == 22;

    if (myBool)
    {
        myVar -= 10;
    }

    if (myVar < 10)
    {
        myVar += 5;
    }

    int numberOfRepeats = 10;

    for (int i = numberOfRepeats - 1; i >= 0; i--)
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
    /*
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    */

    cout << "myVar: " << myVar << endl;
    cout << "myBool: " << myBool << endl;

    return 0;
}