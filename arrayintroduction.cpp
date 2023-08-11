#include <iostream>
#include <string>
using namespace std;

const int LENGTH = 4;

int addPlusTwo(int x, int y)
{
    int result = x + y;
    result += 2;
    return result;
}

void changeDogToSquid(string animalArr[4])
{
    animalArr[1] = "squid";
}

void printArr(int myArr[LENGTH])
{
    for (int i = 0; i < LENGTH; i++)
    {
        cout << myArr[i] << ",";
    }
    cout << endl;
}

int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    bool iAmAPedanticAss = true;

    // cat dog parrot fish
    string animalArr[4] = {"cat", "dog", "parrot", "fish"};

    if (iAmAPedanticAss)
    {
        animalArr[3] = "goldfish";
    }

    changeDogToSquid(animalArr);

    cout << "my pet is a " << animalArr[1] << endl;

    int myArr[LENGTH];

    for (int i = 0; i < LENGTH; i++)
    {
        myArr[i] = i + 1;
    }

    printArr(myArr);
    // 1,2,3,4,
    return 0;
}

/*

function to get the sum of an array (hint use accumulator)

function for average

function that gives max value of the array

function that gives min value of array

make and use a 2d array

print function for 2d array

etc...

make sure to comment
*/