// Define guards
#ifndef SINGLETON_HPP
#define SINGLETON_HPP
#include <iostream>
#include "FileIO.hpp"

class Singleton {

    private:
        static Singleton* instance;
        Singleton(){};
        FileIO _file;
    public:
        static Singleton* getInstance();
        void setFile(FileIO file);
        FileIO getFile();
};
#endif