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
 * Purpose: Validar datos ingresados por consola
 ***********************************************************************/

#if !defined(__Validaciones_h)
#define __Validaciones_h

#include<iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
class Validaciones
{
	public:
		Validaciones();
		bool validarEntero(string cadena);
		bool validarFltoDbl(string cadena);
		bool validarEnterosPos(string cadena);
		
	
};

////////////////////////////////////////////////////////////////////////
// Name:       Validaciones::Validaciones()
// Purpose:    Constructor of  class Validaciones
// Parameters: 
////////////////////////////////////////////////////////////////////////
Validaciones::Validaciones()
{
	
}

////////////////////////////////////////////////////////////////////////
// Name:      Validaciones::validar(string cadena, int tipo) 
// Purpose:    Implementation of  Validaciones::validar(string cadena, int tipo) 
// Parameters: string cadena, int tipo
// Return:     bool
////////////////////////////////////////////////////////////////////////
bool Validaciones::validarEntero(string cadena)
{
	int cont = 0;
	try {
		for (size_t i = 0; i < cadena.length(); i++) {
			if (isalpha(cadena[i])) {
				
				throw 1;
			}
			if (!isdigit(cadena[i]) && cadena[i] != '-'  ) {

				throw 1;
			}	
			if (cadena[i] == '-') {

				cont ++;
			}
			if (cont > 1) {

				throw 1;
			}
		}
				
	}
	catch (int e) {
		return true;
	}	
	return false;	
}
bool Validaciones::validarFltoDbl(string cadena)
{
	int cont = 0;
	int tip =1;
	try {
		for (size_t i = 0; i < cadena.length(); i++) {
		if (isalpha(cadena[i])) {
				throw 1;
			}
			if (!isdigit(cadena[i])&& cadena[i] == '.') {
				cont++;
			}
			if (!isdigit(cadena[i])&& cadena[i] == '-') {
				cont++;
			}
			if ((cont>2)) {				
				throw 1;
			}			
		}	
	}
	catch (int e) {
		return true;
	}	
	return false;
	
}
bool Validaciones::validarEnterosPos(string cadena)
{
		int cont = 0;
		try {
		for (size_t i = 0; i < cadena.length(); i++) {
			if (isalpha(cadena[i])) {
				
				throw 1;
			}
			if (!isdigit(cadena[i]) ) {

				throw 1;
			}	
		
		}
				
	}
	catch (int e) {
		return true;
	}	
	return false;	
}



#endif
