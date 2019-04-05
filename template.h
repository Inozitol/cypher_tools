#include <iostream>

class Template{
	public:
		std::string print(){return _output;};
	protected:
		std::string _input;
		std::string _output;
};
