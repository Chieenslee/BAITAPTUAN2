#include <iostream>
using namespace std;
int Hamdem(int n);
int main() {
    int So;
    cout << "Nhap 1 So nguyen: ";
    cin >> So;
    int SoLUONG = Hamdem(So);
    cout << "So luong chu So cua " << So << " la: " << SoLUONG << endl;
    return 0;
}
int Hamdem(int n) {
    if (n < 10){
        return 1;
    }
    return 1 + Hamdem(n / 10);
}