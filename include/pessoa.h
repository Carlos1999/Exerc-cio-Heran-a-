#ifndef PESSOA_H
#define PESSOA_H
#include <string>	

using namespace std;

class Pessoa{
private:
	string m_identificador; 
	int m_idade;
public:
	Pessoa(string identificador_, int idade_);
	~Pessoa();

string getIdentificador();

void setIdentificador(string identificador_);

int getIdade();

void setIdade(int idade_);

};
#endif