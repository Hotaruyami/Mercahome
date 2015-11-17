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

		
	seccio(vector<producte>& prod) const;
	
	/**
	\pre cert.
	\post crea una secció amb el vector de productes “prod” */

	
	//Destructora
	
	~seccio();

	//Consultores
	
	vector<producte> productes(int &r,int &c) const;
	
	/**
	\pre cert.
	\post retorna un vector de productes ordenat pel nom alfabeticament,
	\ si no hi ha productes, retorna per el STL “seccio buida” */
 
};