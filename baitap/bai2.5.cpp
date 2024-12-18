#include <iostream>
using namespace std;
void Chuoinguoc (string str, int Batdau, int Ketthuc) {
    if (Batdau > Ketthuc) {
        return;
    }
    cout << (char)str[Ketthuc];
 Chuoinguoc(str, Batdau, Ketthuc - 1);
}
int main() {
    string str;
    cout << "Nhap chuoi ky tu: ";
    getline(cin, str);
 Chuoinguoc(str, 0, str.length() - 1);
    return 0;
}