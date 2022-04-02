#include "abstract_factory.h"

void AbstractFactory::RegisterProducer(const std::string& name,
		std::unique_ptr<IFruitProducer> producer){
	producers.insert({name, std::move(producer)});
}

std::unique_ptr<IFruit> AbstractFactory::ProduceFruit(const std::string& name){
	auto it = producers.find(name);
	if(it == producers.end()){
		return nullptr;
	}

	return it->second->Produce();
}
