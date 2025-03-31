// stack using stl
#include <iostream>
#include <stack>
using namespace std;
class Mystack
{
    // properties
public:
    int *arr;
    int top;
    int size;
    // behavior
    Mystack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // Destructor
    ~Mystack() {
        delete[] arr;
    }

    // operations
    void push(int elt)
    {
        if (top < size-1)
        {
            top++;
            arr[top] = elt;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty";
            return -1;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(){
    // creation of stack with array implementation 
    
    Mystack a(3);
    a.push(0);
    a.push(10);
    a.pop();
    cout << a.peek();

    return 0;

    // // creation of stack std
    // stack<int> s;
    // // push operation
    // s.push(2);
    // s.push(10);
    // // pop operation
    // s.pop();

    // // top operation
    // cout<<s.top();
    // cout<<endl;
    // // check whetehr it is empty or not
    // if(s.empty()){
    //     cout<<"stack is empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty"<<endl;
    // }
    // cout<<"size is"<<endl<< s.size();
}
    
