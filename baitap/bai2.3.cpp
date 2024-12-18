#include <iostream>
using namespace std;
int Uocchung(int a, int b);
int main() {
    int a, b;
    cout << "Nhap a, b: " << endl; 
    cin >> a >> b;
    int UCLN = Uocchung(a, b);
    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << UCLN << endl;
    return 0;
}
int Uocchung(int a, int b) {
    if (b == 0){
        return a;
    }
    return Uocchung(b, a % b);
}