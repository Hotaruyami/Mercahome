#include "caixa.hh"
#include <string>

caixa::caixa(int estat){
	maxcua = 20;
	cua = queue<client>(maxcua);
	hora = "00:00:00";
	this->estat = estat;
	
}

caixa::~caixa(){}

void caixa::cobrar_client(){


}
void caixa::afegir_client(client& c){
	cua.push (c);
}

void caixa::cambiar_estat(int estat){
	this->estat = estat;

}
void caixa::esborrar_client(){
	cua.pop();

}

int caixa::estat_caixa(){
	return estat;
}
// esta bastan liada la cosa nose com agafar el string i sumarlo xd, miratho aver.
string caixa::temps_de_la_cua(string temps){
	//hora = hora + temps
	string auxSH,auxSM,auxSS,horastr;
	int auxIH,auxIM,auxIS,horaint,aux;

		auxSH = temps[0] + temps[1];
		auxSM = temps[3] + temps[4];
		auxSS = temps[6] + temps[7];
		auxIH = int(auxSH);
		auxIM = int(auxSM);
		auxIS = int(auxSS);

		horastr = hora[6] + hora[7];
		horaint = int(horastr);
		if((horaint + auxIS) < 60){
			aux = horaint + auxIS;
			hora[7] = str(aux%10); 
			aux = aux/10;
			hora[6] = str(aux%10);
		}
		else{
			hora[6] = "0";
			hora[7] = "0";
			++auxIM;
		} 
		
		horastr = hora[3] + hora[4];
		horaint = int(horastr);
		if((horaint + auxIM) < 60){
			aux = horaint + auxIM;
			hora[4] = str(aux%10); 
			aux = aux/10;
			hora[3] = str(aux%10);
		}
		else{
			hora[3] = "0";
			hora[4] = "0";
			++auxIH;
		} 
		
		horastr = hora[0] + hora[1];
		horaint = int(horastr);
		if((horaint + auxIH) < 24){
			aux = horaint + auxIH;
			hora[1] = str(aux%10); 
			aux = aux/10;
			hora[0] = str(aux%10);
		}
		else{
			//La hora pot ser major a 24?
			//No sé si funciona, bastant llarg i inneficient. Pero més o menys és aquesta la idea no?
		} 
		return hora;
	
	}