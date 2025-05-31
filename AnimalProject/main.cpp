#include "AnimalStudio.h"

int main()
{
	AnimalStudio studio;

	/*Animal animal("Animal");
	Cat cat1("Sharly");
	Cat cat2("Adel");
	Cat cat3("Masha");
	Dog dog1("Pushok");
	Dog dog2("Laika");
	Dog dog3("Sharik");
	Crocodile crocodile("Aligator");*/

	Animal** animals;
	int size = 8;
	//animals = new Animal*[size] {&animal, &cat1, &cat2, &cat3, &dog1, &dog2, &dog3, &crocodile};

	animals = new Animal*[size] {new Dog("Sharly"), new Cat("Adel"), new Crocodile("Aligator")};

	studio.justDoIt(animals, size);

	return 0;
}