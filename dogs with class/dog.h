#pragma once
#include <iostream>
#include<string>
using namespace std;
class Dog
{
private:
	string color;
	string eat;
	int size;
	string lai;
public:
	void setDog(string col, int siz) {
		size = siz;
		color = col;
		eat = "Dog eating...";
		lai = "Dog laet...";
	}
	void getDog() {
		cout << "Size dog = " << size << endl;
		cout << "Color dog " << color << endl;
		cout << eat << endl;
		cout << lai << endl;
	}
	Dog() {
		cout << "dog create" << endl;
	}
	Dog(string col, int siz) {
		color = col;
		size = siz;
	}
	~Dog() {
		cout << "detele dog" << endl;
	}

};
