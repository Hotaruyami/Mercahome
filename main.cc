#include <iostream>
using namespace std;

int main() {
    string ordre;
    cin >> ordre;
    while (ordre != "sortir") {
	if (ordre == "inicialitzar"){
	  
	  int R,C,X,N;
	  cin >> R >> C >> X >> N;
	  vector <caixa> caixes(X);
	  seccio seccions[R][C];
	  super mercat (seccions,caixes);
	  Producte aux;
	  
	  for (int i = 0; i < N, ++i) {
	    aux.llegir(); // Llegim el producte
	    clients.afegir_producte(aux); // Afegim el producte al supermercat
	  }
	  
	  
	}
	else if (ordre == "carregar"){
	  int L;
	  cin >> L;
	  Cjt_clients clients;
	  
	  clients.llegir(L);
	  
	  }
	  
	  
	  
	}
	else if (ordre == "informacio"){
	string nom;
	cin >> nom; //Producte
	
	mercat.escriure_producte(mercat.consultar_producte(nom)); 
	// Busquem el producte al super i l'escribim per pantalla
	  
	}
	
	else if (ordre == "productes"){
	  string seccio;
	  cin >> seccio;
	  
	  vector <producte> aux;
	  aux = mercat.productes_seccio(seccio); 
	  //Guarda a aux un vector de productes que estan a la seccio pasada
	  // si aux.size() == 0 "seccio buida"
	  if(aux.size()== 0){
	  	cout << "seccio buida" << endl;
	  }
	  else {
	  	for (int i = 0; i < aux.size(); ++i) mercat.escriure_producte(aux[i]); 
		 //Treiem per pantalla els productes de la secció
	  	}	  
	}
	else if (ordre == "millor"){
	  cin >> ordre;
	  int comprador_id;
	  cin >> comprador_id;
	  mercat.optim(comprador_id);
	  
	}
	else if (ordre == "simular"){
	  cin >> ordre;
	  int config;
	  cin >> config;
	  int normals,rapides;
	  for(int j = 0; j < config ; ++j) {
	    cin >> normals >> rapides;
	    mercat.SimulacioCaixes(normals,rapides);
	  }
	  
	}
	else cout << "error" << endl;
	cin >> ordre;    
	//ACABAR DE CONCRETAR ERRORS
	/* En el cas que una comanda no respecti els seus requeriments 
	(la informació que necessita no ha estat introduÏda o no correspon amb la introduïda),
	 el sistema escriurà: error
	Per exemple, executar millor cami comprador id sense haver carregat la informació
	 de vendes o havent carregat informació de vendes que no conté comprador_id.*/
    }
    
}