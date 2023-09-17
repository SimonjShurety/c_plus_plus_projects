#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    bool retry = true;
    while (retry)

    {

        cout << "Please enter a string" << endl;
        cout << "\n";
        string input;
        cout << "\n";
        getline(cin, input);

        cout << "\n";
        cout << input << endl;

        bool YorNinput = true;
        while (YorNinput)
        {
            YorNinput = false; // assume we only have to loop once.

            // get the input
            cout << "\n";
            cout << "Enter 'N' to stop or 'Y' to continue" << endl;
            cout << "\n";
            getline(cin, input);

            // see if the input is valid
            if (input == "N") // if the input is "N"
            {
                // stop looping.
                retry = false;
            }
            else if (input == "Y")
            {
                // do nothing
            }
            else // if the input is not "N" or "Y"
            {    // ask for "N" or "Y" again. so we loop using YorNinput

                YorNinput = true;
                cout << "Please enter either N or Y" << endl;
                cout << "\n";
            }
        }
    }

    cout << "Done!" << endl;

    return 0;
}

// after echo ask if you want to continue Y/N