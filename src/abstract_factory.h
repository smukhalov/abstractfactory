#pragma once
#include <string>
#include <memory>
#include <unordered_map>

#include "ifruit_producer.h"

class AbstractFactory {
public:
	void RegisterProducer(const std::string& name, std::unique_ptr<IFruitProducer> producer);
	std::unique_ptr<IFruit> ProduceFruit(const std::string& name);

private:
	std::unordered_map<std::string, std::unique_ptr<IFruitProducer>> producers;
};
