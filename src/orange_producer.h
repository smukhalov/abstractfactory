#pragma once
#include "orange.h"
#include "ifruit_producer.h"

class OrangeProducer: public IFruitProducer {
public:
	std::unique_ptr<IFruit> Produce() override;
};
