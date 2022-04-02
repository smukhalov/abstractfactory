#pragma once
#include <memory>
#include <string>
#include "ifruit.h"

class Fabrica {
public:
	std::unique_ptr<IFruit>	Produce(const std::string& name);
};


