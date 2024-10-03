#include <iostream>
#include <cmath>

using namespace std;

// Define the function whose root is to be found
double function(double x) {
    // Example function: f(x) = x^3 - 2x - 5
    return pow(x, 3) - 2 * x - 5;
}

// Define the iterative method
double iterativeMethod(double initialGuess, double tol, int maxIterations) {
    double x = initialGuess;
    for (int i = 0; i < maxIterations; ++i) {
        double next_x = function(x);

        // Check for convergence
        if (fabs(next_x - x) < tol) {
            return next_x;
        }

        x = next_x;
    }
    cout << "Iterative method failed to converge." << endl;
    return 0.0;
}

int main() {
    double initialGuess, tol;
    int maxIterations;

    // Initial guess
    cout << "Enter the initial guess: ";
    cin >> initialGuess;

    // Define the tolerance
    cout << "Enter the tolerance: ";
    cin >> tol;

    // Define the maximum number of iterations
    cout << "Enter the maximum number of iterations: ";
    cin >> maxIterations;

    double root = iterativeMethod(initialGuess, tol, maxIterations);

    if (root != 0.0) {
        cout << "Root is approximately: " << root << endl;
    }

    return 0;
}
