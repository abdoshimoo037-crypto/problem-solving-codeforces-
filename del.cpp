#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

void deleteBegNode()
{
    if (head == NULL)
    {
        cout << "LinkedList is empty\n";
        return;
    }

    node* first_node = head;
    head = head->next;
    delete first_node;
}

void deleteNode(int value) 
{
    if (head == NULL)
    {
        cout << "The linked list is empty\n";
        return;
    }

    node* current = head;
    node* previous = NULL;

    if (current->data == value)
    {
        head = current->next;
        delete current;
        return;
    }

    while (current != NULL && current->data != value)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Value not found\n";
        return;
    }

    previous->next = current->next;
    delete current;
}

void deleteEndNode()
{
    if (head == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    node* ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }

    delete ptr->next;
    ptr->next = NULL;
}


