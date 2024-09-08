#ifndef BASE_H
#define BASE_H

class Base {
private:
	static int ID;
	int id;
protected:
	int getId() {
		return id;
	}
public:
	Base() : id(ID++) {};
	virtual ~Base() {};
	// ---
	virtual void outputInfo() = 0;
};
#endif
