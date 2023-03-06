#include <iostream>
#ifndef FELIDAE_HPP
#define FELIDAE_HPP

class Felidae {
    public:
        void set_species(std::string species);
        std::string get_species();
        bool hunt();
        virtual void make_sound();
        // add a destructor
        virtual ~Felidae();
    protected:
        std::string _species;
};

#endif