#pragma once

#include <string>
#include "ifruit.h"

class Orange: public IFruit {
public:
	std::string GetDescription() override;
};
