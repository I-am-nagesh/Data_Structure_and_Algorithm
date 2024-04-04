#include <iostream>
#include <cmath>

using namespace std;

// Define the function to be integrated
double function(double x) {
    // Example function: f(x) = x^2
    return x * x;
}

// Numerical integration using Simpson's 1/3 rule
double simpsonOneThird(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = function(a) + function(b);
    
    // Sum for odd terms
    for (int i = 1; i < n; i += 2) {
        double x = a + i * h;
        sum += 4 * function(x);
    }
    
    // Sum for even terms
    for (int i = 2; i < n - 1; i += 2) {
        double x = a + i * h;
        sum += 2 * function(x);
    }
    
    return (h / 3) * sum;
}

int main() {
    double a, b;
    int n;

    // Define the limits of integration [a, b]
    cout << "Enter the lower limit of integration (a): ";
    cin >> a;
    cout << "Enter the upper limit of integration (b): ";
    cin >> b;

    // Define the number of intervals (n) - n must be even for Simpson's 1/3 rule
    cout << "Enter the number of intervals (n, must be even): ";
    cin >> n;
    
    if (n % 2 != 0) {
        cout << "Error: Number of intervals must be even for Simpson's 1/3 rule." << endl;
        return 1;
    }

    // Perform numerical integration using Simpson's 1/3 rule
    double result = simpsonOneThird(a, b, n);

    cout << "Result of numerical integration using Simpson's 1/3 rule: " << result << endl;

    return 0;
}
