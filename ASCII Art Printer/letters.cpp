
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // set the variables for letter and size.
    char  letter;
    int size;

    // displays a welcome message to the user and prompts them to enter a size.
    cout << "Welcome to the letter printer" << endl;
    cout << "Enter the size:" << endl;
    cin >> size;

    // A while loop that checks if the inputed size is not odd, greater than or equal to
    // 5, or less than or equal to 15. If the inputed size is true within the while loop
    // it will loop an invalid message and prompt the user to input a valid size.
while ( (size % 2) == 0 || size < 5 || size > 15 )
{
    cout << "Invalid size." << endl;
    cout << "Enter the size again" << endl;
    cin >> size;
}

// prompts the user to input the letter of choice
cout << "Enter the letter:" << endl;
    cin >> letter;

    // switch statment to only accept either an input of Z or N from the user.
    switch (letter)
    {
        case 'n':
        case 'N':
            break;
        case 'z':
        case 'Z':
            break;
        default:
            letter = false;
    }

    // while loop that prints an invalid letter message if the switch statment outputs
    // the default, and prompts the user to input a valid letter.
    while ( letter == false)
    {
        cout << "Invalid letter:" << endl;
        cout << "Enter the letter again:" << endl;
        cin >> letter;

        switch (letter)
        {
            case 'n':
            case 'N':
                break;
            case 'z':
            case 'Z':
                break;
            default:
                letter = false;
        }
    }

// if statment that prints out an N in ASCII depending on the size.
    if (letter == 'n' || letter == 'N')
    {
        // Top of the N as it was always result in 1 star on the first line and the last.
        cout << "*" << setw(size) << "*" << endl;
        // for loop that builds the N depending on the size
        for ( int star = 1; star < size; star++ )
        {
            cout << "*" << setw(star) << "*" << setw (size - star) << "*" << endl;
        }
        // Bottom of the N as it was always result in 1 star on the first line and the last.
        cout << "*" << setw(size) << "*" << endl;
    }
    // else statemnet that prints out a Z in ASCII depending on the size.
else
    {
    // for loop that builds the top line of the Z depending on it's size
        for (int star = 0; star <size; star++)
        {cout << "*" ;}
        cout << endl;
    // for loop that builds the body of the Z depending on it's size.
        for (int star = size - 1; star > 1; star--)
    {
        cout << setw(star) << "*" << endl;
    }
        // for loop that builds the bottom line of the Z depending on it's size.
        for (int star = 0; star <size; star++)
        {cout << "*" ;}
        cout << endl;

    }

// creates a variable for the user to continue. Prompts user to either continue or not.
string con;
cout << "Would you like to continue? (Y or N):" << endl;
cin >> con;

// while loop that executes if the user decides to continue with the input of Y, and then
// runs the same exact code as above.
while (con == "Y" || con == "y")
{
    cout << "Enter the size:" << endl;
    cin >> size;

    while ( (size % 2) == 0 || size < 5 || size > 15 )
    {
        cout << "Invalid size." << endl;
        cout << "Enter the size again" << endl;
        cin >> size;
    }

    cout << "Enter the letter:" << endl;
    cin >> letter;

    switch (letter)
    {
        case 'n':
        case 'N':
            break;
        case 'z':
        case 'Z':
            break;
        default:
            letter = false;
    }

    while ( letter == false)
    {
        cout << "Invalid letter:" << endl;
        cout << "Enter the letter again:" << endl;
        cin >> letter;

        switch (letter)
        {
            case 'n':
            case 'N':
                break;
            case 'z':
            case 'Z':
                break;
            default:
                letter = false;
        }
    }

    if (letter == 'n' || letter == 'N')
    {
        cout << "*" << setw(size) << "*" << endl;
        for ( int star = 1; star < size; star++ )
        {
            cout << "*" << setw(star) << "*" << setw (size - star) << "*" << endl;
        }
        cout << "*" << setw(size) << "*" << endl;
    }
    else
    {
        for (int star = 0; star <size; star++)
        {cout << "*" ;}
        cout << endl;

        for (int star = size - 1; star > 1; star--)
        {
            cout << setw(star) << "*" << endl;
        }
        for (int star = 0; star <size; star++)
        {cout << "*" ;}
        cout << endl;

    }

    cout << "Would you like to continue? (Y or N):" << endl;
    cin >> con;
}
    return 0;
}
