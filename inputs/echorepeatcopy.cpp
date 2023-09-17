#include <iostream>
#include <string>
using namespace std;

bool yesOrNoQuestion()
{
    string input;

    while (true)
    {
        // get the input
        cout << "Enter Y or N" << endl;
        getline(cin, input);

        if (input == "N")
        {

            return false;
        }
        else if (input == "Y")
        {

            return true;
        }
    }
}

int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    bool retry = true;


    while (retry)

    {

        cout << "Please enter a string" << endl;
        string input;
        getline(cin, input);

        cout << input << endl;
        cout << "Would you like to stop?" << endl;
        retry = !yesOrNoQuestion();
    }
    cout << "Done!" << endl;

    return 0;
}

// after echo ask if you want to continue Y/N