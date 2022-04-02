#pragma once

#include <memory>
#include "ifruit.h"

class IFruitProducer {
public:
	virtual ~IFruitProducer() = default;
	virtual std::unique_ptr<IFruit> Produce() = 0;
};




