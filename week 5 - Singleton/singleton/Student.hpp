#include<iostream>

class Student {

    private:
        // Attributes
        std::string _name;
        int _age;
    public:
        // Functions
        void setName(std::string name);
        void setAge(int age);
        std::string getName();
        int getAge();
        // Constructor
        Student();
        Student(std::string name, int age);
        Student(Student &s);
        ~Student();
};