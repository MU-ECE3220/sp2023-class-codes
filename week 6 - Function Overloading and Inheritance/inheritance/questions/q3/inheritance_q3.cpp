#include <iostream> 
  
class Parent { 
	public:
		// Do I have to modify the signature of this method?
		virtual std::string print() { 
			return "This is Parent class"; 
		} 
}; 
  
class Child : public Parent { 
	public: 	
		std::string print() { 
			return "This is Child class"; 
		} 
}; 
  
// Do I have to modify the argument type, pointer?
void describe(Parent* c) {
	std::cout << c->print() << std::endl;
} 
  
int main() { 
	// Do I have to change how I instantiate a Child object? 
	Child* c = nullptr;
	c = new Child();
	// 1) what will describe print?
	describe(c); 
	Parent* p = nullptr;
	p = new Parent();
	describe(p);
	delete p;
	delete c;
	return EXIT_SUCCESS;
} 