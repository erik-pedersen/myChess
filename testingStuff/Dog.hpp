#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {


	public:
		Dog() {}
		void speak() const override {
			std::cout << "Woof\n";
		}
};

#endif
