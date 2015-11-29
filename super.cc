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
void optim (client comprador){
	//FER
}


vector<producte> super::productes_seccio(string seccio){
	
	return mercat[int(seccio[0])][int(seccio[1])].productes();

}

int super::CaixaDesti(int &Xmax,int y,client c, int &NumProd,cjtclients &clients) {
	int i = 0;


	int climin = 0;
	
	while (i < caixes.size()){
		if (clients.vectorprod(c).size() > 10){
			if (i == 0) climin = i;
			else if(caixes[i].n_clients() <= caixes[climin].n_clients() and caixes[i].estat_caixa() == 0)climin = i;
		}
		else {
			if (i == 0) climin = i;
			else if(caixes[i].n_clients() <= caixes[climin].n_clients() and caixes[i].estat_caixa() != -1)climin = i;

		}
		++i;
	}


	return climin;
}

int super::SimulacioCaixes(int& normals,int& rapides){
	for (int i = caixes.size()-1; i >= 0; --i){
		if (normals + rapides > 0){
			if (i % 2 == 0) {
				caixes[i].cambiar_estat(1);
				--rapides;
			}
			else{
				caixes[i].cambiar_estat(0);
				--normals;
			}
		}	
		else caixes[i].cambiar_estat(-1);
	}
	int i = 0;
	while (i < clients.size()){

	}
	int caixa = CaixaDesti()
}
