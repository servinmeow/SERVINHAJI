#include <iostream>
using namespace std;

class CircularQueue
{
public:
    CircularQueue(int s) : size(s), rear(-1), front(-1)
    {
        queue = new int[size];
    }



    void enqueue(int value)
    {
        if ((rear + 1) % size == front)
        {
            cout << "Queue is full" << endl;
            return;
        }
        rear = (rear + 1) % size;
        queue[rear] = value;
    }

    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        front = (front + 1) % size;
        cout << "Deleted item = " << queue[front] << endl;
    }

    void display()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        
        int i = (front + 1) % size;
        while (i != (rear + 1) % size)
        {
            cout << queue[i] << " ";
            i = (i + 1) % size;
        }
        cout << endl;
    }

private:
    int rear;
    int front;
    int size;
    int* queue;
};

int main()
{
    CircularQueue cq(5);

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    
    cq.display();

    cq.dequeue();
    cq.display();

    cq.enqueue(50);
    cq.display();

    return 0;
}
