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
	int j = normals;
	int k = rapides;
	for (int i = caixes.size()-1; i >= 0; --i){
		
			if (j != 0) {
				caixes[i].cambiar_estat(1);
				--j;
			}
			else if (k != 0){
				caixes[i].cambiar_estat(0);
				--k;
			}
		
			else caixes[i].cambiar_estat(-1);
	}
	int i = 0;
	int t;
	int tempscua;
	while (i < clients.size()){
		int desti = caixadesti(clients[i]);
		caixes[desti].afegir_client(clients[i]);
		if (caixes[desti].n_clients()==0) {
			tempscua = 0;

		}

		else tempscua = de_string_a_int(caixes[desti].temps_de_la_cua());
		caixes[desti].cobrar_client();
		cout << numero << " " << (caixes.size()-desti) + tempscua << ((caixes.size()-desti) + tempscua) + tempsc << endl;
		++i;
		t = t + (caixes.size() - desti) + tempscua + tempsc;
		

	}
	cout << t << endl;



	
}
