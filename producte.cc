#include "producte.hh"

producte::producte(){
	nom = "";
	seccio = ""; 	
	preu = 0;
	tempsc = 0;
	quantitat = 0;
}

producte::producte(string nom, double preu, int tempsc, string seccio, int quantitat){
	if (tempsc < 0 or preu < 0 or seccio.size() == 2) cout << "error" << endl;
	else {
		this->nom = nom;
		this->preu = preu;
		this->tempsc = tempsc;
		this->seccio = seccio;
		this->quantitat =  quantitat;
	}
}

producte::~producte(){}

void producte::modi_quantitat(const int& x){
	quantitat = x;
}

void producte::modi_nom(const string& a){
	nom = a;
}

int producte::consultar_quantitat(){
	return quantitat;
}

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
	cin >> aux >> aux3 >> aux2;
	if (aux < 0 and aux2 < 0 and aux3.size() != 2) cout << "error" << endl;
}
void producte::escriure(){
	cout << nom << preu << seccio << tempsc << endl;

}	
