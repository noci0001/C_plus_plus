#include "Dog.hpp"

void Dog::makeSound() const {
    std::cout << "*Bark Bark" << std::endl;
}

std::string Dog::getType()
{
    return (this->_type);
}

Dog::Dog()
{
    std::cout << "Dog Class constructor called!" << std::endl;
    this->_type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Class destructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator overload called." << std::endl;
    if (this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
}

Dog::Dog(const Dog &other) : Animal()
{
    std::cout << "Dog Class copy constructor called!" << std::endl;
    this->_type = other._type;
}