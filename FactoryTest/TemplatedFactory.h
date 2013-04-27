#ifndef TEMPLATEDFACTORY_H
#define TEMPLATEDFACTORY_H

template <class T, class H>
class TemplatedFactory : public BaseFactory<T> {
public:
	T* create() {
		return new H();
	}
};

#endif