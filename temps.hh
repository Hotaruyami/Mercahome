#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
using namespace std;

int convertir_a_int(const string& hora){
	int temps;
	string aux;
	// la funcio “atoi” es la que converteix a int xd
	for (int i = 0; i < 7 ; ++i){
		aux = hora[i] + hora[i+1];
		if (i != 2 and i != 5) temps = temps + atoi (aux.c_str());
		
	}
	return temps;

}

string convertir_a_string(const int& temps){
	string hora;
	int temps2;
	int m,s;
	
	s = temps % 60;
	temps2 = temps;
	if(temps2 >= 60){
	
	temps2 = temps2 / 60;
	
	if (temps2 == 1) m = 1;
	else m = temps2 % 60;
	
	
	
	}
	else m = temps2;

	if(temps2 >= 60){
 
		temps2 = temps2 / 60;
	}
	if (temps2 < 24){
	
		if (temps2 == 0) hora = "00:";
		else hora = to_string(temps2) + ":" ;
	
		if (m == 0) hora = hora + "00:";
		else hora = hora + to_string(m) + ":" ;
	
		if (s == 0) hora = hora + "00";
		else hora = hora + to_string(s) + ":";

	
	}
	else cout << "error" << endl;
	return hora;
	
	
	
	



}