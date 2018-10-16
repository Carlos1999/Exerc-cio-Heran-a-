#include <iostream>
#include "veiculo.h"
#include <string>
using namespace std;

Veiculo::Veiculo(string cor_,string modelo_, string ano_, string placa_, Pessoa * proprietario_):
	m_cor(cor_),m_modelo(modelo_),m_ano(ano_),m_placa(placa_),m_proprietario(proprietario_){

}

Veiculo::~Veiculo(){
}

void Veiculo::ligar(){
	cout<<"Veiculo Ligou"<<endl;
}

void Veiculo::andar(){
	cout<<"Veiculo Andou"<<endl;
}

void Veiculo::parar(){
	cout<<"Veiculo Parou"<<endl;
}