#include <iostream>
#include "BaseFactory.h"
#include "TemplatedFactory.h"
#include "Factory.h"
#include "ObjectTest.h"

int main() {

	std::cout << "----Testing FactA----" << std::endl;

	Factory<A> factA;

	factA.registerObjFactory<B>(std::string("B"));
	factA.registerObjFactory<C>(std::string("C"));
	factA.registerObjFactory<D>(std::string("D"));

	factA.createObject("B")->print();
	factA.createObject("C")->print();
	factA.createObject("D")->print();

	std::cout << std::endl;


	std::cout << "----Testing FactAA----" << std::endl;

	Factory<AA> factAA;

	factAA.registerObjFactory<BB>(std::string("BB"));
	factAA.registerObjFactory<CC>(std::string("CC"));
	factAA.registerObjFactory<DD>(std::string("DD"));

	factAA.createObject("BB")->print();
	factAA.createObject("CC")->print();
	factAA.createObject("DD")->print();


	getchar();

	return 0;
}