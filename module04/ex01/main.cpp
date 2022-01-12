#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// const Animal *j = new Dog();
	// const Animal *i = new Cat();
	// delete j; //should not create a leak
	// delete i;
	Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	for (int i = 0; i < 10; i++)
		delete animals[i];

	Cat *cat = new Cat;
	Cat *copy = new Cat(*cat);

	std::cout << cat->getBrain() << std::endl;
	delete cat;

	std::cout << copy->getBrain() << std::endl;
	delete copy;

	std::cout << "--------- Dog and dog copy ------------" << std::endl;
	Dog *dog = new Dog;
	Dog *copy2 = new Dog(*dog);

	std::cout << dog->getBrain() << std::endl;
	delete dog;

	std::cout << copy2->getBrain() << std::endl;
	delete copy2;
}