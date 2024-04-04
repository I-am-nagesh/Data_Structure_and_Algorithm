#include <iostream>
#include <cmath>

using namespace std;

// Define the function whose root is to be found
double function(double x) {
    // Example function: f(x) = x^3 - 2x - 5
    return pow(x, 3) - 2 * x - 5;
}

// Derivative of the function
double derivative(double x) {
    // Example function's derivative: f'(x) = 3x^2 - 2
    return 3 * pow(x, 2) - 2;
}

// Newton-Raphson method to find the root
double newtonRaphson(double x0, double tol, int maxIterations) {
    double x = x0;
    for (int i = 0; i < maxIterations; ++i) {
        double fx = function(x);
        double fpx = derivative(x);

        // Check if derivative is close to zero
        if (fabs(fpx) < 1e-10) {
            cout << "Newton-Raphson method failed: Division by zero!" << endl;
            return 0.0;
        }

        double dx = fx / fpx;
        x -= dx;

        // Check for convergence
        if (fabs(dx) < tol) {
            return x;
        }
    }
    cout << "Newton-Raphson method failed to converge." << endl;
    return 0.0;
}

int main() {
    double x0, tol;
    int maxIterations;

    // Initial guess
    cout << "Enter the initial guess: ";
    cin >> x0;

    // Define the tolerance
    cout << "Enter the tolerance: ";
    cin >> tol;

    // Define the maximum number of iterations
    cout << "Enter the maximum number of iterations: ";
    cin >> maxIterations;

    double root = newtonRaphson(x0, tol, maxIterations);

    if (root != 0.0) {
        cout << "Root is approximately: " << root << endl;
    }

    return 0;
}
