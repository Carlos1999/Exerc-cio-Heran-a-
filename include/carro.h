#ifndef CARRO_H
#define CARRO_H

#include <string>
#include "pessoa.h"
#include "veiculo.h"
using namespace std;

class Carro: public Veiculo{
private:
		double m_volumePortaMalas;

public:
	Carro(string cor_,string modelo_, string ano_, string placa_, Pessoa * proprietario_, double volumePortaMalas_);
	~Carro();
	double getVolumePortaMalas();
	void setVolumePortaMalas(double volume_);
	void ligar();
	void andar();
	void parar();		
	void print();
};
#endif