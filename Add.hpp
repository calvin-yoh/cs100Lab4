#ifndef __ADD_HPP__
#define __ADD_HPP__

class Base;

class Add : public Base {
    public:
        Add(Base* value1,Base* value2) : Base()
 {
        this->left = value1;
        this->right = value2;
 }
        virtual double evaluate() { return this->left->evaluate() +  this->right->evaluate();}
        virtual std::string stringify()
        {
                return this->left->stringify() + " + " + this->right->stringify();
        }
};

#endif //__ADD_HPP__

