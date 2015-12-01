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

void super::swap(string& x, string& y){
	string c = x;
	x = y;
	y = c;
}

int super::distanci(string ini, string fin){
	int distL = fin[1] - ini[1];
	if(distL < 0) distL = -(distL);
	int distN = fin[0] - ini[0]; 
	if(distN < 0) distN = -(distN);

	return distL + distN; //Funciona? sino, transformar a int els [1] i a char els [0]
}

vector<string> super::ordreLexico(vector <string>& v, vector <string>& a){
	bool ordenat = false;
	int i = 0;
	int tam = v.size();
	vector <string> res(tam);
	while(i < tam and not ordenat){
		if(v[i] < a[i]){
			ordenat = true;
			res = v;
		}
		else if(a[i] < v[i]){
			ordenat = true;
			res = a;
		}
		++i;
	}
	return res;
}

void super::optim (client comprador){
	//Treiem "distància" i "secuenciaRes"
	cout << distancia << endl;

	cout << secuenciaRes[0];
	for(int i = 1; i < tam; ++i){
		cout << " " << secuenciaRes[i];
	} cout << endl;
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
			if (normals != 0) {
				caixes[i].cambiar_estat(1);
				--normals
			}
			else if (rapides != 0){
				caixes[i].cambiar_estat(0);
				--rapides;
			}
		
			else caixes[i].cambiar_estat(-1);
	}
	int i = 0;
	while (i < clients.size()){

	}
	int caixa = CaixaDesti()
}
