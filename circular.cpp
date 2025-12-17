#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertBeg(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

void insertEnd(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

void deleteBeg() {
    if (head == NULL)
        return;
    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    Node* last = head;
    while (last->next != head)
        last = last->next;
    head = head->next;
    last->next = head;
    delete temp;
}

void deleteEnd() {
    if (head == NULL)
        return;
    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    Node* prev = NULL;
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = head;
    delete temp;
}

void display() {
    if (head == NULL)
        return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

