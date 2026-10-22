#include <iostream>
using namespace std;

class QueueList {
private:
    int arr[100];
    int front_arr;
    int rear_arr;
    int sizes;

public:
    QueueList() {
        front_arr = 0;
        rear_arr = -1;
        sizes = 0;
    }

    bool empty() {
        return sizes == 0;
    }

    bool full() {
        return sizes == 100;
    }

    void push(int u) {
        if (full()) {
            cout << "Overflow" << endl;
            return;
        }

        rear_arr = (rear_arr + 1) % 100;
        arr[rear_arr] = u;
        sizes++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue rong!" << endl;
            return;
        }

        front_arr = (front_arr + 1) % 100;
        sizes--;
    }

    int front() {
        if (empty()) {
            cout << "Queue rong!" << endl;
            return -1;
        }

        return arr[front_arr];
    }

    int back() {
        if (empty()) {
            cout << "Queue rong!" << endl;
            return -1;
        }

        return arr[rear_arr];
    }

    int size() {
        return sizes;
    }
};

int main() {
    QueueList q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front hien tai: " << q.front() << endl;
    cout << "Back hien tai: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    q.pop();

    cout << "Front moi: " << q.front() << endl;
    cout << "Size moi: " << q.size() << endl;

    cin.get();
    return 0;
}
\\O(1)
