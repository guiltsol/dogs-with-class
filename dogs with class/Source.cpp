#include "homedog.h"
using namespace std;

int main()
{
	cout << "Default dog/////////////////////////////" << endl;
	Dog d1, d3("white", 90);
	d1.setDog("Black", 60);
	d1.getDog();
	d3.getDog();
	cout << "Home dog/////////////////////////////////" << endl;
	HomeDog d2, d4("orange", 80, "omlet");
	cout << "///////////////////////////////////////" << endl;
	d2.setHDog("IVAN", "Sharik", "NN.lenina.32");
	d2.getHDog();
	d4.getHDog();
	return 0;

}