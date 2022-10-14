// Factorial 

#include <iostream>
using namespace std;

int isFactorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = isFactorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int isFactorial(int n) {
    if (n > 1) {
        return n * isFactorial(n - 1);
    } else {
        return 1;
    }
}
