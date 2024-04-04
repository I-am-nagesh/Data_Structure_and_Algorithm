#include <iostream>
#include <cmath>

using namespace std;

// Define the function to be integrated
double function(double x) {
    // Example function: f(x) = x^2
    return x * x;
}

// Numerical integration using the trapezoidal rule
double trapezoidalRule(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (function(a) + function(b));
    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        sum += function(x);
    }
    return sum * h;
}

int main() {
    double a, b;
    int n;

    // Define the limits of integration [a, b]
    cout << "Enter the lower limit of integration (a): ";
    cin >> a;
    cout << "Enter the upper limit of integration (b): ";
    cin >> b;

    // Define the number of subintervals
    cout << "Enter the number of subintervals (n): ";
    cin >> n;

    // Perform numerical integration using the trapezoidal rule
    double result = trapezoidalRule(a, b, n);

    cout << "Result of numerical integration using the trapezoidal rule: " << result << endl;

    return 0;
}
