#pragma once

#include <string>

class IFruit {
public:
	virtual ~IFruit() = default;
	virtual std::string GetDescription() = 0;
};




