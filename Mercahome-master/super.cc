#include "super.hh"
#include "temps.cc"

super::super(){
	seccio seccions [10][10];
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

void super::afegir_producte(const producte& prod){
	int i = 0;
	while (productes[i].consultar_nom() != "") {
		++i;

	}
	if (i == productes.size()) productes.push_back(prod);
	else productes[i-1] = prod;

}

producte super::consultar_producte(const string& nom){
	bool b = false;
	producte aux;
	int i = 0;
	while (not b){
		if(nom == productes[i].consultar_nom()){
			b = true;
			return productes[i];
		}
		++i;
	}
	return aux;
}

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

	return distL + distN;
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

void super::caixaDesti(client c) {
	int tam = caixes.size()-1;
	bool asignat = false;
	bool igual = false;
	while(not asignat or tam > 0){
		if (c.productes.size() > 10){ //Ha d'anar a caixa normal
			if(caixes[tam].estat == 0){
				if(caixes[tam].tamany_cua() < caixes[tam-1].tamany_cua())){ // caixa normal i menys clients que la següent
					c.caixaAs = caixes[tam];
					asignat = true;
					igual = false;
				}
				else if(caixes[tam].tamany_cua() == caixes[tam-1].tamany_cua())){
					igual = true;
				}
				else if(caixes[tam-1].estat != 0){
					c.caixaAs = caixes[tam];
					asignat = true;
					igual = false;
				}
			}
		}
		else { //Ha d'anar a caixa rapida
			if(caixes[tam].estat == 1){
				if(caixes[tam].tamany_cua() <= caixes[tam-1].tamany_cua())){ // caixa normal i menys clients que la següent
					c.caixaAs = caixes[tam];
					asignat = true;
					igual = false;
				}
				else if(caixes[tam].tamany_cua() == caixes[tam-1].tamany_cua())){
					igual = true;
				}
				else if(caixes[tam-1].estat == -1){
					c.caixaAs = caixes[tam];
					asignat = true;
					igaul = false;
				}
			}
		}
	--tam;
	}
	if(igual) c.caixaAs = caixes[caixes.size()-1];
}

int super::SimulacioCaixes(int& normals,int& rapides){
	int horat = 0;
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
		caixaDesti(clients[i]);
		int tam = caixes.size()-1;
		if(caixes[i].tamany_cua() == 0){
			clients[i].inicicobr = de_string_a_int(c.instant) + (tam - c.caixaAs);
		}
		else clients[i].inicicobr = de_string_a_int(c.instant) + caixes[i].consultar_hora() +(tam - c.caixaAs);

		clients[i].finalcobr = clients[i].inicicobr + tempsc_consu(clients[i]);

		cout << clients[i].numero << " " << clients[i].caixaAs << " " << clients[i].inicicobr << " " << clients[i].finalcobr << endl;
		horat += de_string_a_int(tempsc_consu(clients[i])); ;
		cobrar_client(clients[i]);
		++i;
	}
	cout << de_int_a_string(int horat) << endl;
}
