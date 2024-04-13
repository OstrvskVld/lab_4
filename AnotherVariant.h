
#ifndef LABA_4_ANOTHERVARIANT_H
#define LABA_4_ANOTHERVARIANT_H
#include <iostream>
class AnotherVariant: public std::exception{
public:
    AnotherVariant() = default;
    ~AnotherVariant() = default;

    const char *what() const noexcept override{
        return "Choose another variant!";
    };
};
#endif //LABA_4_ANOTHERVARIANT_H
