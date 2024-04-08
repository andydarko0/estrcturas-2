// Estructuras

#include<stdio.h>
#include<string.h>


struct cuenta {
	//Aqui va el codigo de las variables que contendra la estructura
	char nombre[30];
	char apellido[40];
	int identificador;
	int saldo;
};

void imprimir_datos(struct cuenta c){
	printf("El cliente %s %s tiene %d euros en cuenta\n ", c.nombre, c.apellido, c.saldo);
}

int main(){
	struct cuenta c1;
	strcpy(c1.nombre, "chuhito");
	strcpy(c1.apellido, "sanchez");
	c1.identificador = 12345;
	c1.saldo = 400;
	
	imprimir_datos(c1);
	
	return 0; 
}
