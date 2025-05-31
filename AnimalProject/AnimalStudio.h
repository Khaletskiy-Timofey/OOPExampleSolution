#pragma once

#include "Cat.h"
#include "Dog.h"
#include "Crocodile.h"

class AnimalStudio
{
public:
	void justDoIt(Animal** animals, int size)
	{
		for (int i = 0; i < size; i++)
		{
			animals[i]->getVoice();
		}
	}
};