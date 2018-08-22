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
	int suma();
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
int Primera::suma()
{
	int R_suma;
	cout << "Ingrese un valor para x:" << endl;
	cin >> x;
	cout << "Ingrese un valor para y: " << endl;
	cin >> y;
	R_suma = x + y;
	return R_suma;
}

int main()
{
	Primera *objt1;//define variables
	//instanciar objetos
	objt1 = new Primera();
	int resultado;
	resultado = objt1->suma();
	cout << "La suma es: " << resultado;


	_getch();
	return 0;
}