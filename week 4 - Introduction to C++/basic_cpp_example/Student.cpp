#include "Student.hpp"

void Student::setName(std::string name) {
    _name = name;
}

void Student::setAge(int age) {
    _age = age;
}
std::string Student::getName() {
    return _name;
}
int Student::getAge() {
    return _age;
}

// Constructor
Student::Student() {

}

// Parameterized Constructor
Student::Student(std::string name, int age) {
    //this->_name = name;
    _name = name;
    //this->_age = age;
    _age = age;
}

// Copy Constructor
Student::Student(Student &s) {
    _name = s._name;
    _age = s._age;
}

// Destructor
Student::~Student() {
    std::cout << "Student: " << this->_name << ", is destroyed\n";
}