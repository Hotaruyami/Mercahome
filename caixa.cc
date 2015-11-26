#include "caixa.hh"
#include <string>
#include "temps.cc"

caixa::caixa(int estat){
	maxcua = 20;
	cua = queue<client>(maxcua);
	hora = "00:00:00";
	this->estat = estat;
	
}

caixa::~caixa(){}

int caixa::cobrar_client(){
	cjtclients a;
	int i = 0;
	client aux = cua.top();
	cua.pop();
	int tempsc = 0;
	
	vector <producte> prod = a.vectorprod(c);
	while (i < prod.size()){
		tempsc = tempsc + prod[i].consultar_tempsc();
		i = i + 1;
	}
	return tempsc;
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
int consultar_hora(){ 
	//HEM DE TRANSFORMAR-HO A STRING
	return hora;
}
int caixa::estat_caixa(){
	return estat;
}
// esta bastan liada la cosa nose com agafar el string i sumarlo xd, miratho aver.
string caixa::temps_de_la_cua(string temps){
	int aux = de_string_a_int(temps);
	aux = aux + de_string_a_int(hora);
	hora = de_int_a_string(aux);
	return hora;

	
	}