/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
/***********************************************************************
 * Module:  IngresoDatos.h
 * Author:  Abigail Cabascango
 * Modified: domingo, 28 de mayo de 2020 17:51:04
 * Purpose: Ingresar datos por consola
 ***********************************************************************/

#if !defined(__IngresoDatos_h)
#define __IngresoDatos_h
#include<iostream>
#include"Valdacion.h"
using namespace std;
class IngresoDatos{
	public:
		IngresoDatos();
		string ingresarMatrizFltDbl(int i, int j);
		string ingresarMatrizInt(int i, int j);
		string ingresarEntero(string mensage);
		string ingresarEnteroPos(string mesage);
		string ingresarFltDbl();
		string ingresarVecInt(int i);
		string ingresarVecReal(int i);
		
};
////////////////////////////////////////////////////////////////////////
// Name:       IngresoDatos::IngresoDatos()
// Purpose:    Constructor of  class IngresoDatos
// Parameters: 
////////////////////////////////////////////////////////////////////////
 IngresoDatos::IngresoDatos()
{
	
}

////////////////////////////////////////////////////////////////////////
// Name:      string IngresoDatos::ingresar(int i)
// Purpose:    Implementation of  IngresoDatos::ingresar(int i)
// Parameters: int i
// Return:     string
////////////////////////////////////////////////////////////////////////

string IngresoDatos::ingresarVecReal(int i){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese valor real[" << i <<"]: " ;
 	cin >> entrada;
 	while (val.validarFltoDbl(entrada));
 	{
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
string IngresoDatos::ingresarVecInt(int i){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese valor entero[" << i <<"]: " ;
 	cin >> entrada;
 	while (val.validarEntero(entrada));
 	{
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
string IngresoDatos::ingresarFltDbl(){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese valor real:  " ;
 	cin >> entrada;
 	while (val.validarFltoDbl(entrada))
 	{
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}

////////////////////////////////////////////////////////////////////////
// Name:      string IngresoDatos::ingresar(int i)
// Purpose:    Implementation of  IngresoDatos::ingresar()
// Parameters: 
// Return:     string
////////////////////////////////////////////////////////////////////////
string IngresoDatos::ingresarEnteroPos(string mesage){
	Validaciones val;
 	string entrada;
 	cout<< mesage;
 	cin >> entrada;
 	while (val.validarEnterosPos(entrada))
 	{
 		cout << "\nIngreso equivocado vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
////////////////////////////////////////////////////////////////////////
// Name:      string IngresoDatos::ingresar(int i)
// Purpose:    Implementation of  IngresoDatos::ingresar(string mensage)
// Parameters: string mensage
// Return:     string
////////////////////////////////////////////////////////////////////////
string IngresoDatos::ingresarEntero(string mensage){
	Validaciones val;
 	string entrada;
 	cout<< mensage ;
 	cin >> entrada;
 	while (val.validarEntero(entrada))
 	{
 		cout << "\nIngreso equivocado vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
////////////////////////////////////////////////////////////////////////
// Name:      IngresoDatos::ingresar(int i, int j)
// Purpose:    Implementation of  IngresoDatos::ingresar(int i, int j)
// Parameters: int i, int j
// Return:     string
////////////////////////////////////////////////////////////////////////
string IngresoDatos::ingresarMatrizInt(int i, int j){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese valor[" << i << "][ " << j <<"]: " ;
 	cin >> entrada;
 	while (val.validarEntero(entrada))
 	{
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
string IngresoDatos::ingresarMatrizFltDbl(int i, int j){
	Validaciones val;
 	string entrada;
 	cout<< "\nIngrese valor[" << i << "][ " << j <<"]: " ;
 	cin >> entrada;
 	while (val.validarFltoDbl(entrada))
 	{
 		cout << "\nIngreso herroneo vuelva a ingresar: ";
 		cin >> entrada;
	 }
	 return entrada;
}
#endif
