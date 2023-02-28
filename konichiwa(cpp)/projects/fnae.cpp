#include <iostream>
#include <cmath>
#include <memory> // required for std::unique_ptr

int main() {
    std::unique_ptr<double[]> terms(new double[10]); // use a unique_ptr to manage memory

    double a ; // starting value
    double r ; // common ratio
    int n; // number of terms
    cin>>a>>r>>n;
    for(int i = 0; i < n; i++) {
        double term = a * pow(r, i);
        terms[i] = term; // store each term in the array
    }

    for(int i = 0; i < n; i++) {
        double term = terms[i];
        int exponent = log10(term); // calculate the exponent
        double coefficient = term / pow(10.0, exponent); // calculate the coefficient
        std::cout << coefficient << "e+" << exponent << " "; // output in scientific notation
    }

    return 0;
}
