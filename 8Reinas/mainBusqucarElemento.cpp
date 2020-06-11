#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define TAM 10
using namespace std;
float buscarElemento(int *, int);
float buscarElemento(int *A, int x){
	int i, p=0,sw=0;
	float n;
	n=(float)TAM;
	for(i=0;i< TAM;i++){
		if(A[i]==x){
			p=i;
			sw=1;
			break;
		}
	}
	if(sw==0){
		cout<<"dato no encontrado"<<endl;
		p=TAM;
	}
	n=(float)p*(p+1)/(2*p);
	return n;
}

int main(int argc, char** argv) {
	int A[TAM],i;
	for(i=0;i< TAM;i++){
		std::cout<<"Ingrese el valor "<<i+1<<std::endl;
		std::cin>>A[i];
	}
	std::cout<<"Tiempo en encontrar el elemento"<<buscarElemento(A,5)<<std::endl;
	return 0;
}
