// #include <iostream>

// using namespace std;

// class Stack
// {
// private:
//     int *stk;
//     int top;
//     int size;

// public:
//     Stack(int sz)
//     {
//         size = sz;
//         top = -1;
//         stk = new int[size];
//     }

//     void push(int x);
//     int pop();
// }; // this is a class for int data type. If i want a single class for every kind of data type, then i will write a template class.

// void Stack::push(int x)
// {
//     if (top == size - 1)
//     {
//         cout << "Stack is full" << endl;
//     }
//     else
//     {
//         top++;
//         stk[top] = x;
//     }
// }

// int Stack::pop(){
//     int x = 0;
//     if(top == -1){
//         cout<<"Stack is empty"<<endl;
//     }else{
//         x = stk[top];
//         top--;
//     }
// }


// int main()
// {
//     Stack s(10);
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);


//     return 0;
// }





// instaed of the above we will write a template class for every kind of data type.
#include <iostream>

using namespace std;



template <class T>

class Stack
{
private:
    T *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }

    void push(T x);
    T pop();
}; // this is a class for int data type. If i want a single class for every kind of data type, then i will write a template class.


template <class T>
void Stack<T>::push(T x)
{
    if (top == size - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        stk[top] = x;
    }
}


template <class T>
T Stack<T>::pop(){
    T x = 0;
    if(top == -1){
        cout<<"Stack is empty"<<endl;
    }else{
        x = stk[top];
        top--;
    }
    return x;
}


int main()
{
    Stack<int> s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);


    return 0;
}


