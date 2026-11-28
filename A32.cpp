#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main(){
    Node *head = NULL, *newnode, *temp;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        newnode = new Node;
        cout << "Enter data: ";
        cin >> newnode->data;
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }

    // Insert a node at the beginning
    newnode = new Node;

    cout << "Enter element to insert at beginning: ";
    cin >> newnode->data;

    newnode->next = head;
    head = newnode;

    // Display linked list
    cout << "Linked List: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}

