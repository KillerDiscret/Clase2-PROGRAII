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
	void set_x(int resultado);
	void set_y(int resultado);
	int get_x();
	int get_y();
	int suma();
	int resta();
	int multiplicacion();
	double Division();
};
Primera::Primera()
{
	x = 0;
	y = 0;

}
Primera::~Primera()
{

}
void Primera::set_x(int resultado)
{
	this->x = resultado;
}
void Primera::set_y(int resultado)
{
	y = resultado;
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
	R_suma = x + y;
	return R_suma;
}
int Primera::resta()
{
	int R_resta;
	R_resta = x - y;
	return R_resta;
}
int Primera::multiplicacion()
{
	int R_multiplicacion;
	R_multiplicacion = x*y;
	return R_multiplicacion;
}
double Primera::Division()
{
	double R_division;
	R_division = x*1.0 / y;
	return R_division;
}


int main()
{
	Primera *objt1;//define variables
	//instanciar objetos
	objt1 = new Primera();
	int resultado;
	cout << "Ingrese el valor para X: " << endl;
	cin >> resultado;
	objt1->set_x(resultado);
	cout << "Ingrese el valor de Y: " << endl;
	cin >> resultado;
	objt1->set_y(resultado);
	cout << "La suma es: " << objt1->suma() << endl;
	cout << "La resta es: " << objt1->resta() << endl;
	cout << "La multiplicacion es: " << objt1->multiplicacion() << endl;
	cout << "La division es: " << objt1->Division() << endl;
	_getch();
	return 0;
}