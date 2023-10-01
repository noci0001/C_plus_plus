#include "Animal.hpp"

class Dog : public Animal
{
private:
    std::string _type;

public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    ~Dog();
    std::string getType();
    void makeSound() const;
};