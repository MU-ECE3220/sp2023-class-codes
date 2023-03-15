#include "code/inc/UndefinedCoinType.hpp"

const char* UndefinedCoinType::what() const throw () {
    return "This is not a coin! Call the guards!!!\n";
}