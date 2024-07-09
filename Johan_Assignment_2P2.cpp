/*
A switch statement in C++ is a control statement that checks
a variable's value against a list of values. Each value is referred
to as a case, and the variable being used is evaluated for each case.
The switch statement is a more concise and understandable technique to
compare a variable to several values than a series of if-else statements.
This is an example of a switch statement in C++.
*/
#include <iostream>
using namespace std;
int main()
{
int score = 92;
switch(score / 10) {
        case 10:
        case 9:
            cout << "Grade: A" << endl;
            break;
        case 8:
            cout << "Grade: B" << endl;
            break;
        case 7:
            cout << "Grade: C" << endl;
            break;
        case 6:
            cout << "Grade: D" << endl;
            break;
        default:
            cout << "Grade: F" << endl;
            break;
    }
}
/* Output:
Grade: A
*/