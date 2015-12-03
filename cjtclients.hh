#include <vector>
#include "producte.hh"

struct client {

	string instant;
	int numero;
	vector <producte> productes;
	string tempsc;
	string tempscua;
	string inicicobr;
	string finalcobr;
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
	int tempsc_consu(client& c);
	/**
	\pre cert 
	\post retorna la suma dels temps de cobrament dels productes d'un client
	*/

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
	

		/**
		\pre ”nom” te un format d’entrada valid.
		\post retorna el producte amb nom “nom”. */
	void escriure_producte(producte prod);

		/** 
		\pre prod existeix a super.
		\post escriu per el STL el producte prod */
	

		/**
		\pre el p.i. no esta ple
		\post “prod” pertany al p.i. i esta afegit al vector de productes */

};

