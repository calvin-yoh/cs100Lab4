#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        Op(double value) : Base() { }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { string s = to_string(value); return s; }
};

#endif //__OP_HPP__
