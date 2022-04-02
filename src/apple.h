#pragma once
#include <string>
#include "ifruit.h"

class Apple: public IFruit {
public:
	std::string GetDescription() override;
};
