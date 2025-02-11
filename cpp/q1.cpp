#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}
int nextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) {
        ++next;
    }
    return next;
}
void findFactors(int num, int factors[], int &count) {
    count = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            factors[count++] = i;
        }
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
        cout << "The next prime number after " << n << " is " << nextPrime(n) << "." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        cout << "Factors of " << n << " are: ";
        int factors[100], count;
        findFactors(n, factors, count);
        for (int i = 0; i < count; i++) {
            cout << factors[i] << " ";
        }
        cout << endl;
    }
    return 0;
}