#include <iostream>
#include <string>
using namespace std;

void greeting()
{
    cout << "hello world!" << endl;
}

int addPlusTwo(int x, int y)
{
    return x + y + 2;
}

/*
[return type] [function name]( [input parameter 1 type] [input parameter 1 name], [input parameter 2 type] [input parameter 2 name] , ...){
    [some code...]
    return [some expression with same type as return type];
}

*/
int just4()
{
    return 4;
}

int addSeven(int x)
{
    return x + 7;
}

int absoluteValue(int x)
{
    int result = x;
    if (x < 0)
    {
        result = x * -1;
    }

    return result;
}

string stringRepeat(string input, int numberOfRepeats)
{
    string accumulator = "";

    for (int i = 0; i < numberOfRepeats; i++)
    {
        accumulator += input;
    }

    return accumulator;
}

int weirdFunc(int x, bool b)
{
    if (b)
    {
        if (x % 2 == 0)
        {
            x = 20;
        }
    }
    else
    {
        while (x < 100)
        {
            x += 34;
        }
    }
    return x;
}

// function named weirdFunc that takes an int x and a bool b where if the bool is true and x is even it makes x 20 and if the bool is false it will add 34 until x is higher than 100. return x

int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    greeting();

    string name;
    getline(cin, name);

    string greeting = "Good Day ";

    cout << addPlusTwo(10, 5) << endl;
    cout << addPlusTwo(17, 6) << endl;
    cout << just4() << endl;
    cout << addSeven(10) << endl; // should give 17
    cout << absoluteValue(-10) << endl;
    cout << absoluteValue(7) << endl;
    cout << stringRepeat(name, 10) << endl;
    cout << weirdFunc(10, true) << endl;

    return 0;
}
