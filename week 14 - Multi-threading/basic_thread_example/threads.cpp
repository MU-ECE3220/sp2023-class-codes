#include <iostream>
#include <pthread.h>

void* task(void* arg);

int total = 0;

int main(int argc, char* argv[]) {
    if(argc != 2) {
        std::cerr << "You need 2 arguments\n";
        return EXIT_FAILURE;
    }
    if(atoi(argv[1]) <= 0) {
        std::cerr << "Argument needs to be positive integer\n";
        return EXIT_FAILURE;
    }

    int num_of_threads = atoi(argv[1]);
    pthread_t tid[num_of_threads];

    // Create threads
    for(int i=0; i<num_of_threads; i++) {
        pthread_create(&tid[i], NULL, task, NULL);
    }

    // Join threads, main thread will wait for the created threads
    for(int i=0; i<num_of_threads; i++) {
        pthread_join(tid[i], NULL);
    }

    std::cout << "Total: " << total << std::endl;

    return EXIT_SUCCESS;
}

void* task(void* arg) {
    for(int i=0; i<100; i++) {
        total++;
    }
    pthread_exit(0);
}
