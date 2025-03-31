#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    queue()
    {
        size = 100;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool ismempty()
    {
        if(qfront==rear){
            return true;

        }
            
    
    else {
        return false;
    } 
    }

    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans=arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if ( qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }
    int front(){
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};
int main(){
    queue q;
    q.dequeue();
    q.enqueue(2);
    q.dequeue();
    q.front();
    cout<<q.dequeue()<<endl;

}