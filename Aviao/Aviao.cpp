#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>

using namespace std;

#include "Aviao.h"

Aviao::Aviao(float autonomia, float altitude, float velocidade , float combustivel,const string &modelo, int estado, int estadoalerta, int passageiros, int voa)

{
	setModelo(modelo);
	setAutonomia(autonomia);
	setEstado(estado);
	setVoando(voa);
	setAltitude(altitude);
	setVelocidade(velocidade);
	setCombustivel(combustivel);
	setEstadoAlerta(estadoalerta);
	setPassageiros(passageiros);
}

Aviao::Aviao()
{
	this->autonomia = 0.0;
	this->altitude = 0.0;
	this->velocidade = 0.0;
	this->combustivel = 0.0;
	this->modelo = "DESCONHECIDO";
	this->estado = 0;
	this->estadoAlerta = 0;
	this->passageiros = 0;
	this->voando = 0;
}
void Aviao::imprimirAtributo() const
{
	cout << "Modelo: " << this->getModelo() << endl;
	cout << "Autonomia: "<< this->getAutonomia() << endl;
	cout << "Estado de Voo(1=Voando, 0= Nao voando): " << this->getVoando() << endl;
	cout << "Estado (1-Ligado, 0-Desligado): " << this->getEstado() << endl;
	cout << "Em turbulencia(1-Sim, 0-Nao): " << this->getEstadoAlerta() << endl;
	cout << "Quantidade de Combustivel: " << this->getCombustivel() << endl;
	cout << "Quantidade de Passageiros: " << this->getPassageiros() << endl;
	cout << "Velocidade: " << this->getVelocidade() << "Km/h"<< endl;
	cout << "Altitude: " << this->getAltitude() << "m" << endl;
}
int Aviao::mensagem() const
{
	int opcao;
	cout << "O que você deseja Fazer:"<< endl;
	cout << "\t0-Desligar Aviao" << endl;
	cout << "\t1-Ligar Aviao" << endl;
	cout << "\t2-Adicionar Combustivel" << endl;
	cout << "\t3-Adicionar Passageiro(s)" << endl;
	cout << "\t4-Remover Passageiro(s)" << endl;
	cout << "\t5-Voar" << endl;
	cout << "\t6-Aumentar Velocidade" << endl;
	cout << "\t7-Diminuir Velocidade" << endl;
	cout << "\t8-Aumentar Altitude" << endl;
	cout << "\t9-Diminuir Altitude" << endl;
	cout << "\t10-Entrou em Area de Turbulencia" << endl;
	cout << "\t11-Saiu da Area de Turbulencia" << endl;
	cout << "\t12-Exibir Atributos do Aviao" << endl;
	cout << "\t13-Sair" << endl;
	
	cout << "Digite a Opção desejada: ";
	cin >> opcao;
	system("cls");
	return opcao;
}
inline void Aviao::entraAlerta(){
	cout << "Aviao em estado de Alerta: Turbulencia!";
}

void Aviao::setEstado(int estado)
{	
				if((estado == 0) || (estado == 1))
				{
					this->estado = estado;
				}
				else
				{
						do
						{
							cout << "Digite um Estado Valido (0 = desligado, 1 = ligado)" << endl;
							cin >> estado;
							this->estado = estado;
							system("cls");
						}while((this->estado < 0) || (this->estado > 1));
				}
		if(this->estado == 1)
		{
			cout << "Aviao Ligado!\n";
		}
		else
		{
			cout << "Aviao Desligado!\n";
		}
}
int Aviao::getEstado() const
{
	return this->estado;
}

