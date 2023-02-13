#include "Singleton.hpp"

Singleton* Singleton::instance = NULL;

Singleton* Singleton::getInstance() {
    if(!instance) {
        instance = new Singleton();
    }
    return instance;
}

void Singleton::setFile(FileIO file) {
    _file = file;
}

FileIO Singleton::getFile() {
    return _file;
}
