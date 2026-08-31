#include <iostream>
using namespace std;

#define SIZE 10

int arr[SIZE];
int front = -1, rear = -1;

bool isEmpty()
{
    return front == -1;
}

bool isFull()
{
    return rear == SIZE - 1;
}

void traverse()
{
    if (isEmpty())
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void enqueue(int info)
{
    if (isFull())
    {
        cout << "Queue is full" << endl;
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    arr[rear] = info;
}

int dequeue()
{
    int item;
    if (front == -1)
    {
        cout << endl << "Queue is empty" << endl;
        return -1;
    }
    item = arr[front];
    if (front == rear)
        front = rear = -1;
    else
        front++;
    return item;
}

int main()
{
    front = rear = -1;
    if (isEmpty())
        cout << "Queue is initially empty" << endl;

    enqueue(5);
    enqueue(10);
    enqueue(15);
    cout << "Queue elements : ";
    traverse();
    cout << "Dequeued : " << dequeue() << endl;
    cout << "Queue after dequeue: ";
    traverse();

    return 0;
}