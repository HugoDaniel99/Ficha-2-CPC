
#ifndef CALUNOPROG_H
#define CALUNOPROG_H
#include<iostream>
#include<cstring>
using namespace std;

class CAlunoProg
{
 public:
	 void setNumero(int num); //Altera numero do aluno
	 void setNome(const char *nome); //Altera nome do aluno
	 void setNota(double nota); //Altera nota do aluno
	 int getNumero(); //Retorna numero do aluno
	 char* getNome(); //Retorna o nome do aluno
	 double getNota(); //Retorna a nota do aluno
	 void printAluno(); //Imprime no écran informação do aluno
	 
 private: 
	 int numAluno; //Dados privados
	 char nomeAluno[50]; //(só podem ser alterados
	 double notaAluno; // pelos métodos públicos)! 
};

#endif
