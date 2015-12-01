#include "Super.hh"

super::super(){
	seccions = vector<vector<seccio> >(10(10));
	caixes = vector<caixa>(10);
	temps = "00:00:00";
	productes = vector<producte>(40);
}

super::super(vector<vector <seccio> > seccions,vector <caixa> caixes){
	
	this->seccions = seccions;
	this->caixes = caixes;
	temps = "00:00:00";
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
int super::disecuencia(vector <string> trajecte){
	int i,res;
	i = res = 0;
	int punterfin = seccions.size();
	string punterini = "A1";

	res += distanci(punterini, trajecte[i]);
	while(i <= trajecte.size()-2){
		res += distanci(trajecte[i], trajecte[i+1]);
		++i;
	}
	punterini[1] = punterfin;
	res += distanci(trajecte[i], punterini);
	return res;
}

void super::recami(int aux,int& distmin, int longitudS, vector <string>& traject, vector <string>& anterior){
	int j = 0;
	if(aux == longitudS-1){
		int d = disecuencia(traject);
		if(d == distmin){
			anterior = ordreLexico(traject, anterior);
		}
		if(d < distmin){
			distmin = d;
			anterior = traject;
		}
	}
	else{
		j = aux;
		while(j < longitudS){
			swap(traject[aux], traject[j]);
			recami(aux+1, distmin, longitudS, traject, anterior);
			swap(traject[aux], traject[j]);
			++j;
		}
	}
}

void super::optim (client comprador){
	int tam = comprador.productes.size();
	int distmin = seccions.size() * seccions[0].size();
	int aux = 0;
	string punterini =  "A1";
	vector <string> traject (tam);
	vector <string> secuenciaRes (tam);
	
	for(int i = 0; i < tam; ++i){
		traject[i] = comprador.productes[i].consultar_seccio();
	}
	recami(aux,distmin,tam,traject,secuenciaRes);


	//Treiem "distància" i "secuenciaRes"
	cout << distmin << endl;

	cout << punterini;
	for(int i = 0; i < tam; ++i){
		cout << " " << secuenciaRes[i];
	}
	punterini[1] = seccions.size();
	cout << " " << punterini << endl;
}


vector<producte> super::productes_seccio(string seccio){	
	return seccions[int(seccio[0])][int(seccio[1])].productes();
}

int super::caixaDesti(int &Xmax,int y,client c, int &NumProd,cjtclients &clients) {
	int i = 0;
	int climin = 0;
	
	while (i < caixes.size()){
		if (c.productes.size() > 10){ // ?? he fet un canvi perquè la funció de vector de productes ja no existia
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

/*int super::SimulacioCaixes(int& normals,int& rapides){
	for (int i = caixes.size()-1; i >= 0; --i){
			if (normals != 0) {
				caixes[i].cambiar_estat(1);
				--normals;
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
}*/
