#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "nhap so phan tu: ";
    cin >> n;
    cout << "nhap cac so: ";
    double *a = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    double tb = sum / n;

    cout << "gia tri trung binh: " << tb << endl;
    cout << "cac gia tri >= trung binh: ";
    for (int i = 0; i < n; i++) {
        if (a[i] >= tb) {
            cout << a[i] << " ";
        }
    }

    delete [] a;

    cin.ignore();
    cin.get();
    return 0;
}

//Độ phức tạp thời gian: T(n) = O(n)
//Bộ nhớ: M(n) = O(n)