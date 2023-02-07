#include "const_example.h"

int write_to_file(const char* const path) {
    //path = "dummy.txt";
    FILE *file;
    file = fopen(path, "w");
    if(file == NULL) {
        fprintf(stderr, "Couldn't open file\n");
        return 2;
    }
    fprintf(file, "May the force be with you\n");
    fclose(file); // without close you will have memory leaks
    return 0;
}

