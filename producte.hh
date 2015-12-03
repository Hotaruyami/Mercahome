#ifndef PRODUCTE_HH
#define PRODUCTE_HH
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
	int quantitat;
	
	// invariant de la representacio:
	
public:

	//constructores
	
	producte();
/**
	\pre cert
	\post el resultat es un producte amb nom = “”, preu = 0, tempsc = 0,seccio = “” 
*/


	/** @brief segurament necessitem creadores diferents, poso la mes general i la mes completa */	

	producte(string nom, double preu, int tempsc, string seccio, int quantitat);
/**
	\pre preu >= 0,tempsc >= 0
	\post el resultat es un producte amb nom = “nom”, preu = “preu”, tempsc = “tempsc”, seccio = “seccio” */
	
	//Destructora

	~producte();

	//Modificadores
	void modi_quantitat(const int& x);
	/** 
	\pre cert
	\post afegeix la quantitat al parametre implicit */

	void modi_nom(const string& a);
	/** 
	\pre cert
	\post afegeix al parametre implicit, el nom */

//Consultores

	int consultar_quantitat();
	/** 
	\pre el parametre implicit té preu
	\post retorna la quantitat del parametre implicit */

	string consultar_nom ();
	
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

	double consultar_preu();
	/** \pre el parametre implicit te tempsc
	    \post retorna el preu del parametre implicit */

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
#endif