#pragma once

#include "Transport.h"

class Airplane : public Transport
{
public:
	Airplane(int tank) : Transport(tank) {}
};