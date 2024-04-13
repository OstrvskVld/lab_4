

#ifndef LABA_4_WRONGPASSWORD_H
#define LABA_4_WRONGPASSWORD_H

#include <iostream>

class WrongPassword: public std::exception{
public:
    WrongPassword() = default;
    ~WrongPassword() = default;

    const char *what() const noexcept override{
        return "Password is wrong! Try again!";
    }
};

#endif //LABA_4_WRONGPASSWORD_H
