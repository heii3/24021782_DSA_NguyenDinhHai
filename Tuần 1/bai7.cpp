#include <iostream>
using namespace std;

int tong(int a[][100], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}

void xoadong(int a[][100], int &n, int m, int k) {
    for (int i = k; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i + 1][j];
        }
    }
    n--;
}

int main() {
    int a[100][100];
    int n, m;
    cout << "nhap so dong: ";
    cin >> n;
    cout << "nhap so cot: ";
    cin >> m;
    cout << "nhap cac so: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << "tong cac phan tu: " << tong(a, n, m) << endl;

    int k;
    cout << "nhap dong can xoa: ";
    cin >> k;
    xoadong(a, n, m, k);

    cout << "mang sau khi xoa:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}

//Độ phức tạp thời gian: T(n, m) = O(n*m)
//Bộ nhớ: M(n, m) = O(n*m)