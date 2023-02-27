#include<iostream>

class A { 
	public: 
		const char x = 'x';
		void print(){ 
			std::cout << x << std::endl;
		}
	protected: 
		const char y = 'y'; 
	private: 
		const char z = 'z'; 
}; 
  
class B : public A { 
	public:
		void print() { 
			std::cout << x << std::endl;
			std::cout << y << std::endl;
			//cout << z << endl;
		}
}; 
  
class C : protected A { 
	public:
		void print() { 
			std::cout << x << std::endl;
			std::cout << y << std::endl;
			//cout << z << endl;
		}	
}; 
  
class D : private A { 
	public:
		void print() { 
			std::cout << x << std::endl;
			std::cout << y << std::endl;
			//cout << z << endl;
		}
}; 

int main() {
	A a;
	B b;
	C c;
	D d;

	d.print();
	//cout << d.x << endl;
	
	return EXIT_SUCCESS;
}