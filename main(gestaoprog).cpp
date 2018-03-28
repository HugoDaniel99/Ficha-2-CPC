//Pretende construir-se a seguinte classe CAlunoProg em C++ que permita guardar o número, nome e
//nota de um aluno da disciplina de Programação. A classe deve ainda permitir a impressão da ficha
//completa do aluno. 

#include "Calunoprog.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	CAlunoProg aluno1;
	int numero;
	double nota;
	char nome[50];
	
	cout<<"Introduza o nome: "<<endl;
	fgets(nome,50,stdin);
	aluno1.setNome(nome);
	
	do{
		cout<<"Introduza o numero de aluno:"<<endl;
		cin>>numero;
		
		if(numero<0 || numero>1000 )
		cout<<"Invalido"<<endl;
		else
		aluno1.setNumero(numero);
	}while (numero<0 || numero>1000);
	
	do{
		cout<<"Introduza a nota final:"<<endl;
		cin>>nota;
		
		if(nota<0.0 || nota>20.0)
		cout<<"Invalido"<<endl;
		else
		aluno1.setNota(nota);
	}while (nota<0.0 || nota>20.0);
	
	aluno1.printAluno();
	
	return 0;
}
