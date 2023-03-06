#include<iostream> 

class A { 
    public: 
        // Default constructor for Class A
        A(){ std::cout << "Class A's constructor is called" << std::endl; }
        ~A(){ std::cout << "Class A destroyed" << std::endl; }
}; 
   
class B : public A { 
    public:
        // Default constructor for Class B
        B(){ std::cout << "Class B's constructor is called" << std::endl; } 
        ~B(){ std::cout << "Class B destroyed" << std::endl; } 
}; 
   
class C: public A, public B { 
    public:
        // Default constructor for Class C 
        C() { std::cout << "Class C's constructor is called" << std::endl; }
        ~C() { std::cout << "Class C destroyed" << std::endl; }
}; 
   
int main() {
    // 1) Which constructor(s) will be called?
    // 2) If multiple constructors are invoked, does the order matter?
    // 3) If yes, for question 2, What will be the order?
    C c;
    return EXIT_SUCCESS;
} 
