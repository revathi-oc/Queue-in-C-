//Revathi oc
//23070123105
#include <iostream>
using namespace std;
#define SIZE 5
#define ERROR -9999
class Queue {
    int rear, front, ar[SIZE];
public:
    Queue() {
        rear = -1;
        front = -1;
    }
    void enqueue(int);
    int dequeue();
    void disp();
};

void Queue::enqueue(int num) {
    if (rear == SIZE - 1) {
        cout << "Queue is full" << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    ar[++rear] = num;
    cout << "Enqueued: " << num << endl;
}

int Queue::dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return ERROR;
    }
    int val = ar[front++];
    if (front > rear) {
        front = -1;
        rear = -1;
    }
    return val;
}

void Queue::disp() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue contents: ";
    for (int i = front; i <= rear; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}
int main() {
    Queue q1;
    q1.enqueue(4);
    q1.enqueue(8);
    q1.enqueue(3);
    q1.disp();
    int val = q1.dequeue();
    cout << "Deleted element: " << val << endl;

    q1.disp();

    return 0;
}
