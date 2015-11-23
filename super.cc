#include "Super.hh"

super::super(){
	seccions = vector<vector<seccio>>(10(10));
	caixes = vector<caixa>(10);
	temps = "00:00:00";
	productes = vector<producte>(40);
}

super::super(vector<vector <seccio>> seccions,vector <caixa> caixes){
	
	this->seccions = seccions;
	this->caixes = caixes;
	temps = "00:00:00"
	productes = vector<producte>(40);
}

super::~super(){}

super::afegir_producte(Producte prod){
	int i = 0;
	Producte aux;
	bool b = false;
	while (not b and i < productes.size()){
	if (productes[i]==aux){
	productes[i] = prod;
	b = true;
	}
	
	i = i+1;
	}
	if (not b)productes.push_back(prod);
	

}

producte super::consultar_producte(string nom){
	int i = 0;
	bool trobat = false;
	while (not trobat and i < productes.size()){
	
	if(nom == productes[i].consultar_nom()) return productes[i];
	
	++i;
	}
	if (not b) cout << "error" << endl;

}
vector<producte> super::productes_seccio(string seccio){
	
	return mercat[int(seccio[0])][int(seccio[1])].productes();

}

