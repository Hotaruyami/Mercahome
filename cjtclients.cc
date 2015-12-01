#include "cjtclients.hh"

cjtclients::cjtclients(){
	maxclients = 30;
	clients = vector<client>(maxclients);
	nclients = 0;
		
}

cjtclients::~cjtclients(){}

void cjtclients::ordenar_cjt (){
	client aux;
	for(int j = 1; j < clients.size(); ++j){
		for(int i = 0; i < clients.size()-j; ++i){
			if(clients[i].numero > clients[i+1].numero){
				aux = clients[i];
				clients[i] = clients[i+1];
				clients[i+1] = aux;
			}
		}
	}
}

int cjtclients::tempsc_consu(client& c){
	bool b = false;
	int i = 0;
	int res = 0;
	while (not b){
		if (clients[i].numero == c.numero){
			int tam = clients[i].productes.size();
			b = true;
			for(int j = 0; j < tam; ++j){
				res += (clients[i].productes[j].consultar_tempsc())*clients[i].productes[j].consultar_quantitat();
			}
		}
		++i;
	}
	return res;
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
		int N,N1,aux1,aux_quant;
		string aux, aux_nom;
		cin >> aux1 >> aux >> N1;
	if(aux.size() != 8 or aux1 <= 0 ){
		cout << "error" << endl;
		
	}
	else{	
		N = N1;
		clients[i].instant = aux;
		clients[i].numero = aux1;
		for(int j = 0; j < N; ++j){
			cin >> aux_quant >> aux_nom;
			clients[i].productes[j].modi_quantitat(aux_quant);
			clients[i].productes[j].modi_nom(aux_nom);
		}

	}
	}
}
	
	void escriure_producte(producte prod){
		cout << prod.consultar_nom() << " " <<prod.consultar_seccio() << " " << prod.consultar_tempsc() << " " << prod.consultar_preu() << endl;
	}