void Aviao::setEstadoAlerta(int estadoAlerta)
{
	if(this->voando == 1){
			if((estadoAlerta == 0) || (estadoAlerta == 1))
			{
				this->estadoAlerta = estadoAlerta;
			}
			else
			{
					do
					{
						cout << "Digite um Estado de Alerta Valido (0 = desligado, 1 = ligado)" << endl;
						cin >> estadoAlerta;
						this->estadoAlerta = estadoAlerta;
						system("cls");
					}while((this->estadoAlerta < 0) || (this->estadoAlerta > 1));
			}
			if(this->estadoAlerta == 1)
			{
				entraAlerta();
			}
			else
			{
				cout << "Aviao Fora de Turbuencia!\n";
			}
	}
	else
	{
		cout << "Alerta()tur - Aviao Nao Voando";
	}
		
}
int Aviao::getEstadoAlerta() const
{
	return this->estadoAlerta;
}
void Aviao::setAltitude(float altitude)
{
	if(this->voando == 1)
	{
		if(altitude<=5000 && altitude>=0)
		{
			this->altitude = altitude;
		}
		else
		{
			do
			{
				cout << "Digite Altitude Valida(entre 0 e 5000): ";
				cin >> altitude;
				this->altitude = altitude;
			}while((this->altitude<0)||(this->altitude>5000));
		}
	}
	else
	{
		cout << "Alt-Aviao Nao Voando";
	}
}
float Aviao::getAltitude() const
{
		return this->altitude;
}
void Aviao::setAutonomia(float autonomia)
{
		if(autonomia<=12 && autonomia>=0)
		{
			this->autonomia = autonomia;
		}
		else
		{
			do
			{
				cout << "Digite Autonomia Valida(entre 0 e 12): ";
				cin >> autonomia;
				this->autonomia = autonomia;
			}while((this->autonomia<0)||(this->autonomia>12));
		}
}
float Aviao::getAutonomia() const
{
	return this->autonomia;
}
void Aviao::setVelocidade(float velocidade)
{
	if(this->voando == 1)
	{
		if((velocidade<=600) && (velocidade >=0))
		{
				this->velocidade = velocidade;
		}
		else
		{
			do
			{
				cout << "Digite Velocidade Valida(entre 0 e 600): ";
				cin >> velocidade;
				this->velocidade = velocidade;
			}while((this->velocidade<0)||(this->velocidade>600));
		}
	}
	else
	{
		cout << "velo-Aviao Nao Voando";
	}
}
float Aviao::getVelocidade() const
{
	return this->velocidade;	
}
void Aviao::setCombustivel(float combustivel)
{
		if(combustivel<=200 && combustivel>=0)
		{
			this->combustivel = combustivel;
		}
		else
		{
			do
			{
				cout << "Digite Quantidade Valida de Combustivel(entre 0 e 200): ";
				cin >> combustivel;
				this->combustivel = combustivel;
			}while((this->combustivel<0)||(this->combustivel>200));
		}
}
float Aviao::getCombustivel() const
{
		return this->combustivel;
}
void Aviao::setModelo(string modelo)
{
	int i, cont = 0;
	do
	{
		
		for (i=0 ; i<3 ; i++)
		{
			if(isalpha(modelo[i]) && !isalpha(modelo[i+3]))
			{
				cont++;
			}
		}
		if(cont==3 && modelo.size()==6)
		{
				this->modelo = modelo;
		}
		else
		{
				cout << "Digite Nome Valido(3 letras seguidos imediatamente de 3 digitos): ";
				cin >> modelo;
				this->modelo = modelo;
				
		}
	}while(cont<3);
}
string Aviao::getModelo() const
{
	return this->modelo;
}
void Aviao::setPassageiros(int passageiros)
{
	if(passageiros <=250 && passageiros>=0)
	{
			this->passageiros = passageiros;
	}
	else
	{
		do
		{
			cout << "Digite Numero Valido de Passageiros(entre 0 e 250): ";
			cin >> passageiros;
			this->passageiros = passageiros;
		}while((this->passageiros<0)||(this->passageiros>250));
	}	
		
}
int Aviao::getPassageiros() const
{
	return this->passageiros;
}

void Aviao::setVoando(int voando1){
	if((this->combustivel > 0) && (this->estado == 1))
	{
			if((voando1 == 0) || (voando1 == 1))
			{
				this->voando = voando1;
			}
			else
			{
				do
				{
					cout << "Digite um Estado de Voo Valido (0 = nao voando, 1 = voando)" << endl;
					cin >> voando1;
					this->voando = voando1;
					system("cls");
				}while((this->voando < 0) || (this->voando > 1));
			}
			if(this->voando == 1)
			{
				cout << "Aviao Voando!\n";
			}
			else
			{
				cout << "Aviao nao está Voando!\n";
			}
	}
	if(this->estado == 0)
	{
		cout << "Aviao Desligado!\n";
	}	
	if(this->combustivel <= 0)
	{
		cout << "Aviao Sem Combustivel!\n";
	}
}
int Aviao::getVoando() const
{
	return this->voando;
}
	
void Aviao::voar()
{
	system("cls");
	if (this->estado == 0)
	{
		cout << "Aviao Desligado!" << endl;
	}
	if (this->combustivel == 0)
	{
		cout << "Aviao sem Cobustivel!" << endl;
	}
	if((this->estado == 1) && (this->velocidade == 0.0) && (this->altitude == 0.0 ) && (this->combustivel > 0.0))
	{
		modificaValor(this->velocidade, 20.0, 1);
		modificaValor(this->altitude, 200.0, 1);
		setVoando(1);
		if(this->velocidade >=20 && this->altitude >=20)
		{
			cout << "Aviao Voando!";
		}
	}
	else if(this->voando == 1)
	{
		cout << "Aviao ja esta voando!" << endl;
	}
	
}
float Aviao::modificaValor(float in, float numero, bool i)
{
	
	if(i==1)
	{
		in += numero;
	}
	else
	{
		in -= numero;
	}
	return in;
}
int Aviao::modificaValor(int in, int numero, bool i)
{
	
	if(i==1)
	{
		in += numero;
	}
	else
	{
		in -= numero;
	}
	return in;
}


