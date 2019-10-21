#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <cstdlib>
class Rand : public Base {
    public:
        Rand(double value) : Base() { }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { string s = to_string(value); return s; }
};

#endif //__RAND_HPP__
~                       
