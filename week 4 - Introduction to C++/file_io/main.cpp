#include "Student.hpp"
#include "FileIO.hpp"

int main() {

    std::string filename = "test.txt";
    FileIO* f = new FileIO(filename);
    f->writeFile(filename);
    f->readFile();

    return EXIT_SUCCESS;
}