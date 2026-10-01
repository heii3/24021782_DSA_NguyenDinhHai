#include <iostream>
using namespace std;

void sapxep(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int tam = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tam;
            }
        }
    }
}

int main() {
    int n;
    cout << "nhap so phan tu: ";
    cin >> n;
    cout << "nhap so: ";
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sapxep(a, n);

    cout << "ket qua: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    delete [] a;

    cin.ignore();
    cin.get();
    return 0;
}

//Độ phức tạp thời gian: T(n) = O(n^2)
//Bộ nhớ: M(n) = O(n)