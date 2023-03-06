#include<iostream> 

class A { 
	public: 
		A() { std::cout << "A created" << std::endl;}
		void print() { std::cout <<"I am in Class A" << std::endl; } 
}; 
   
class B : public A { 
	public: 
		B() { std::cout << "B created" << std::endl;}
		void print() { std::cout <<"I am in Class B" << std::endl; } 
}; 
   
class C: public B { 
	public: 
		C() { std::cout << "C created" << std::endl;}
		void print() { std::cout <<"I am in Class C" << std::endl; } 
}; 
   
int main(void) {
	//A a;
    // which print method will be invoked, for object A?
	//a.print();
	B b;
    // which print method will be invoked, for object B?
	b.print();
	C c;
    // which print method will be invoked, for object C?
	c.print(); 
	return EXIT_SUCCESS;
} 