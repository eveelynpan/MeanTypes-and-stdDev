/* Author: Evelyn Pan
 Assignment Title: Arithmetic, Geometric, Harmonic Mean, stdDev
 Assignment Description: Program that produces 3 types of fnx
 Due Date: 02/02/22
 Date Created: 01/31/22
 Date Last Modified: 02/02/22
 */
 
/*
 * Data Abstraction:
 *     Output file stream is opened
 *     5 variables: n1, n2, n3, n4, n5 are initialized for use
 *     with their counterparts in the formula.
 * Input:
 *     The program reads input in the format of 'A, B, C, D, E'
 *     from the user and assigns the integers
 *     to their respective variables.
 * Process:
 *     The discriminant is calculated, to check if
 *     roots will be real.
 *     If the discriminant is negative, "NO REAL
 *     ROOTS" will be printed to screen.
 *     The roots are calculated if they exist.
 * Output:
 *     The roots are printed both to the screen and
 *     to the file 'program3.txt'
 *     If the roots are identical, only one is
 *     printed.
 * Assumptions:
 *     It is assumed that the user only wants:
 *     to solve one formula at a time,
 *     real solutions to the formula.
 *     It is assumed that, having been prompted to do so,
 *     the user will correctly input data.
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    
    //Data Abstraction
    int n1, n2, n3, n4, n5, tmp;
    double aMean, gMean, hMean, stdDev;
    
    
    //Input
    cout << "Enter five numbers: " << endl;
    
    //Input
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    
    //Echo print
    cout << n1 << endl << n2 << endl << n3 << endl << n4
    << endl << n5 << endl << endl;
    
    //Process

    
    //arithMean
    aMean = (n1 + n2 + n3 + n4 + n5) / 5.0;
    
    //geoMean
    double product1 = n1;
    double product2 = product1 * n2;
    double product3 = product2 * n3;
    double product4 = product3 * n4;
    double product5 = product4 * n5;
    
    gMean = pow(product5, (1.0/5.0));
    
    //harmMean
    hMean = 5.0 / ((1.0/n1) + (1.0/n2) + (1.0/n3)
                + (1.0/n4) + (1.0/n5));
    
    //stdDev
    stdDev = sqrt((pow((n1 - aMean), 2.0) + pow((n2 - aMean), 2.0)
            + pow((n3 - aMean), 2.0) + pow((n4 - aMean), 2.0)
            + pow((n5 - aMean), 2.0))/5.0);
    
    

    //Sort
    if (n1 < n2) {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    
    if (n1 < n3) {
        tmp = n1;
        n1 = n3;
        n3 = tmp;
    }

    if (n1 < n4) {
        tmp = n1;
        n1 = n4;
        n4 = tmp;
    }
    
    if (n1 < n5) {
        tmp = n1;
        n1 = n5;
        n5 = tmp;
    }
    
    if (n2 < n3) {
        tmp = n2;
        n2 = n3;
        n3 = tmp;
    }
    
    if (n2 < n4) {
        tmp = n2;
        n2 = n4;
        n4 = tmp;
    }
    
    if (n2 < n5) {
        tmp = n2;
        n2 = n5;
        n5 = tmp;
    }
    
    if (n3 < n4) {
        tmp = n3;
        n3 = n4;
        n4 = tmp;
    }
    
    if (n3 < n5) {
        tmp = n3;
        n3 = n5;
        n5 = tmp;
    }
    
    if (n4 < n5) {
        tmp = n4;
        n4 = n5;
        n5 = tmp;
    }
    
    //Output
    
    cout << setprecision(2) << fixed;
    cout << endl;
    cout << endl;
    cout << "Result: " << endl << endl;
    
    cout << "Data: " << endl;
    
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << n5 << endl;
    cout << endl;
    
    cout << "Arithmetic Mean    = " << aMean << endl;
    cout << "Geometric Mean     = " << gMean << endl;
    cout << "Harmonic Mean      = " << hMean << endl;
    cout << "Standard Deviation = " << stdDev << endl;
    
    
    return 0;
}
