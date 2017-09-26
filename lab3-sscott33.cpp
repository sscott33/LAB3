/////////////////////////////////////////////////
// this program was created by Samuel Scott    //
/////////////////////////////////////////////////
#include <iostream>

using namespace std;


double factorial(long n);


int main() {
    // compute sums

    // shorts for the input and output
    // long n, sum;

    // loop for multiple summations
    // char yesno = 'n';
    // do {
    //
    //     sum = 0;
    //     cout << "Enter a positive number \"n\" to recieve the sum from 1 to n: ";
    //     cin >> n;
    //
    //     for (long i = 1; i <= n; i++) {
    //         sum += i;
    //     }
    //
    //     cout << "The sum is " << sum << endl;
    //
    //     cout << endl << "Would you like to compute another sum? (y/n) ";
    //     cin >> yesno;
    //     cout << endl;
    // } while (yesno == 'y' || yesno == 'Y');

//////////////////////////////////////////////////////////
    // (Parts 1 & 2) the above code experiences an overflow error when 256 is given as an input when numbers are stored in shorts
    // (Part 3) the above code experiences an overflow error when 65537 is given as an input when the numbers are stored in longs
//////////////////////////////////////////////////////////
    // (Part 4) the following code recieves an overflow error when 35! is computed if floats are used
    // (Part 4) the error is noticible because "inf" is returned instead of a number
    // (Part 5) the overflow occurs at 171 and is noticeible because "inf" is returned instead of a number

    long n;//, product;
    char yesno = 'n';
    do {

        // product = 1;
        cout << "Enter a positive number \"n\" to recieve the factorial of n: ";
        cin >> n;

        cout << "The product is " << factorial(n) << endl;

        cout << endl << "Would you like to compute another factorial? (y/n) ";
        cin >> yesno;
        cout << endl;
    } while (yesno == 'y' || yesno == 'Y');

    return 0;
}


double factorial(long n) {
    double product = 1;
    for (long i = 1; i <= n; i++) {
        product *= i;
    }

    return product;
}
