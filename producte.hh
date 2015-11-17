#include <string>
#include <iostream>
using namespace std;

class producte {

	/** Tipus de modul: dades
	  Descripcio del tipus: conte les dades de un producte com el seu nom
	  (string), el preu(double), el seu temps de cobrament i la seva 
	  seccio(string).
	  seccio.size() < 2  */

private:
	string nom;
	string seccio;
	double preu;
	int tempsc;
	
	// invariant de la representacio:
	
public:

	//constructores
	
	producte();
/**
	\pre cert
	\post el resultat es un producte amb nom = “”, preu = 0, tempsc = 0,seccio = “” 
*/


	/** @brief segurament necessitem creadores diferents, poso la mes general i la mes completa */	

	producte(string nom, int preu, int tempsc, string seccio);
/**
	\pre preu >= 0,tempsc >= 0
	\post el resultat es un producte amb nom = “nom”, preu = “preu”, tempsc = “tempsc”, seccio = “seccio” */
	
	//Destructora

	~producte();

	//Modificadores


//Consultores

	string nom ();
	
	/** 
	\pre el parametre implicit té preu
	\post retorna el preu del parametre implicit */
	
	string consultar_seccio ();
	
	/** 
	\pre el parametre implicit te seccio
	\post retorna la seccio del parametre implicit */

	int consultar_tempsc ();

	/** \pre el parametre implicit te tempsc
	\post retorna el temps de cobrament del parametre implicit */

//Lectura i Escriptura

	void llegir();
	/** 
	\pre hi ha preparats al canal estandard d’entrada dos strings, un enter i un double
	\post el parametre implicit passa a tenir els atributs llegits del canal estandard d’entrada.
	*/
	void escriure();
	/**
	\pre cert
	\post s’han escrit els atributs del p.i. al canal estandard de sortida*/

};