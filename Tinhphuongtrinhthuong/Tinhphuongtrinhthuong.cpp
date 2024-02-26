#include <iostream>
using namespace std;
int main() {
    int so1, so2; float thuong;
    cout << "CHUONG TRINH TINH THUONG\n";
    cout << "Nhap so thu nhat:";
    cin >> so1;
    cout << "Nhap so thu hai:";
    cin >> so2;
    if (so2 != 0) {
        thuong = (float)so1 / so2;
        cout << so1 << "/" << so2 << "=" << thuong << endl;
    }
    else {
        cout << "Khong the chia" << so1 << "cho 0\n";
    }
    return 0;
}

