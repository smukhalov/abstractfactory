#include "orange.h"
#include "orange_producer.h"

std::unique_ptr<IFruit> OrangeProducer::Produce() {
	return std::make_unique<Orange>();
}
