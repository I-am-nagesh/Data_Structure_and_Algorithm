#include <iostream>
#include <cmath>

using namespace std;

// Define the function to be integrated
double function(double x) {
    // Example function: f(x) = x^2
    return x * x;
}

// Numerical integration using Simpson's 3/8 rule
double simpsonThreeEighth(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = function(a) + function(b);

    // Sum for terms that are multiples of 3
    for (int i = 1; i < n; i += 3) {
        double x = a + i * h;
        sum += 2 * function(x);
    }

    // Sum for terms that are not multiples of 3
    for (int i = 2; i < n; i += 3) {
        double x = a + i * h;
        sum += 3 * function(x);
    }

    return (3 * h / 8) * sum;
}

int main() {
    double a, b;
    int n;

    // Define the limits of integration [a, b]
    cout << "Enter the lower limit of integration (a): ";
    cin >> a;
    cout << "Enter the upper limit of integration (b): ";
    cin >> b;

    // Define the number of intervals (n) - n must be multiple of 3 for Simpson's 3/8 rule
    cout << "Enter the number of intervals (n, must be multiple of 3): ";
    cin >> n;

    if (n % 3 != 0) {
        cout << "Error: Number of intervals must be multiple of 3 for Simpson's 3/8 rule." << endl;
        return 1;
    }

    // Perform numerical integration using Simpson's 3/8 rule
    double result = simpsonThreeEighth(a, b, n);

    cout << "Result of numerical integration using Simpson's 3/8 rule: " << result << endl;

    return 0;
}
