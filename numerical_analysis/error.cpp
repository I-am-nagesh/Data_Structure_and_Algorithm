#include <iostream>
#include <cmath>

using namespace std;

// Function to compute absolute error
double absoluteError(double trueValue, double computedValue) {
    return fabs(trueValue - computedValue);
}

// Function to compute relative error
double relativeError(double trueValue, double computedValue) {
    if (trueValue != 0) {
        return fabs(trueValue - computedValue) / fabs(trueValue);
    } else {
        cerr << "Error: True value is zero!" << endl;
        return INFINITY;
    }
}

// Function to compute percentage error
double percentageError(double trueValue, double computedValue) {
    return relativeError(trueValue, computedValue) * 100.0;
}

int main() {
    // True value and computed value
    double trueValue, computedValue;

    // Input true value and computed value from user
    cout << "Enter the true value: ";
    cin >> trueValue;
    cout << "Enter the computed value: ";
    cin >> computedValue;

    // Calculate absolute error
    double absErr = absoluteError(trueValue, computedValue);

    // Calculate relative error
    double relErr = relativeError(trueValue, computedValue);

    // Calculate percentage error
    double percErr = percentageError(trueValue, computedValue);

    // Output results
    cout << "Absolute error: " << absErr << endl;
    cout << "Relative error: " << relErr << endl;
    cout << "Percentage error: " << percErr << "%" << endl;

    return 0;
}
