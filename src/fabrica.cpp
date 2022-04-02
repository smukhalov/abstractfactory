#include <memory>
#include <string>

#include "apple.h"
#include "orange.h"
#include "fabrica.h"

std::unique_ptr<IFruit>
Fabrica::Produce(const std::string& name){
	if(name == "orange"){
		 return std::make_unique<Orange>();
	} else if(name == "apple"){
		 return std::make_unique<Apple>();
	} else {
		return nullptr;
	}
}

