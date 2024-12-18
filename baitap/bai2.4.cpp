#include <iostream>
using namespace std;
long long fibonacci(int n);
int main() {
    int n;
    cout << "Nhap vi tri so Fibonacci: ";
    cin >> n;
    cout << "So Fibonacci tai vi tri " << n << " la: " << fibonacci(n) << endl;
    return 0;
}
long long fibonacci(int n) {
    if (n <= 1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}