#include<iostream>
using namespace std;

void rutgon(int &a, int &b) {
    int x = a;
    int y = b;
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    a = a / x;
    b = b / x;
}
int main(){
    int a,b;
    cout<<"nhap 2 so: ";
    cin>>a>>b;
    rutgon(a,b);
    cout<<"ket qua: "<<a<<"/"<<b;
    cin.ignore();
    cin.get();
}

//Độ phức tạp thời gian: T(n) = O(log n)
//Bộ nhớ: M(n) = O(1)