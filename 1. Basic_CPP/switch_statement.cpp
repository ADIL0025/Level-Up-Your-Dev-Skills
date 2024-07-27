#include <iostream>
using namespace std;

int main() {

    int day;
    cout << "Enter the number of day: " << endl;
    cin >> day;

    switch(day){ // if we take day as an integer then we have to take case as an integer as well and else also

        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day";
    }


    return 0;
}