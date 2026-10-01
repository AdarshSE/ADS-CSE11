#include <iostream>
using namespace std;
#define SIZE 5
int dequeue[SIZE];
int front = -1, rear = -1;

void insertFront(int value) //insert from front
{
    if((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        cout << "Dequeue is full" << endl;
        return;
    }
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if(front == 0)
        front = SIZE - 1;
    else
        front--;
    dequeue[front] = value;
}

void insertRear(int value)  //insert from rear
{
    if((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        cout << "Dequeue is full" << endl;
        return;
    }
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if(rear == SIZE - 1)
        rear = 0;
    else
        rear++;
    dequeue[rear] = value;
}

void deleteFront()  //delete from front
{
    if(front == -1)
    {
        cout << "Dequeue is empty" << endl;
        return;
    }
    cout << "Deleted: " << dequeue[front] << endl;
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if(front == SIZE - 1)
        front = 0;
    else
        front++;
}

void deleteRear()  //delete from rear
{
    if(front == -1)
    {
        cout << "Dequeue is empty" << endl;
        return;
    }
    cout << "Deleted: " << dequeue[rear] << endl;
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if(rear == 0)
        rear = SIZE - 1;
    else
        rear--;
}

void display()
{
    if(front == -1)
    {
        cout << "Dequeue is empty" << endl;
        return;
    }
    cout << "Dequeue: ";
    int i = front;
    while(true)
    {
        cout << dequeue[i] << " ";
        if(i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

int main()
{
    insertRear(10);
    insertRear(20);
    insertFront(5);
    display();

    deleteFront();
    display();

    deleteRear();
    display();

    return 0;
}