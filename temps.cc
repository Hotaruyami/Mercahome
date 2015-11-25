#include "temps.hh"

int temps::de_str_a_int(string hora) {
int temps = 0;
string aux;
while (hora.size() > 2){
aux = hora[0] + hora[1];
temps = temps + atoi(aux);
hora = hora - hora [0] - hora[1] - hora [2];

}
temps = temps + atoi(aux);

}