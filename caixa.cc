#include "caixa.hh"

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

string caixa::temps_de_la_cua(string temps){

}
