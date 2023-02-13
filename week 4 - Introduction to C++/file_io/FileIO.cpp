#include "FileIO.hpp"

bool FileIO::readFile() {
    std::ifstream my_file;
    my_file.open(_filename);
    std::string data;
    if(!my_file) {
        std::cerr << "Cannot open file\n";        
        return false;
    }

    while(getline(my_file, data)) {
        std::cout << data << std::endl;
    }
    return true;
}

bool FileIO::writeFile(std::string filename) {
    std::ofstream my_file;
    my_file.open(filename, std::ios::trunc);
    if(my_file){
        my_file << "This is my first input to the file\n";
        my_file << "This is my second input\n";
        my_file.close();
        return true;
    }
    std::cerr << "Cannot open file\n";
    return false;
}

void FileIO::setFileName(std::string filename) {
    _filename = filename;
}

std::string FileIO::getFileName() {
    return _filename;
}

FileIO::FileIO(std::string filename) {
    _filename = filename;
}