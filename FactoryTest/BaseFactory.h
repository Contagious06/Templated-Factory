#ifndef BASEFACTORY_H
#define BASEFACTORY_H

template <class T>
class BaseFactory {
public:
	virtual T* create() = 0;
};

#endif