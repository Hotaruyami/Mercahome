#include "cjtclients.hh"

cjtclients::cjtclients(){
	maxclients = 30;
	clients = vector<client>(maxclients);
	nclients = 0;
	
	
}
cjtclients::~cjtclients(){}

void cjtclients::afegir_client(client& c){
	if(nclients < maxclients){ // hi caben clients
		int i = nclients-1;
		bool b = false;
		int id = c.numero;
		while(i >= 0 and not b){
			if(id > clients[i].id){
				b =  true; 
			}
			else{
				clients[i+1]= clients[i];
				—-i;
			}
		}	
		clients[i+1] = c;
		++nclients;
	}
	else{
		clients.pushback(c);
		++nclients;
		++maxclients;
	}

}
	
	
int cjtclients::nclients{
	return nclients;	
}

void cjtclients::llegir(int& L){
	int N;
	if(instant.size() != 8 or numero <= 0 ){
		cout << "error" << endl;
		
	}
	else{
		for(int i = 0; i < L; ++i){
			cin >> numero >> instant >> N;	
			for(int j = 0; j < N; ++j){
				cin >> clients[i].productes[j].quantitat << clients[i].productes[j].nom;
			}
	
		}
	}
	
}
