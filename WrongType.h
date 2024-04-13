
#ifndef LABA_4_WRONGTYPE_H
#define LABA_4_WRONGTYPE_H

#include <iostream>
class WrongType: public std::exception{
public:
    WrongType() = default;
    ~WrongType() = default;

    const char *what() const noexcept override{
        return "Program is failed!!!";
    };
};

#endif //LABA_4_WRONGTYPE_H
