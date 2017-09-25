

#include <iostream>

using namespace std;

int main() {
    // compute sums

    // shorts for the input and output
    short n, sum;

    // loop for multiple summations
    char yesno = 'n';
    do {

        sum = 0;
        cout << "Enter a positive number \"n\" to recieve the sum from 1 to n: ";
        cin >> n;

        for (short i = 1; i <= n; i++) {
            sum += i;
        }

        cout << "The sum is " << sum << endl;

        cout << endl << "Would you like to compute another sum? (y/n) ";
        cin >> yesno;
        cout << endl;
    } while (yesno == 'y' || yesno == 'Y');

//////////////////////////////////////////////////////////
    // the above code experiences an overflow error when 256 is given as an input when numeric input is stored in shorts

    return 0;
}
