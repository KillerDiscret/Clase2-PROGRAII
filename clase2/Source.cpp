#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;

class Primera
{
	//Atributos
private:
	int x;
	int y;
public:
	Primera();
	~Primera();
	void set_x(int valor);
	void set_y(int valor);
	int get_x();
	int get_y();
};
Primera::Primera()
{
	x = 0;
	y = 0;

}
Primera::~Primera()
{

}
void Primera::set_x(int valor)
{
	this->x = valor;
}
void Primera::set_y(int valor)
{
	y = valor;
}
int Primera::get_x()
{

	return x;
}
int Primera::get_y()
{

	return y;
}

int main()
{
	Primera *objt1;//define variables
	//instanciar objetos
	objt1 = new Primera();
	cout << "Atributo x= " << objt1->get_x();
	objt1->set_y(666);
	cout << "Atributo y: " << objt1->get_y();



	_getch();
	return 0;
}