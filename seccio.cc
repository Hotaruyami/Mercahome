#inculde "seccio.hh"

seccio::seccio(){
	prod = vector <producte> (40)
	posicio = "";

}
seccio::seccio(const vector<producte>& prod,const string posicio){
	
	this->prod = prod;
	this->posicio = posicio;
	
}

seccio::~seccio(){}

seccio::afegir_posicio(string posicio){

	this->posicio = posicio;

}

seccio::vector<producte> productes(){
	
	if (prod.size() != 0)return prod;
	else cout << "seccio buida" << endl;
}


