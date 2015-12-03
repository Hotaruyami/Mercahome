#include "caixa.hh"
#include "seccio.hh"


class super {

	//Representa un supermercat mitjançant la unio de les caixes i les seccions

private:
	
	vector <vector <seccio> > seccions;
	vector <caixa> caixes;
	string temps;
	vector <producte> productes;

	void swap(string& x, string& y);
	/**
		\pre cert.
		\post canvia x per y	*/
	int distanci(string ini, string fin);
	/**
		\pre cert.
		\post retorna la distancia entre les dues seccions del paràmetre	*/
	vector<string> ordreLexico(vector <string>& v, vector <string>& a);
	/**
		\pre cert.
		\post retorna el vector menor, lexicogràficament	*/
	void recami(int aux,int& distmin, int longitudS, vector <string>& traject, vector <string>& anterior);
	/**
		\pre cert.
		\post recursivament dona la distància mínima d'un client determinat	*/
	int disecuencia(vector <string> trajecte);
	/**
		\pre cert.
		\post ?????	*/
	

public:

	//constructora
	
		super();

		/**
		\pre cert.
		\post es crea un supermercat buit.	*/

		super(vector <vector <seccio> > seccions, vector <caixa> caixes);

		/**
		\pre cert.
		\post crea un supermercat amb seccions.size() seccions i 				
		\caixes.size() caixes */


	//Destructora

		~super();

	//Modificadores

		
	
	//consultores
	
		vector <producte> productes_seccio(string seccio);
		
		/**
		\pre la seccio “seccio” existeix.
		\post retorna un vector amb els productes que pertanyen a la seccio “seccio”. */

		int caixaDesti(int &Xmax,int y,client c, int &NumProd,cjtclients &clients);

		/** 
		\pre el nombre de caixes no és nul
		\post retorna el nombre  de  caixa a la cual s’ha d’assignar el client. */

		void optim (client comprador);

		/**
		\pre cert.
		\post escriu pel STL el camí mes optim d’un client pel supermercat 
		\i la seva llargada. */

		//int SimulacioCaixes(int normals, int rapides); 

		/** 
		\pre cert
		\post Calcula i escriu el temps segons la configuració 
		de caixes. Per a cada configuració un temps. */

		

	
		
};

	




