#pragma once
#include "apple.h"
#include "ifruit_producer.h"

class AppleProducer: public IFruitProducer {
public:
	std::unique_ptr<IFruit> Produce() override;
};
