#pragma once
#include "ifruit_producer.h"

template <typename TFruit>
class FruitProducer: public IFruitProducer {

	static_assert(std::is_base_of<IFruit, TFruit>(), "TFruit must inherit from IFruit");

	std::unique_ptr<IFruit> Produce() override {
		return std::make_unique<TFruit>();
	}
};
