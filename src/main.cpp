#include <iostream>
#include <string>
#include <memory>

/*
#include "apple_producer.h"
#include "orange_producer.h"
*/

#include "apple.h"

#include "abstract_factory.h"
#include "fruit_producer.h"

using namespace std;

int main() {
	AbstractFactory factory;

	factory.RegisterProducer("apple", std::make_unique<FruitProducer<Apple>>());
	auto apple = factory.ProduceFruit("apple");
	cout << apple->GetDescription() << endl;

	/*factory.RegisterProducer("apple", std::make_unique<AppleProducer>());
	auto apple = factory.ProduceFruit("apple");
	cout << apple->GetDescription() << endl;

	factory.RegisterProducer("orange", std::make_unique<OrangeProducer>());
	auto orange = factory.ProduceFruit("orange");
	cout << orange->GetDescription() << endl;*/
	return 0;
}
