
#include <iostream>
using namespace std;

class StackList {
private:
    int arr[100];
    int top_arr;

public:
    StackList() {
        top_arr = -1;
    }

    bool empty() {
        return top_arr == -1;
    }

    bool full() {
        return top_arr == 99;
    }

    void push(int u) {
        if (full()) {
            cout << "Overflow" << endl;
            return;
        }

        arr[++top_arr] = u;
    }

    void pop() {
        if (empty()) {
            cout << "Stack rong!" << endl;
            return;
        }

        top_arr--;
    }

    int top() {
        if (empty()) {
            cout << "Stack rong!" << endl;
            return -1;
        }

        return arr[top_arr];
    }

    int size() {
        return top_arr + 1;
    }
};

int main() {
    StackList st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Top hien tai: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    st.pop();

    cout << "Top moi: " << st.top() << endl;
    cout << "Size moi: " << st.size() << endl;

    cin.get();
    return 0;
}
