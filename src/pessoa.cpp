#include <iostream>
#include "pessoa.h"
#include <string>	
using namespace std;

Pessoa::Pessoa(string identificador_, int idade_):
	m_identificador(identificador_),m_idade(idade_){
}

Pessoa::~Pessoa(){}

string Pessoa::getIdentificador(){
	return m_identificador;
}

void Pessoa::setIdentificador(string identificador_){

}

int Pessoa::getIdade(){
	return m_idade;
}

void Pessoa::setIdade(int idade_){
	m_idade = idade_;
}