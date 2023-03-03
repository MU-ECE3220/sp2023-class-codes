#include <exception>

class UndefinedCoinType : public std::exception {
    public:
        const char* what() const throw ();
};