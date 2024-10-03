#include <iostream>
#include <vector>

using namespace std;

// Calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Calculate divided differences recursively
double dividedDifference(vector<double>& y, int n, int i, int j) {
    if (j == 0)
        return y[i];
    else
        return dividedDifference(y, n, i + 1, j - 1) - dividedDifference(y, n, i, j - 1);
}

// Newton's forward interpolation formula
double newtonForwardInterpolation(vector<double>& x, vector<double>& y, double x_val) {
    int n = x.size();
    double result = y[0];
    double u = (x_val - x[0]) / (x[1] - x[0]);
    double term = 1;

    for (int i = 1; i < n; ++i) {
        term *= (u - i + 1) / i;
        result += term * dividedDifference(y, n, 0, i);
    }

    return result;
}

int main() {
    // Given data points
    vector<double> x = {0, 1, 2, 3, 4};
    vector<double> y = {1, 2, 3, 6, 11};

    // Value for interpolation
    double x_val = 2.5;

    // Perform interpolation
    double interpolated_value = newtonForwardInterpolation(x, y, x_val);

    cout << "Interpolated value at x = " << x_val << " is " << interpolated_value << endl;

    return 0;
}
