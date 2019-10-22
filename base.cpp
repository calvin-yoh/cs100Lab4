#include "base.hpp"


double Base::evaluate()
{
	return this->value;

}

string Base::stringify()
{
	string s = (string)this->value; 
	return s;
}
