#include "caixa.hh"
#include <string>
#include "temps.cc"

caixa::caixa(int estat){
	
	queue<client> cua;
	hora = "00:00:00";
	this->estat = estat;
	
}

caixa::~caixa(){}

int caixa::cobrar_client(client& c){
	/**cjtclients a;
	int i = 0;
	
	a.afegir_client(c);
	
	
	cua.pop();
	int tempsc = 0;
	//error: no es pot igualar
	//fer consultar producte super
	vector <producte> prod = a.vectorprod(c);
	while (i < prod.size()){
		tempsc = tempsc + prod[i].consultar_tempsc();
		i = i + 1;
	}
	int horita = de_string_a_int(hora) + tempsc;
	hora = de_int_a_string(horita);
	return tempsc;
	*/
}

void caixa::afegir_client(client& c){
	cua.push (c);
	hora = c.instant;
}

void caixa::cambiar_estat(int estat){
	this->estat = estat;

}
void caixa::esborrar_client(){
	cua.pop();

}
int caixa::n_clients (){
	return cua.size();
}
int caixa::consultar_hora(){ 
	return de_string_a_int(hora);
}
int caixa::estat_caixa(){
	return estat;
}
string caixa::temps_de_la_cua(const client& c){
	
	return hora;
}
