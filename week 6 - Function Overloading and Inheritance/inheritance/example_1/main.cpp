#include "Child.hpp"

int main() {
    Child* child = nullptr;
    child = new Child();
    child->parent_data = "Parent";
    child->child_data = "Child";
    std::cout << child->parent_data << " " << child->child_data << std::endl;
    delete child;
    return EXIT_SUCCESS;
}