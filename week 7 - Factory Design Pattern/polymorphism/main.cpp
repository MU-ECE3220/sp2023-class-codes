#include "Kitten.hpp"
#include "Tiger.hpp"
#include <vector>

int main () {

    std::vector<Felidae*> big_small_cats;
    Kitten* k = nullptr;
    k = new Kitten();
    //k->make_sound();
    big_small_cats.push_back(k);

    Tiger* t = nullptr;
    t = new Tiger();
    //t->make_sound();
    big_small_cats.push_back(t);

    for(Felidae* f : big_small_cats) {
        f->make_sound();
    }

    // FIX ME
    for(Felidae* f : big_small_cats) {
        delete f;
    }


    return EXIT_SUCCESS;
}