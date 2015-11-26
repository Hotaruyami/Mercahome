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
	int i = caixes.size();
	int caixa = 0;
	
	while (i < Xmax - 1){
		if (clients.vectorprod(c).size() > 10){
			if ((caixes[i].n_clients() > 7 and caixes[i-1].estat_caixa() == 0){
				caixa = i-1;
				
			}
			else if (caixes[i].estat_caixa() == 0) caixa = i;
		}
		else {
			if (caixes[i].n_clients() > 7 ){
				caixa = i-1;
				
			}
			else  caixa = i;

		}
		--i;
	}
	return caixa;
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
	int caixa = CaixaDesti()
}
