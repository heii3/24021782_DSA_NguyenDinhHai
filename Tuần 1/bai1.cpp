#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"nhap so phan tu: ";
    cin >> n;
    cout<<"nhap so: ";
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    cout <<"ket qua: "<< sum;

    delete [] a;

    cin.ignore();
    cin.get();
    return 0;
}
//Độ phức tạp thời gian: T(n) = O(n)
//Bộ nhớ: M(n) = O(n)