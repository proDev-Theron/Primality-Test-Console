#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

main()
{
start:
    long long int input = 0;
    cout << "Enter an INT to test primality: ";
    cin >> input;

    for(int i = sqrt(input); i > 0; --i)
    {
        if (i == 1 && input != 2)
        {
            cout << input << " is Prime\n";
            break;
        }
        else if (input % i == 0 && input !=2)
        {
            cout << input << " is not Prime\n";
            break;
        }
        else if (input == 2)
        {
            cout << "2 is neither Prime nor Composite. \n\n";
            break;
        }
    }
    cout << "\nDo you want to close the program? (Strictly \"Y/N\") ";
    char decision;
    cin >> decision;

    if (decision != 'Y')
    {
        system("cls");
        goto start;
    }
    else
    {
        cout << "\n\nThank you for using my program.\nFollow me on Github. - prodev-Theron / Theron Adrianne A. Bueno\n\n";
        system("pause");
    }


    return 0;
}
