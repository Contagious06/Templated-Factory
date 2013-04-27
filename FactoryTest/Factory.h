#ifndef FACTORY_H
#define FACTORY_H
#include <string>
#include <map>

#include "BaseFactory.h"
#include "TemplatedFactory.h"

template <class T>
class Factory {
public:
	Factory() { }

	~Factory() {
		clearObjectFactories();
	}

	T* createObject(const std::string &name) {
		auto it = m_objectFactories.find(name);

		if(it != m_objectFactories.end()) {
			
			return it->second->create();
		}

		return nullptr;
	}

	template <class H>
	void registerObjFactory(const std::string &name) {
		m_objectFactories[name] = new TemplatedFactory<T, H>();
	}

	void clearObjectFactories() {
		for(auto it = m_objectFactories.begin(); it != m_objectFactories.end(); it++) {
			delete it->second;
		}

		m_objectFactories.clear();
	}
private:
	std::map<std::string, BaseFactory<T>*> m_objectFactories;
};

#endif