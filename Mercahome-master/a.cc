#include <iostream>
#include <string>

int Caixa_Desti() {
	int i = 0;
	int climax = 0;
	bool b = false;
	while (i < caixes.size()-1 and not b){
		if (clients.vectorprod(c).size() > 10){
			if (caixes[i].n_clients() == caixes[i+1].n_clients()) {
					if (caixes[i+1].estat_caixa()== 0){
						
						caixa = i+1;
						climax = caixes[i+1].n_clients();
					}
					else if (caixes[i].estat_caixa() == 1){

						caixa = i;
						climax = caixes[i+1].n_clients();
					}

				}
			}
			else if ((caixes[i].n_clients() < caixes[i+1].n_clients() {
					if (caixes[i].estat_caixa() == 0){
						b = true;
						caixa = i; 
						climax = caixes[i+1].n_clients();
					}
					else if (caixes[i].estat_caixa() == 1 and caixes[i+1].estat_caixa() == 0){
						
						
						climax = caixes[i+1].n_clients();
					}
				}
				

				
				
			}
			
		}
		else {
			if (caixes[i].n_clients() == caixes[i+1].n_clients() ){
				if(caixes[i].estat_caixa() == 1){
					caixa = i;
					climax = caixes[i+1].n_clients();
				}
				else if (caixes[i].estat_caixa() == 0){
					caixa = i + 1;
					climax = caixes[i+1].n_clients();
				}
				
				
			}
			else  if (caixes[i].n_clients() < caixes[i+1].n_clients()){
				
					b = true;
					caixa = i;
					climax = caixes[i+1].n_clients();
				
			}

		}
		++i;
	}

}