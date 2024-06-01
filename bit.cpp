#include "bit.hpp"

int main() {
	Bit* bit = new Bit;
	bit->setValue(8);
	bit->get_Value_bit();
	std::cout << "\ninteger: " << bit->getValue() << std::endl;
	bit->set(2);
	bit->get_Value_bit();
	std::cout << "\nset: " << bit->getValue() << std::endl; 
	bit->reset(2);
	bit->get_Value_bit();
	std::cout << "\nreset: " << bit->getValue() << std::endl;
	bit->flip(2);
	bit->get_Value_bit();
	std::cout << "\nflip: " << bit->getValue() << std::endl;
	std::cout << "test: " << std::boolalpha << bit->test(2) << std::endl; 
	std::cout << "all: " << std::boolalpha << bit->all() << std::endl;
	std::cout << "any: " << std::boolalpha << bit->any() << std::endl;
	std::cout << "none: " << std::boolalpha << bit->none() << std::endl;
	std::cout << "count: " << std::boolalpha << bit->count() << std::endl;
	delete bit;
}