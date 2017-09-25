

#include <iostream>

using namespace std;


// float factorial(long n);


int main() {
    // compute sums

    // shorts for the input and output
    long n, sum;

    // loop for multiple summations
    char yesno = 'n';
    do {

        sum = 0;
        cout << "Enter a positive number \"n\" to recieve the sum from 1 to n: ";
        cin >> n;

        for (long i = 1; i <= n; i++) {
            sum += i;
        }

        cout << "The sum is " << sum << endl;

        cout << endl << "Would you like to compute another sum? (y/n) ";
        cin >> yesno;
        cout << endl;
    } while (yesno == 'y' || yesno == 'Y');

//////////////////////////////////////////////////////////
    // (Parts 1 & 2) the above code experiences an overflow error when 256 is given as an input when numbers are stored in shorts
    // (Part 3) the above code experiences an overflow error when 65537 is given as an input when the numbers are stored in longs

    return 0;
}


// float factorial(long n) {
//     float product = 1;
//     for (long i = 1; i <= n; i++) {
//         product *= i;
//     }
//
//     return product;
// }
