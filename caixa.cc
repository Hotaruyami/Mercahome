#include "caixa.hh"
#include <string>
#include "temps.cc"

caixa::caixa(){
	
	queue<client> cua;
	hora = "00:00:00";
	estat = -1;
	
}

caixa::~caixa(){}

int caixa::cobrar_client(client& c){
	cjtclients a;
	int i = 0;
	a.afegir_client(c);
	cua.pop();

	int tempsc = a.tempsc_consu(c);

	int horita = de_string_a_int(hora) + tempsc;
	hora = de_int_a_string(horita);
	return tempsc;
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
