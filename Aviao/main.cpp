#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Aviao.h"

using namespace std;


int main(int argc, char **argv)
{
	//Aviao a(4.0, 0.0, 0.0, 1.0, "QWE975", 0, 0, 3,1);
	Aviao a;
	
	float m;
	int n, fim=1;
	system("cls");
	do{
		switch(a.mensagem()){
			case 0:
				a.setEstado(0);
				system("pause");
				a.setModelo(a.getModelo());
				break;
			case 1:				
				a.setEstado(1);
				system("pause");
				break;
			case 2:
				cout << "Digite a quantidade de combustivel a ser adicionada: ";
				cin >> m;				
				a.setCombustivel(a.modificaValor(a.getCombustivel(),m,1));
				system("pause");
				break;
			case 3:
				cout << "Digite a quantidade de Passageiros a ser adicionada: ";
				cin >> n;
				a.setPassageiros(a.modificaValor(a.getPassageiros(),n, 1));
				system("pause");
				break;
			case 4:
				cout << "Digite a quantidade de Passageiros a ser retirada: ";
				cin >> n;
				a.setPassageiros(a.modificaValor(a.getPassageiros(),n, 0));
				system("pause");
				break;
			case 5:
				a.voar();
				
				system("pause");
				break;
			case 6:
				cout << "Digite valor a ser incrementado na Velocidade: ";
				cin >> m;
				a.setVelocidade(a.modificaValor(a.getVelocidade(), m, 1));
				system("pause");
				break;
			case 7:
				cout << "Digite valor a ser decrementado na Velocidade: ";
				cin >> m;
				a.setVelocidade(a.modificaValor(a.getVelocidade(),m, 0));
				system("pause");
				break;
			case 8:
				cout << "Digite a ser incrementado na Altitude: ";
				cin >> m;
				a.setAltitude(a.modificaValor(a.getAltitude(),m,1));
				system("pause");
				break;
			case 9:
				cout << "Digite a ser decrementado na Altitude: ";
				cin >> m;
				a.setAltitude(a.modificaValor(a.getAltitude(),m,0));
				system("pause");
				break;
			case 10:
				a.setEstadoAlerta(1);
				system("pause");
				break;
			case 11:
				a.setEstadoAlerta(0);
				system("pause");
				break;
			case 12:
				a.imprimirAtributo();
				system("pause");
				break;
			case 13:
				fim = a.modificaValor(0,0,1);
				break;
		}
		system("cls");
	}while(fim != 0 );
	return 0;
}
