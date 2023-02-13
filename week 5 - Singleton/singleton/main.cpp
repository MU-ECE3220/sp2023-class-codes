#include "Singleton.hpp"

int main() {

    std::string filename = "test.txt";
    FileIO f(filename);
    Singleton::getInstance()->setFile(f);
    std::string text;
    getline(std::cin, text);
    Singleton::getInstance()->getFile().writeFile("test.txt", text);
    Singleton::getInstance()->getFile().readFile();
    //f->writeFile(filename);
    //f->readFile();

    return EXIT_SUCCESS;
}