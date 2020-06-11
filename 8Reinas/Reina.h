#include <iostream>
#include <fstream>  

using namespace std;
class Reina{
	public: 
		bool **validar;
		char **tablero;
		fstream archivo;  
		int contador;
		int n;
		int numeroCombinaciones1(int n2){
			if(n2==0){
				return n2-3;
			}else{
				n2+=numeroCombinaciones1(n2-1);
			}
			return n2;
		}
			int numeroCombinaciones2(int n2){
			if(n2==0){
				return n2+3;
			}else{
				
				n2 += numeroCombinaciones2(n2-1)+1;
			}
			return n2;
		}
			int numeroCombinaciones3(int n2){
			if(n2==0){
				return n2+2;
			}else{
				n2+=numeroCombinaciones3(n2-1)+10;
			}
			return n2;
		}
		int numeroCombinaciones4(int n2){
			if(n2==0){
				return n2-1;
			}else{
				n2 += numeroCombinaciones4(n2-1)+54;
			}
			return n2;
		}
		void encerarTablero(){
			for(int i=0;i<n;i++){
				validar[i]=new bool [n];
				tablero[i]=new char[n];
				for(int j=0;j<n;j++){
					*(*(validar+i)+j)=false;
					*(*(tablero+i)+j)='*';
				}
			}
		}
		void crearArchivo(){
			archivo.open("solucion.txt",fstream::out); //para leer in, para salir es out escribir
			archivo<<"solucion "<<n<<"*"<<n<<endl<<endl;
			contador=0;	
		}
		Reina (int n1){
			n=n1;
			validar = new bool *[n];
			tablero= new char *[n];
			encerarTablero();
			crearArchivo();
		}
		void solucion(int x, int y, int n1){
			*(*(tablero+x)+y)='R';
			bloquear(x,y);
			if(n1==n){
				mostrar();
			}else{
				for(int i=0;i<n;i++){
					if(*(*(validar+i)+y+1)==false){
						solucion(i,y+1,n1+1);
					}
				}
			}
			quitarRelleno(x,y);
		}
	   
	   void bloquear(int x,int y){
	   		int aux1,aux2;
	   		aux2=y;
	   		aux1=0;
	   		while(aux1<n){ //vertical
	   			*(*(validar+aux1)+aux2)=true;
	   			aux1++;
			}
			   aux2=0;
			   aux1=x;
			   while(aux2<n){
			    	*(*(validar+aux1)+aux2)=true;
	   			aux2++;	
		    }
		    aux2=y;  //Diagonales
		    aux1=x;
		    while(aux1>0&&aux2>0){
		    	aux1--;
		    	aux2--;
			}
			aux2=y;
			aux1=x;
			 while(aux1<n&&aux2>0){
		    	aux1++;
		    	aux2--;
			}
			aux1--;
			aux2++;
			while(aux1>=0&&aux2<n){
				*(*(validar+aux1)+aux2)=true;
				aux1--;
				aux2++;
			}
	   }
	   void quitarRelleno(int x,int y){
	   		*(*(tablero+x)+y)='*';
	   		for(int i=0;i<n;i++){
	   			for(int j=0;j<n;j++){
	   				*(*(validar+i)+j)=false;
				   }
			   }
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(*(*(tablero+i)+j)=='R')
					bloquear(i,j);
				}
			}
	   }
	   void mostrar(){
	   	contador++;
	   	archivo<<"Solucion N "<<contador<<endl;
	   	for(int i=0;i<n;i++){
	   		for(int j=0;j<n;j++){
	   			archivo<<*(*(tablero+i)+j)<<" ";
			   }
			   archivo<<endl;
		   }
		   archivo<<endl;
		  mostrarConsola();
	   }
	   void solucionReinas(){
	   	for(int i=0;i<n;i++){
	   		solucion(i,0,1);
		   }
		   archivo.close();
	   }
	void mostrarConsola(){
	   	cout<<"Solucion N "<<contador<<endl;
	   	for(int i=0;i<n;i++){
	   		for(int j=0;j<n;j++){
	   			cout<<*(*(tablero+i)+j)<<" ";
			   }
			   cout<<endl;
		   }
		   cout<<endl;
	   }
		void imprimirNumComb(int n2){
			if(n2 == 4)
			{
			archivo<<"Numero de soluciones"<< numeroCombinaciones1(n2)<< endl;
	   		cout<<"Numero de soluciones "<< numeroCombinaciones1(n2)<< endl;
			}
			if(n2 == 5){
				archivo<<"Numero de soluciones"<< numeroCombinaciones2(n2)<< endl;
	   		cout<<"Numero de soluciones "<< numeroCombinaciones2(n2)<< endl;
			}
			if(n2 == 6){
				archivo<<"Numero de soluciones"<< numeroCombinaciones3(n2)<< endl;
	   		cout<<"Numero de soluciones "<< numeroCombinaciones3(n2)<< endl;
			}
			if(n2 == 7){
			archivo<<"Numero de soluciones"<< numeroCombinaciones4(n2)<< endl;
	   		cout<<"Numero de soluciones "<< numeroCombinaciones4(n2)<< endl;	
			}
	   		
	   }
};

