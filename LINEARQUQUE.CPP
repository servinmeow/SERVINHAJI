#include <iostream>
using namespace std;

class Quque
{
public:
    int size;
    int rear = -1;
    int front = -1;
    int* quque;

    Quque(int s)
    {
        size = s;
        quque = new int[size];
    }

    bool isEmpty()
    {
        return front == rear;
    }

    bool isFull()
    {
        return rear == size - 1;
    }

    void enquque(int value)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            rear += 1;
            quque[rear] = value;
        }
    }

    void deletequque()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            front += 1;
            int data = quque[front];
            cout << data << endl;
        }
    }

    void display()
    {
        cout << "{";
        for (int i = front + 1; i <= rear; i++)
        {
            cout << quque[i];
            if (i < rear)
            {
                cout << ",";
            }
        }
        cout << "}" << endl;
    }
};

int main()
{
    Quque a1(7);
    a1.enquque(2);
    a1.enquque(3);
    a1.deletequque();
    a1.display();
    a1.enquque(4);
    a1.enquque(5);
    a1.display();
    a1.enquque(99);
    a1.display();
    a1.deletequque();
    a1.enquque(4);
    a1.enquque(4);
    a1.enquque(4);
    a1.display();
}
