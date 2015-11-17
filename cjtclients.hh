#include <vector>
#include "producte.hh"

struct product {
	int quantitat;
	string nom;
};

struct client {

	int tiquet;
	string instant;
	int numero;
	vector <product> productes;
};

class cjtclients {

private:

	vector <client> clients;
	
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
	
	void afegir_client(client& c) const;
	/**
	\pre cert
	\post afegim un nou client a cjt_clients */

	//Consultores:

	int temps_de_cua (client& c) const;
	/**
	\pre existeix client
	\post retorna el temps de caixer dels clients anteriors
	*/
	
	int TempsPagament(int TempsDespl, int TempsCaixa, int TempsCua);
	
	/**
	\pre parametres correctes
	\post retorna el temps de pagament com a suma dels parametres
	*/
	int nclients();
	/**
	\pre cert
	\post retorna el numero de clients del cjt_clients
	*/
	
	//Lectura i escriptura

	void llegir();
	/** 
	\pre hi ha preparats al canal estandard d’entrada dos integer i un strign
	\post el parametre implicit passa a tenir els atributs llegits del canal estandard d’entrada.
	*/

	void escriure();
	/**
	\pre cert
	\post s’han escrit els atributs del p.i. al canal estandard de sortida*/

};

