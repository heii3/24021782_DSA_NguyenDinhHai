#include <iostream>
using namespace std;

void xoa(int *a, int &n, int k) {
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

void chen(int *a, int &n, int y, int m) {
    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];
    }
    a[m] = y;
    n++;
}

void in(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "nhap so phan tu: ";
    cin >> n;
    cout << "nhap cac so: ";
    int *a = new int[n + 1];   // du 1 cho de chen them
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cout << "nhap vi tri can xoa: ";
    cin >> k;
    xoa(a, n, k);
    cout << "sau khi xoa: ";
    in(a, n);

    int y, m;
    cout << "nhap gia tri y can chen: ";
    cin >> y;
    cout << "nhap vi tri m: ";
    cin >> m;
    chen(a, n, y, m);
    cout << "sau khi chen: ";
    in(a, n);

    delete [] a;

    cin.ignore();
    cin.get();
    return 0;
}

//Độ phức tạp thời gian: T(n) = O(n)
//Bộ nhớ: M(n) = O(n)