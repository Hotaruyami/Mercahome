#include "caixa.hh"
#include "seccio.hh"


class super {

	//Representa un supermercat mitjançant la unio de les caixes i les seccions

private:
	
	vector <vector <seccio>> seccions;
	vector <caixa> caixes;
	string temps;
	vector <producte> productes;
	
public:

	//constructora
	
		super();

		/**
		\pre cert.
		\post es crea un supermercat buit.	*/

		super(vector <vector <seccio>> seccions, vector <caixa> caixes);

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

		int CaixaDesti(int &Xmax, int &id_client, int &NumProd) const;

		/** 
		\pre el nombre de caixes no és nul
		\post retorna el nombre  de  caixa a la cual s’ha d’assignar el client. */

		void optim (client comprador);

		/**
		\pre cert.
		\post escriu pel STL el camí mes optim d’un client pel supermercat 
		\i la seva llargada. */

		int SimulacioCaixes(int normals, int rapides); 

		/** 
		\pre cert
		\post Calcula i escriu el temps segons la configuració 
		de caixes. Per a cada configuració un temps. */

		int TempsDespl(int CaixaDesti);

		/**
		\pre “CaixaDesti” es una caixa valida.
		\post calcula el temps de desplaçament de un client segons la caixa assignada. */

	//Lectura i escriptura
	
		
};

	




