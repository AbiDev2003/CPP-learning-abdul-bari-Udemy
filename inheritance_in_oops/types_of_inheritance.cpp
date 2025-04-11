#include <iostream>

using namespace std;

int main() {
    // Types of Inheritance in C++
    // 1. Single Inheritance
    // 2. Multiple Inheritance
    // 3. Multilevel Inheritance
    // 4. Hierarchical Inheritance
    // 5. Hybrid Inheritance
    // 6. Multipath Inheritance

    // Here are example of each type of inheritance

    // 1. Single Inheritance - A -> B, means B is inherited from A
    class A{
        public:
        void display(){
            cout<<"Class A"<<endl;
        }
    };
    class B: public A{
        public:
        void show(){
            cout<<"Class B"<<endl;
        }
    };

    // 2. Multiple Inheritance - A -> B, A -> C, means B and C are inherited from A
    class C{
        public:
        void display(){
            cout<<"Class C"<<endl;
        }
    };
    class D{
        public:
        void show(){
            cout<<"Class D"<<endl;
        }
    };
    class E: public C, public D{
        public:
        void view(){
            cout<<"Class E"<<endl;
        }
    };
    // 3. Multilevel Inheritance - A -> B, B -> C, means B is inherited from A and C is inherited from B
    class F{
        public:
        void display(){
            cout<<"Class F"<<endl;
        }
    };
    class G: public F{
        public:
        void show(){
            cout<<"Class G"<<endl;
        }
    };
    class H: public G{
        public:
        void view(){
            cout<<"Class H"<<endl;
        }
    };
    // 4. Hierarchical Inheritance - A -> B, A -> C, means B and C are inherited from A
    class I{
        public:
        void display(){
            cout<<"Class I"<<endl;
        }
    };
    class J: public I{
        public:
        void show(){
            cout<<"Class J"<<endl;
        }
    };
    class K: public I{
        public:
        void view(){
            cout<<"Class K"<<endl;
        }
    };
    // 5. Hybrid Inheritance - Combination of Single, Multiple, Multilevel and Hierarchical Inheritance
    // 6. Multipath Inheritance - A -> B, B -> C, C -> D, means B is inherited from A, C is inherited from B and D is inherited from C
    class L{
        public:
        void display(){
            cout<<"Class L"<<endl;
        }
    };
    class M: public L{
        public:
        void show(){
            cout<<"Class M"<<endl;
        }
    };
    class N: public M{
        public:
        void view(){
            cout<<"Class N"<<endl;
        }
    };
    class O: public N{
        public:
        void print(){
            cout<<"Class O"<<endl;
        }
    };
    

    return 0;
}