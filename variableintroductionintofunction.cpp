#include <iostream>
#include <string>
using namespace std;

void PrintBool(bool myBool)
{
    cout << "myBool: " << myBool << endl;
}

void PrintNewline()
{
    cout << endl;
}

int AssignMyVar()
{
    return 2;
}

int SubtractTen(bool myBool, int myVar)
{
    if (myBool)
    {
        myVar -= 10;
    }
    return myVar;
}

/*
1 - Create new void function
2 - Copy code into new function
3 - Call new function in place of copied code
4 - Insert argument declarations of used variables into new function
5 - look which variables are used after the function
    AND
    are changed in the function (if this is more than one ... call sijmen.)
6 - Return this(see 5) variable if any. (and change the return type of the function accordingly)
7 - Change the call to the new function to now also update the value of this(see 5) variable.
e.g.   SubtractTen(myBool, myVar); becomes:   myVar = SubtractTen(myBool, myVar); (where myvar was found in point 5)
*/

int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    int myVar;             // declare variable named "my var"
    myVar = AssignMyVar(); // assign the value 2

    int mySecondVar = 10;

    // myVar = myVar + 1;
    // myVar += 1;
    myVar++;

    // myVar = myVar * 2;
    myVar *= 2;

    bool myBool = false;

    myBool = myVar == 22;

    myVar = SubtractTen(myBool, myVar);

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
    PrintNewline();
    /*
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    */

    cout << "myVar: " << myVar << endl;
    PrintBool(myBool);

    return 0;
}