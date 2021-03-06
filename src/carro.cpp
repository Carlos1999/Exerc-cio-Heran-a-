#include <iostream>
#include <string>
#include "veiculo.h"
#include "pessoa.h"
#include "carro.h"
using namespace std;
Carro::Carro(string cor_,string modelo_, string ano_, string placa_,  Pessoa * proprietario_, double volumePortaMalas_):
	Veiculo(cor_,modelo_, ano_, placa_, proprietario_),m_volumePortaMalas(volumePortaMalas_){

}
Carro::~Carro(){

}

double Carro::getVolumePortaMalas(){
	return m_volumePortaMalas;
}
void Carro::setVolumePortaMalas(double volume_){
	m_volumePortaMalas = volume_;
}
void Carro::ligar(){
	cout<<"Carro Ligou"<<endl;
}

void Carro::andar(){
	cout<<"Carro Andou"<<endl;
}

void Carro::parar(){
	cout<<"Carro Parou"<<endl;
}

void Carro::print(){
	cout<<"Cor: "<< m_cor<<endl;
	cout<<" |Modelo: " <<m_modelo<<endl;
	cout<<" |Ano: " <<m_ano<<endl;
	cout<<" |Placa: " <<m_placa<<endl;
	cout<<" |Nome do Proprietario: " <<m_proprietario->getIdentificador()<<endl;
	cout<<" |Idade do Proprietario: "<<m_proprietario->getIdade()<<endl;
	cout<<" |Volume do Portamalas: "<< m_volumePortaMalas<<endl;
}