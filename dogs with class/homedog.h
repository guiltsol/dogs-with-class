#pragma once
#include "dog.h"	
class HomeDog :public Dog
{
private:
	string person;
	string dogname;
	string adress;
public:
	void setHDog(string per, string name, string add) {
		person = per;
		dogname = name;
		adress = add;
		setDog("Pink", 55);
	}
	void getHDog() {
		cout << "Hozain " << person << endl;
		cout << "Dog name " << dogname << endl;
		cout << "Dog adress " << adress << endl;
		getDog();
	}
	HomeDog() { cout << "Home dog create " << endl; }
	HomeDog(string col, int siz, string name) :Dog(col, siz) { dogname = name; }
	~HomeDog() { cout << "Home dog delete" << endl; }
};

