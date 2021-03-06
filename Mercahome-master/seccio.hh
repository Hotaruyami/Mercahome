#include <vector>
#include <string>
#include "producte.hh"

class seccio {

	private:
		vector <producte> prod;
		string posicio;

	public:

	//Constructores
	
	seccio();	
	/**
	\pre cert.
	\post crea una seccio buida */
	
		
	seccio(const vector<producte>& prod,const string posicio) ;
	
	/**
	\pre cert.
	\post crea una seccio amb el vector de productes “prod” */

	
	//Destructora
	
	~seccio();
	//Modificadores
	
	void afegir_posicio(string posicio);
	/**
	\pre la seccio no te posicio
	\post la posicio del parametre implicit es "posicio"
	*/
	
	//Consultores
	
	vector<producte> productes();
	/**
	\pre cert.
	\post retorna un vector de productes ordenat pel nom alfabeticament,
	\ si no hi ha productes, retorna per el STL “seccio buida” */
 
};