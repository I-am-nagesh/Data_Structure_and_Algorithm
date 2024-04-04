#include <iostream>
#include <cmath>

using namespace std;

// Define the function whose root is to be found
double function(double x) {
    // Example function: f(x) = x^3 - 2x - 5
    return pow(x, 3) - 2 * x - 5;
}

// Bisection method to find the root
double bisection(double a, double b, double tol) {
    if (function(a) * function(b) >= 0) {
        cout << "Bisection method fails." << endl;
        return 0.0;
    }

    double c = a;
    while ((b - a) >= tol) {
        // Find the midpoint
        c = (a + b) / 2;

        // Check if midpoint is root
        if (function(c) == 0.0) {
            break;
        }
        // Decide the side to repeat the steps
        else if (function(c) * function(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return c;
}

int main() {
    double a, b, tol;

    // Define the interval [a, b]
    cout << "Enter the interval [a, b]: ";
    cin >> a >> b;

    // Define the tolerance
    cout << "Enter the tolerance: ";
    cin >> tol;

    double root = bisection(a, b, tol);

    if (root != 0.0) {
        cout << "Root is approximately: " << root << endl;
    }

    return 0;
}
