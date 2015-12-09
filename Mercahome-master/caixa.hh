#include <vector>
#include <queue>
#include "cjtclients.hh"


class caixa {
	private:
		
		string hora;

		int estat; 
		/** @brief si estat = -1 (tancada), si estat = 0
		\ (normal), si estat = 1 (rapida) */
		
		queue <client> cua;
		
		void esborrar_client();
		/**
		\pre cua amb 1 o mes clients
		\post s'esborra el primer client de la cua*/	

	public:
	
	//Constructores

		caixa();
		/**
		\pre cert.
		\post es crea una caixa buida. */
		
	
	//Destructores

		~caixa();

	//Modificadores

		int cobrar_client(client& c);
		/**	
		\pre cert.
		\post Hi ha un client menys a la cua, s’ha sumat el temps de cobrament
		 del client al temps total de la caixa */	
		
		void afegir_client(client& c) ;
		/**
		\pre cert.
		\post c forma part de la cua */

		string temps_de_la_cua(const client& c);
		/**
		\pre cert.
		\post retorna el temps de cua de la caixa */

		void cambiar_estat(int estat);
		/**
		\pre la caixa te estat.
		\post estat de la caixa = "estat" */


	//Consultores
		int consultar_hora();
		/**
		\pre cert.
		\post retorna la hora de la caixa en format int */
		
		int estat_caixa();
		/**
		\pre cert.
		\post retorna un enter segons el cual determinem
		 si la caixa esta oberta, tancada, o es rapida */

		int n_clients();
		/**
		\pre cert.
		\post retorna el numero de clients de la caixa*/


};