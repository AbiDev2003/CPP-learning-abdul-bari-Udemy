// Pratice question - Class a class for stack with exceptions 1. stack overflow   2. stack underflow

// Define a class called Stack.

// Initialize the stack with a fixed size (e.g., max_size).

// Implement the push method to add elements to the stack. If the stack is full, raise a StackOverflow exception.

// Implement the pop method to remove elements from the stack. If the stack is empty, raise a StackUnderflow exception.

// Define custom exceptions for StackOverflow and StackUnderflow.

#include <iostream>

using namespace std;
 
class stackOverflow: exception{
    public:
    // const char* what() const throw(){
    //     return "Stack Overflow";
    // }
    //instead of using throw() we can use noexcept override for better performance and safety
    const char* what() const noexcept override{
        return "Stack Overflow, no more elements can be pushed";
    }
    
};
class stackUnderflow: exception{
    public:
    const char* what() const throw(){
        return "Stack Underflow, no more elements can be removed ";
    } //what() FUNCTION IS GETTING overridden from the exception class, which is a part of the standard library. 
};

class stack{
    private:
    int *stack_array;  //dynamically allocated array
    int top = -1; //this indicates an empty stack, because index value starts from 0
    int max_size; //this is the size of the stack
    
    public:
    stack(int size){
        max_size = size;
        //now we will dynamically allocate the array of size 5. 
        stack_array = new int[size];
    }

    //destructor to delete the dynamically allocated array
    ~stack(){
        delete [] stack_array;
    }
    
    void push(int x){
        if(top == max_size-1){
            throw stackOverflow();
        }
        else{
            top++; //in first push top will be 0
            stack_array[top] = x; //now we will assign the element to the respective index of the stack. So basically stack_array[0] = 11
        }
    }
    int pop(){
        if(top == -1){
            throw stackUnderflow();
        }
        return stack_array[top--];
    }

};



int main() {
    stack s(5); //here we are creating a stack of size 5

    // now we will push some element to the stack, maximum 5 elements can be pushed
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);

    //now we will try to push the 6th element, which will throw an exception, so we will write try catch block to handle th exception
    try{
        s.push(16);
    }catch(const stackOverflow &e){
        cout<<e.what()<<endl;
    }

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    try{
        cout<<s.pop()<<endl; //this will throw an exception, so we will write try catch block to handle the exception

    }catch(const stackUnderflow &e){
        cout<<e.what()<<endl;
    }
    return 0;
}