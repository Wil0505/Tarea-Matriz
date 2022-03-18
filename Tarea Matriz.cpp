#include <iostream>

using namespace std;

int main() 
{
	//Declaro variables
	int filas;
	int columnas;
	int matriz[filas][columnas];
	int i, j;
	int suma = 0;
	int primo = 0;
	//Solicito valores para las filas y columnas
	cout<<"******** BIENVENIDO ********"<<endl;
	cout<<"Ingrese la cantidad de filas que tendra la matriz: ";
	cin>>filas;
	cout<<"Ingrese la cantidad de columnas que tendra la matriz: ";
	cin>>columnas;
	//Ingreso datos a la matriz
	for(i = 0; i < filas; i++) 
	{
		for(j = 0; j < columnas; j++) 
		{
			cout << "Ingrese numero: ";
			cin >> matriz[i][j];
		}
	}
	
	cout<<endl;
	cout<<"La matriz ingresada es: "<<endl;
	cout<<endl;
	
	//Imprimo la matriz
		for(i = 0; i < filas; i++) 
	{
		for(j = 0; j < columnas; j++) 
		{
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	//Sumo los datos ingresados a al matriz

	for(i = 0; i < filas; i++) 
	{
		for(j = 0; j < columnas; j++) 
		{
			suma += matriz[i][j];
		}
	}
	cout << endl;
	cout << "La sumatoria de la matriz es: "<< suma << endl;
	cout << endl;
	//Valido si la sumatoria sea un numero primo o no
	for(i=1;i<=suma;i++)
	{
		if(suma%i==0)
		{
			primo++;
		}
	}
	if(primo>2)
	{
		cout<<"La sumatoria de la matriz NO es un numero primo"<<endl;
	}
	else
	{
		cout<<"La sumatoria de la matriz SI es un numero primo"<<endl;
	}
	return 0;
}
