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

bool FileIO::writeFile(std::string filename, std::string text) {
    std::ofstream my_file;
    my_file.open(filename, std::ios::app);
    if(my_file){
        my_file << text << std::endl;
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

FileIO::FileIO() {}