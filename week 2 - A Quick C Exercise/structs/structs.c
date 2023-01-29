#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Order your member in descending order (by size)
typedef struct Student {
    double gpa; // 8 bytes
    int age;    // 4 bytes
    char name[50];  // 1 byte
} StudentInformation;


int main() {

    StudentInformation* st1 = NULL;
    // 1) During allocation it will also initialize the memory
    // 2) Allocate in fixed blocks
    st1 = calloc(1, sizeof(*st1));
    // 1) Only allocates and doesn't initialize
    // 2) Allocation a full segment
    //st1 = malloc(5*sizeof(*st1));

    st1->age = 20;
    st1->gpa = 3.45;
    strncpy(st1->name, "Ekincan Ufuktepe", 50);

    printf("Name: %s\n", st1->name);
    printf("Age: %d\n", st1->age);
    printf("GPA: %lf\n", st1->gpa);

    StudentInformation st2;
 
    st2.age = 25;
    st2.gpa = 2.41;
    strncpy(st2.name, "Ekin version 2", 50);

    printf("Name: %s\n", st2.name);
    printf("Age: %d\n", st2.age);
    printf("GPA: %lf\n", st2.gpa);


    // Test the allocation based on struct member order
    /*
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(char));
    printf("%ld\n", sizeof(double));
    printf("%ld\n", sizeof(*st1));
    */
    
    return 0;
}