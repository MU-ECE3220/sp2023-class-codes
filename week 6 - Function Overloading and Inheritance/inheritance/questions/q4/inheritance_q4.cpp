#include<iostream> 

class A { 
	public:
		char x = 'A'; 
		A() { std::cout << "Class A's constructor is called" << std::endl; } 
}; 
   
class B { 
	public: 
		char x = 'B';
		B() { std::cout << "Class B's constructor is called" << std::endl; } 
}; 
   
class C: public A, public B { 
	public:
		C() { std::cout << "Class C's constructor is called" << std::endl; } 
		void print() {
			// What will be the printed value of x?
			//std::cout << "Value is: " << x <<std::endl;
		}
}; 
   
int main() { 
	C c; 
	c.print();
	return EXIT_SUCCESS;
} 
