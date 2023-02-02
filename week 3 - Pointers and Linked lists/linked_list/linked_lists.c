#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CLASSROOM_CAPACITY 3

// Order your member in descending order (by size)
typedef struct Student {
    double gpa; // 8 bytes
    int age;    // 4 bytes
    char name[50];  // 1 byte
    struct Student* next; 
} StudentInformation;

int initialize_linkedlist(StudentInformation* head);
void print_linkedlist(StudentInformation* head);
int empty_linkedlist(StudentInformation* head);

int main() {

    StudentInformation* head = NULL;
    head = calloc(1, sizeof(*head));
    head->age = -1;
    head->gpa = -1.0;
    head->next = NULL;

    initialize_linkedlist(head);
    print_linkedlist(head);
    empty_linkedlist(head);

    return 0;
}

int initialize_linkedlist(StudentInformation* head) {
    StudentInformation* current = NULL;
    current = head;

    for(int i=0; i<CLASSROOM_CAPACITY; i++) {
        StudentInformation* tmp = NULL;
        tmp = calloc(1, sizeof(*tmp));
        scanf("%s", tmp->name);
        scanf("%d", &tmp->age);
        scanf("%lf", &tmp->gpa);
        current->next = tmp;
        current = current->next;
    }

    return 1;
}

void print_linkedlist(StudentInformation* head) {
    StudentInformation* current = NULL;
    current = head->next;
    
    while (current != NULL) {
        printf("name: %s\n", current->name);
        printf("age: %d\n", current->age);
        current = current->next;
    }
}

int empty_linkedlist(StudentInformation* head) {
    StudentInformation* current = NULL;
    current = head;
    
    while (current != NULL) {
        StudentInformation* p = NULL;
        p = current;
        current = current->next;
        free(p);
    }

    return 1;
}

