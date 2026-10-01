#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int x)
{
    if (rear == SIZE - 1)
        cout << "Queue is full\n";
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
        cout << "Queue is empty\n";
    else
    {
        cout << "Deleted: " << queue[front] << endl;
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
        cout << "Queue is empty\n";
    else
    {
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}