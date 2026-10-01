#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "nhap n: ";
    cin >> n;

    long long gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }

    cout << "ket qua: " << gt;

    cin.ignore();
    cin.get();
    return 0;
}

//Độ phức tạp thời gian: T(n) = O(n)
//Bộ nhớ: M(n) = O(1)