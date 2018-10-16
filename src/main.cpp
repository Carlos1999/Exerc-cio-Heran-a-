#include <iostream>
#include <string>
#include "veiculo.h"
#include "pessoa.h"
#include "carro.h"
using namespace std;

int main(){
	Pessoa *p = new Pessoa("Carlos",19);
	Carro *c = new Carro("Branco","Impala", "1967", "SLA-9999", p, 40.0);
	c->ligar();
	c->andar();
	c->parar();
	c->print();









	return 0;
}