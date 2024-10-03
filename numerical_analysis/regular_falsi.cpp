#include <iostream>
#include <cmath>

using namespace std;

// Define the function whose root is to be found
double function(double x) {
    // Example function: f(x) = x^3 - 2x - 5
    return pow(x, 3) - 2 * x - 5;
}

// Regular Falsi (False Position) method to find the root
double regularFalsi(double a, double b, double tol, int maxIterations) {
    double c;
    for (int i = 0; i < maxIterations; ++i) {
        // Calculate the value of function at a and b
        double fa = function(a);
        double fb = function(b);
        
        // Check if root is found
        if (fabs(fa) * fabs(fb) < 1e-10) {
            return (fabs(fa) < 1e-10) ? a : b;
        }
        
        // Calculate c using false position formula
        c = (a * fb - b * fa) / (fb - fa);

        // Check for convergence
        if (fabs(c - b) < tol) {
            return c;
        }

        // Decide the side to continue
        if (function(c) * function(b) < 0) {
            a = c;
        } else {
            b = c;
        }
    }
    cout << "Regular Falsi method fails to converge." << endl;
    return 0.0;
}

int main() {
    double a, b, tol;
    int maxIterations;

    // Define the interval [a, b]
    cout << "Enter the interval [a, b]: ";
    cin >> a >> b;

    // Define the tolerance
    cout << "Enter the tolerance: ";
    cin >> tol;

    // Define the maximum number of iterations
    cout << "Enter the maximum number of iterations: ";
    cin >> maxIterations;

    double root = regularFalsi(a, b, tol, maxIterations);

    if (root != 0.0) {
        cout << "Root is approximately: " << root << endl;
    }

    return 0;
}
