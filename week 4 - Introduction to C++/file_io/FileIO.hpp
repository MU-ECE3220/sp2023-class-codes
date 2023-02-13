#include <iostream>
#include <fstream>

class FileIO {

    private:
        std::string _filename;
    public:
        bool readFile();
        bool writeFile(std::string filename);
        void setFileName(std::string filename);
        std::string getFileName();
        FileIO(std::string filename);

};