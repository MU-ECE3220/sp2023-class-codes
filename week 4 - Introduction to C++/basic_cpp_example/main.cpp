#include "Student.hpp"

int main() {

    //int x = 5;
    //std::cout << "Value x = " << x << std::endl;

    // Allocated in Stack
    Student s1("Ekincan", 10);
    std::cout << "Name: " << s1.getName() << ", Age: " << s1.getAge() << std::endl;

    // Allocated in Heap
    Student* s2 = new Student("Alice", 12); 
    std::cout << "Name: " << s2->getName() << ", Age: " << s2->getAge() << std::endl;

    delete s2;

    return EXIT_SUCCESS;
}