#include <vector>
#include <queue>
#include "cjtclients.hh"
#include "producte.hh"



class caixa {
	private:
		
		string hora;

		int estat ; 
		/** @brief si estat = -1 (tancada), si estat = 0
		\ (normal), si estat = 1 (rapida) */
		
		queue <client> cua;
		
		

	public:
	
	//Constructores

		caixa();

		/**
		\pre cert.
		\post es crea una caixa buida. */
	
	//Destructores

		~caixa();

	//Modificadores

		void cobrar_client();

		/**	
		\pre cert.
		\post Hi ha un client menys a la cua, s’ha sumat el temps de cobrament
		 del client al temps total de la caixa */	
		
		void afegir_client(client &c) const;
		
		/**
		\pre cert.
		\post c forma part de la cua */
		void afegir_estat(int estat);
		/**
		\pre cert.
		\post estat de la caixa = "estat" */

		void esborrar_client();
		/**
		\pre cua amb 1 o mes clients
		\post s'esborra el primer client de la cua*/
		


	//Consultores

		int estat_caixa();
		
		/**
		\pre cert.
		\post retorna un enter segons el cual determinem
		 si la caixa esta oberta, tancada, o es rapida */
			
		string temps_de_la_cua (string temps);
		
		/**
		\pre hora < 59:59:60 .
		\post A la hora del parametre implicit se li suma “temps”. */

		TempsPagament(int TempsDespl, int TempsCaixa, int TempsCua);
	
	
};