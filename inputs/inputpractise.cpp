#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout << "Do you like marmite?" << endl;

    string input;
    bool retry = true;
    while (retry)
    {
        retry = false;
        getline(cin, input);

        if (input == "yes")
        {
            cout << "You weirdo" << endl;
        }
        else if (input == "no")
        {
            cout << "You are a normal person" << endl;
        }
        else
        {
            cout << "Please enter Yes or No" << endl;
            retry = true;
        }
    }

    cout << "Done!" << endl;
    return 0;
}
