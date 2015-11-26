#include <iostream>
#include <string>
using namespace std;
int de_string_a_int() {
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