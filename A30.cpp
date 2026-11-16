#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
};
int main(){
    Node *newnode;
    newnode = new Node;
    cout << "Enter data: ";
    cin >> newnode->data;
    newnode->prev = NULL;
    newnode->next = NULL;
    cout << "Data = " << newnode->data << endl;
    cout << "Previous = " << newnode->prev << endl;
    cout << "Next = " << newnode->next << endl;
    }
return 0;
}
