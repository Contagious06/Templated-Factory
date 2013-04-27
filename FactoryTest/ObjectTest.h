#ifndef OBJECTTEST_H
#define OBJECTTEST_H

#include <iostream>

class A {
public:
	virtual void print() = 0;
};

class B : public A {
public:
	void print() {
		std::cout << "B: Hello World!" << std::endl;
	}
};

class C : public A {
public:
	void print() {
		std::cout << "C: World, Hello!" << std::endl;
	}
};

class D : public A {
public:
	void print() {
		std::cout << "D: Nothing!" << std::endl;
	}
};


class AA {
public:
	virtual void print() = 0;
};

class BB : public AA {
public:
	void print() {
		std::cout << "BB: Hello World!" << std::endl;
	}
};

class CC : public AA {
public:
	void print() {
		std::cout << "CC: World, Hello!" << std::endl;
	}
};

class DD : public AA {
public:
	void print() {
		std::cout << "DD: Nothing!" << std::endl;
	}
};

#endif