#include "caixa.hh"
#include <string>

caixa::caixa(int estat){
	maxcua = 20;
	cua = queue<client>(maxcua);
	hora = "00:00:00”;
	this->estat = estat;
	

}
caixa::~caixa(){}

void caixa::cobrar_client(){


}
void caixa::afegir_client(client& c){
	cua.push (c);
}

void caixa::cambiar_estat(int estat){
	this->estat = estat;

}
void caixa::esborrar_client(){
	cua.pop();

}

int caixa::estat_caixa(){
	return estat;
}
// esta bastan liada la cosa nose com agafar el string i sumarlo xd, miratho aver.
string caixa::temps_de_la_cua(string temps){
	string aux,auxhora;
	int aux1,inthora;
	for (int i = 0; i < ;++i){
		aux = temps[i]+temps[i+1];
		aux1 = int(aux);
		auxhora = hora[i]+hora[i+1];
		inthora = int(auxhora);
		if (aux1 + auxhora < 60){
		aux1 = aux1 + auxhora;
		hora = hora + str(aux1) + ":";
		}
		else {
		if (i = 0) i = ;
		else{
		aux1 = (aux1+auxhora)mod60
		}
		}	
		
	
	}
}
