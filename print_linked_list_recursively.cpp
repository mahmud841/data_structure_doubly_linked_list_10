#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_recursivly(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_recursivly(n->next);
}
void print_recursivly_reverse(Node *n)
{
    if (n == NULL)
        return;
    print_recursivly_reverse(n->next);
    cout << n->val << " ";
}

void print_function(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse_print(Node *&head, Node *current)
{
    if (current->next == NULL)
    {
        head = current;
        return;
    }
    reverse_print(head, current->next);
    current->next->next = current;
    current->next=NULL;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // print_recursivly(head);
    // cout << endl;
    reverse_print(head,head);
    print_function(head);
    // print_recursivly_reverse(head);

    return 0;
}