#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class compare {
public:
    bool operator()(Node* a, Node* b) {
        return a->data > b->data;
    }
};

Node* mergeKLists(vector<Node*>& lists);
void print(Node* head);

int main() {
    Node* l1 = new Node(1);
    l1->next = new Node(4);
    l1->next->next = new Node(5);

    Node* l2 = new Node(1);
    l2->next = new Node(3);
    l2->next->next = new Node(4);

    Node* l3 = new Node(2);
    l3->next = new Node(6);

    vector<Node*> lists = {l1, l2, l3};

    Node* result = mergeKLists(lists);
    print(result);
}

Node* mergeKLists(vector<Node*>& lists) {
    priority_queue<Node*, vector<Node*>, compare> pq;

    for (auto list : lists) {
        if (list != NULL)
            pq.push(list);
    }

    Node dummy(0);
    Node* tail = &dummy;

    while (!pq.empty()) {
        Node* temp = pq.top();
        pq.pop();

        tail->next = temp;
        tail = tail->next;

        if (temp->next != NULL)
            pq.push(temp->next);
    }

    return dummy.next;
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}