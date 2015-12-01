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

<<<<<<< Updated upstream:super.cc
int super::CaixaDesti(int &Xmax,int y,client c,cjtclients &clients) {
=======
vector<string> super::ordreLexico(vector <string>& v, vector <string>& a){
	bool ordenat = false;
>>>>>>> Stashed changes:super2.cc
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
	int j = normals;
	int k = rapides;
	for (int i = caixes.size()-1; i >= 0; --i){
<<<<<<< Updated upstream:super.cc
		
			if (j != 0) {
=======
			if (normals != 0) {
>>>>>>> Stashed changes:super2.cc
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
		
		if (caixes[desti].n_clients()==0) {
			tempscua = 0;

		}

		
		else tempscua = de_string_a_int(caixes[desti].temps_de_la_cua());
		caixes[desti].afegir_client(clients[i]);
		int tempsc = caixes[desti].cobrar_client(clients[i]);
		
		caixes[desti].treure_cua();
		

		clients[i].inicicobr = de_string_a_int(clients[i].instant) + (caixes.size()-desti) + tempscua;
		clients[i].finalcobr = clients[i].inicicobr + tempsc;
		
		for (int k = 0;k < i;++k){
			if((de_string_a_int(clients[i].instant) + (caixes.size() - desti)) < caixes[desti].
		}
		
		cout << numero << " " << (caixes.size()-desti) + tempscua << ((caixes.size()-desti) + tempscua) + tempsc << endl;
		++i;
		t = t + (caixes.size() - desti) + tempscua + tempsc;
		

	}
	cout << t << endl;



	
}
