#include <iostream>
#include <string>
using namespace std;

string de_int_a_string(int temps) {
	string hora = "";
	int segons,minuts,hores;

	segons = temps % 60;
	//si hi ha minuts
	if (temps >= 60){
		temps = temps / 60;
		minuts = temps % 60;
		//si hi ha hores
		if (temps >= 60){
			temps = temps / 60;
			hores = temps;
			if (hores >= 10){ 
				if(minuts >= 10){
					if (segons >= 10){
						hora = to_string(hores) + ":" + to_string(minuts) + ":" + to_string(segons);
					}
					else hora = to_string(hores) + ":" + to_string(minuts) + ":0" + to_string(segons);
				}
				else hora = to_string(hores) + ":0" + to_string(minuts) + ":0" + to_string(segons);
				
			}
			else {
				if (minuts >= 10) {
					if (segons >= 10){
						hora = "0" + to_string(hores) + ":" + to_string(minuts) + ":" + to_string(segons);
					}
					else hora = "0" + to_string(hores) + ":" + to_string(minuts) + ":0" + to_string(segons);
				}
				else {
					if (segons >= 10) {
						hora = "0" + to_string(hores) + ":0" + to_string(minuts) + ":" + to_string(segons);
					}
					else hora = "0" + to_string(hores) + ":0" + to_string(minuts) + ":0" + to_string(segons);
				}
				
				

			}
		}
		else {
				if (minuts >= 10){
					if (segons >10)hora = "00:" + to_string(minuts) + ":" + to_string(segons);
					else hora = "00:" + to_string(minuts) + ":0" + to_string(segons);
				} 
				else {
					if (segons > 10)hora = "00:0" + to_string(minuts) + ":" + to_string(segons);

					else hora = "00:0" + to_string(minuts) + ":0" + to_string(segons);
				}	
		}
	}
	else{
		if (segons >= 10) hora = "00:00:" + to_string(segons); 
		else hora = "00:00:0" + to_string(segons);
		

	}

	
	return hora;
}

int main(){
	int a = 0;
	cin >> a;
	cout << de_int_a_string(a) << endl;
}


int de_string_a_int(string hora) {
int temps = 0;
string aux = "";

 int j = 0;
int i = 2;
while (hora.size() > 2){
aux = hora[0];
aux = aux + hora[1];

j = stoi(aux.c_str(),nullptr,10);
temps = temps + j*(60*i);
i = i - 1;

hora.erase(0,3);
aux = "";
}
temps = temps + stoi(hora.c_str(),nullptr,10);
return temps;
}
