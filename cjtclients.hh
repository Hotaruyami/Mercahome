#include <vector>
#include "producte.hh"

struct product {
	int quantitat;
	string nom;
};

struct client {

	string instant;
	int numero;
	vector <product> productes;
	string tempsc;
	string tempscua;
};

class cjtclients {

private:

	vector <client> clients;
	int maxclients;
	int nclients;
	void ordenar_cjt ();
	


public:

	//Constructores

	cjtclients();
	/**
	\pre cert
	\post crea un cjt_clients buida */

	//Destructores
	
	~cjtclients();

	//Modificadores
	
	void afegir_client(client& c) ;
	/**
	\pre cert
	\post afegim un nou client a cjt_clients */

	//Consultores:
	
	
	int nombre_clients();
	
	
	/**
	\pre cert
	\post retorna el numero de clients del cjt_clients
	*/
	
	//Lectura i escriptura

	void llegir(int& L);
	/** 
	\pre hi ha preparats al canal estandard d’entrada dos integer i un strign
	\post el parametre implicit passa a tenir els atributs llegits del canal estandard d’entrada.
	*/

};

