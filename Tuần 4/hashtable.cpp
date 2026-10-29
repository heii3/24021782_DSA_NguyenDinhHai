#include <iostream>
using namespace std;

const int M = 10;

struct Node {
    int data;
    Node *next;
};

Node *table[M] = {NULL};

int hashFunction(int x) {
    return (x % M + M) % M;
}

void insert(int x) {
    int h = hashFunction(x);
    Node *p = new Node{x, table[h]};
    table[h] = p;
}

bool search(int x, int &bucket, int &position) {
    bucket = hashFunction(x);
    int currentPosition = 1;
    Node *p = table[bucket];

    while (p != NULL) {
        if (p->data == x) {
            position = currentPosition;
            return true;
        }
        p = p->next;
        currentPosition++;
    }

    return false;
}

void display() {
    for (int i = 0; i < M; i++) {
        cout << i << ": ";
        Node *p = table[i];

        if (p == NULL) {
            cout << "NULL";
        } else {
            while (p != NULL) {
                cout << p->data;
                p = p->next;
                if (p != NULL)
                    cout << " -> ";
            }
        }

        cout << '\n';
    }
}

int main() {
    int n, x, chon, bucket, position;

    cout << "Nhap so phan tu: ";
    cin >> n;

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        insert(x);
    }

    do {
        cout << "1. Them\n";
        cout << "2. Tim kiem\n";
        cout << "3. Hien thi bang bam\n";
        cout << "0. Thoat\n";
        cout << "Chon: \n";
        cin >> chon;

        switch (chon) {
        case 1:
            cout << "Nhap so can them: ";
            cin >> x;
            insert(x);
            break;

        case 2:
            cout << "Nhap so can tim: ";
            cin >> x;

            if (search(x, bucket, position)) {
                cout << "Tim thay tai bucket " << bucket
                     << ", vi tri " << position << " trong danh sach\n";
            } else {
                cout << "Khong tim thay\n";
            }
            break;

        case 3:
            display();
            break;

        case 0:
            cout << "Thoat chuong trinh\n";
            break;

        default:
            cout << "Lua chon khong hop le\n";
            break;
        }
    } while (chon != 0);

    return 0;
}
