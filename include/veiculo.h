#ifndef VEICULO_H
#define VEICULO_H
#include <string>
#include "pessoa.h"
using namespace std;

class Veiculo{
protected:
		string m_cor;
		string m_modelo;
		string m_ano;
		string m_placa;
		Pessoa * m_proprietario;
		
public:
	Veiculo(string cor_,string modelo_, string ano_, string placa_, Pessoa * proprietario_);
	~Veiculo();
	void ligar();
	void andar();
	void parar();


};

#endif