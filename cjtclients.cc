#include "cjtclients.hh"


void ordenar_cjt (){

}

cjtclients::cjtclients(){
	maxclients = 30;
	clients = vector<client>(maxclients);
	nclients = 0;
		
}
cjtclients::~cjtclients(){}


vector <product> cjtclients::vectorprod(client& c){
	bool b = false;
	int i = 0;
	while (not b){
		if (clients[i] == c) b = true;
		i = i +1;
	}
	return clients[i].productes;
}
void cjtclients::afegir_client(client& c){
	if(nclients < maxclients){ // hi caben clients
		int i = nclients-1;
		bool b = false;
		int id = c.numero;
		while(i >= 0 and not b){
			if(id > clients[i].numero){
				b =  true; 
			}
			else{
				clients[i+1]= clients[i];
				i = i -1;
			}
		}	
		clients[i+1] = c;
		++nclients;
	}
	else{
		clients.push_back(c);
		++nclients;
		++maxclients;
	}

}
	
	
int cjtclients::nombre_clients(){
	return nclients;	
}

void cjtclients::llegir(int& L){
	
	for (int i = 0; i < L; ++i){
	int N,N1;
	string aux;
	int aux1;
	cin >> aux1 >> aux >> N1;
	if(aux.size() != 8 or aux1 <= 0 ){
		cout << "error" << endl;
		
	}
	else{	
		N = N1;
		clients[i].instant = aux;
		clients[i].numero = aux1;
		
		for(int j = 0; j < N; ++j){
			cin >> clients[i].productes[j].quantitat >> clients[i].productes[j].nom;
		}
	}
	}
	void cjtclients::afegir_producte(Producte prod){
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

	producte cjtclients:consultar_producte(string nom){
		int i = 0;
		bool trobat = false;
		while (not trobat and i < productes.size()){
		
		if(nom == productes[i].consultar_nom()) return productes[i];
		
		++i;
		}
		if (not b) cout << "error" << endl;
	}

	void escriure_producte(producte prod){
		//FER
	}
	
}
