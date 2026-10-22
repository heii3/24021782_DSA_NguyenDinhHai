#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class StackLinkedList {
private:
    Node* head; 
    int sizes;
public:
    StackLinkedList() {
        head = nullptr;
        sizes = 0;
    }
    bool empty() {
        return head == nullptr;
    }
    void push(int u){
        Node* newnode =new Node();
        newnode->next=head;
        newnode->data=u;
        head=newnode;
        sizes++;
    }
    void pop(){
        if(empty()){
            cout << "Stack Rong" << endl;
            return;
        }
        Node* temp =head;
        head=head->next;
        delete(temp);
        sizes--;
    }
    int top(){
        if(empty()){
            cout << "Stack Rong" << endl;
            return -1;
        }
        return head->data;
    }
    int size(){
        return sizes;
    }
};

int main(){
    StackLinkedList st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << "top hien tai: " << st.top() << endl; 
    cout << "size: " << st.size() << endl;         

    st.pop();
    cout << "top moi: " << st.top() << endl;
    cout << "size moi: " << st.size() << endl;         

    cin.get();

    return 0;
}
\\O(1)
