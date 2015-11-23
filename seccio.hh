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
	\post crea una secció buida */
	
		
	seccio(const vector<producte>& prod,const string posicio) ;
	
	/**
	\pre cert.
	\post crea una secció amb el vector de productes “prod” */

	
	//Destructora
	
	~seccio();

	//Modificadores:
	/**
	\pre la seccio no te posicio
	\post la posicio del parametre implicit es "posicio"
	void afegir_posicio(string posicio);

	
	//Consultores
	
	vector<producte> productes() const;
	
	/**
	\pre cert.
	\post retorna un vector de productes ordenat pel nom alfabeticament,
	\ si no hi ha productes, retorna per el STL “seccio buida” */
 
};