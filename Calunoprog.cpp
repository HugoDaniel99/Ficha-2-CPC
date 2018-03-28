#include"Calunoprog.h"

void CAlunoProg::setNumero(int num)
{   
	numAluno=num;
}
void CAlunoProg::setNome(const char *nome)
{
	strcpy(nomeAluno,nome);
}
void CAlunoProg::setNota(double nota)
{	
	notaAluno=nota;
}

int CAlunoProg::getNumero()
{
	return numAluno;
}
char* CAlunoProg::getNome()
{
	return nomeAluno;
}
double CAlunoProg::getNota()
{
	return notaAluno;
}

void CAlunoProg::printAluno()
{
	cout<<"-----"<<endl;
	cout<<"Ficha do Aluno"<<endl;
	cout<<"Numero:"<<numAluno<<endl;
	cout<<"Nome:"<<nomeAluno<<endl;
	cout<<"Nota:"<<notaAluno<<endl;
	if(notaAluno<9.5)
	cout<<"Reprovado"<<endl;
	else
	cout<<"Aprovado"<<endl;
}


