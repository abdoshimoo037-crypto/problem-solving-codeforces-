#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void display(Node* node) {
    if (node == NULL)
        return;
    cout << node->data << " ";
    display(node->next);
}

int length(Node* node) {
    if (node == NULL)
        return 0;
    return 1 + length(node->next);
}

