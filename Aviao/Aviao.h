#ifndef AVIAO_H
#define AVIAO_H

#include <string>
using std::string;

class Aviao
{
private:
	float
		altitude,
		autonomia,
		velocidade,
		combustivel;
	string
		modelo;
	int
		estado,
		estadoAlerta,
		passageiros,
		voando;
public:
	Aviao(float, float, float, float, const string &, int, int, int, int);
	Aviao();
	
	int mensagem() const;
	void imprimirAtributo() const;
	void setEstado(int);
	int getEstado() const;
	void setEstadoAlerta(int);
	int getEstadoAlerta() const;
	void setAltitude(float);
	float getAltitude() const;
	void setAutonomia(float);
	float getAutonomia() const;
	void setVelocidade(float);
	float getVelocidade() const;
	void setCombustivel(float);
	float getCombustivel() const;
	void setModelo(string);
	string getModelo() const;
	void setPassageiros(int);
	int getPassageiros() const;
	void setVoando(int);
	int getVoando() const;
	float modificaValor(float, float, bool);
	int modificaValor(int, int, bool);
	inline void entraAlerta();
	void voar();
	
};

#endif // AVIAO_H
