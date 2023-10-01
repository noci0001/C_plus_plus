#include "Animal.hpp"

class Cat : public Animal
{
private:
    std::string _type;

public:
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    ~Cat();
    void makeSound() const;
};