#ifndef __DIV_HPP__
#define __DIV_HPP__

class Base;

class Div : public Base {
    public:
        Div(Base* value1,Base* value2) : Base() 
	{
        this->left = value1;
	this->right = value2; 
        }
        virtual double evaluate() { return this->left->evaluate() / this->right->evaluate();}
        virtual std::string stringify()
        {
                return this->left->stringify() + " / " + this->right->stringify();
        }
};
#endif //__DIV_HPP__
~
