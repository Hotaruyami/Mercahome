#include "producte.hh"

producte::producte(){
	nom = "";
	seccio = ""; 	
	preu = 0;
	tempsc = 0;
}

producte::producte(string nom, double preu, int tempsc, string seccio){
	
	
	if (tempsc < 0 or preu < 0 or seccio.size() == 2) cout << "error" << endl;

	else {
		this->nom = nom;
		this->preu = preu;
		this->tempsc = tempsc;
		this->seccio = seccio;
	}
}

producte::~producte(){}

string producte::consultar_nom(){
	return nom;
}

string producte::consultar_seccio(){
	return seccio;
}

int producte::consultar_tempsc(){
	return tempsc;
}

double producte::consultar_preu(){
	return preu;
}

void producte::llegir(){
	cin >> nom;
	double aux,aux2;
	string aux3;
	if (aux >= 0 and aux2 >= 0 and aux3.size() == 2){
	cin >> aux >> aux3 >> aux2;
	}
	else cout << "error" << endl;
	
}
void producte::escriure(){
	cout << nom << preu << seccio << tempsc << endl;

}	