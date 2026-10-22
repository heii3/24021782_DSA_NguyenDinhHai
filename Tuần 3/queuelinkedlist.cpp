#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class QueueLinkedList {
private:
    Node* head;
    Node* tail;
    int sizes;

public:
    QueueLinkedList() {
        head = nullptr;
        tail = nullptr;
        sizes = 0;
    }

    ~QueueLinkedList() {
        while (!empty()) pop();
    }

    bool empty() {
        return head == nullptr;
    }

    void push(int u) {
        Node* newnode = new Node();
        newnode->data = u;
        newnode->next = nullptr;

        if (empty()) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        sizes++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue rong!" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        if (head == nullptr) tail = nullptr;
        delete temp;
        sizes--;
    }

    int front() {
        if (empty()) {
            cout << "Queue rong!" << endl;
            return -1;
        }

        return head->data;
    }

    int back() {
        if (empty()) {
            cout << "Queue rong!" << endl;
            return -1;
        }

        return tail->data;
    }

    int size() {
        return sizes;
    }
};

int main() {
    QueueLinkedList q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "front hien tai: " << q.front() << endl;
    cout << "back hien tai: " << q.back() << endl;
    cout << "size: " << q.size() << endl;

    q.pop();

    cout << "front moi: " << q.front() << endl;
    cout << "size moi: " << q.size() << endl;

    cin.get();
    return 0;
}
