/**
 * @since 19/11/2017
 * @file matheusJ.cpp
 * @brief arquivo onde contém as implementações da library matheusJ
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 22/11/2017
 * @sa http://objetoseducacionais2.mec.gov.br/bitstream/handle/mec/10483/open/file/geo1202.htm
 */

#include "matheusJ.h"
#include <cmath>
#include <string>
#include <iomanip>
#define PI 3.1415

std::string unidade_medida = "u.m";

/*=====Implementações do Triangulo=====*/

geometria::Triangulo::Triangulo(float _lado): lado(_lado) {}

geometria::Triangulo::Triangulo() {}

geometria::Triangulo::~Triangulo() {}

void geometria::Triangulo::setArea(float _lado)
{
	float _altura = (_lado / 2.0) * sqrt(3);

	this->area = (_lado * _altura) / 2.0;
}

void geometria::Triangulo::setPerimetro(float _lado)
{
	this->perimetro = _lado * 3.0;
}

float geometria::Triangulo::getArea()
{
	return this->area;
}

float geometria::Triangulo::getPerimetro()
{
	return this->perimetro;
}

std::ostream& operator<< (std::ostream &o,geometria::Triangulo &t)
{
	o << std::setprecision(4) << "A area do triangulo e: " << t.getArea() << unidade_medida << "²" << std::endl
	  << "O perimetro do triangulo e: " << t.getPerimetro() << unidade_medida << std::endl;
	return o;
}

/*=====Implementações do Retangulo=====*/

geometria::Retangulo::Retangulo(float _base,float _altura): base(_base), altura(_altura) {}

geometria::Retangulo::Retangulo() {}

geometria::Retangulo::~Retangulo() {}

void geometria::Retangulo::setArea(float _base,float _altura)
{
	this->area = (_base * _altura) / 2.0;
}

void geometria::Retangulo::setPerimetro(float _base,float _altura)
{
	this->perimetro = 2 * (_base * _altura);
}

float geometria::Retangulo::getArea()
{
	return this->area;
}

float geometria::Retangulo::getPerimetro()
{
	return this->perimetro;
}

std::ostream& operator<< (std::ostream &o,geometria::Retangulo &r)
{
	o << "A area do retangulo e: " << r.getArea() << unidade_medida << "²" << std::endl
	  << "O perimetro do retangulo e: " << r.getPerimetro() << unidade_medida << std::endl;
	return o;
}

/*=====Implementações do Quadrado=====*/

geometria::Quadrado::Quadrado(float _lado): lado(_lado) {}

geometria::Quadrado::Quadrado() {}

geometria::Quadrado::~Quadrado() {}

void geometria::Quadrado::setArea(float _lado)
{
	this->area = pow(_lado,2);
}

void geometria::Quadrado::setPerimetro(float _lado)
{
	this->perimetro = 4 * _lado;
}

float geometria::Quadrado::getArea()
{
	return this->area;
}

float geometria::Quadrado::getPerimetro()
{
	return this->perimetro;
}

std::ostream& operator<< (std::ostream &o,geometria::Quadrado &q)
{
	o << "A area do quadrado e: " << q.getArea() << unidade_medida << "²" << std::endl
	  << "O perimetro do quadrado e: " << q.getPerimetro() << unidade_medida << std::endl;
	return o;
}

/*=====Implementações do Circulo=====*/

geometria::Circulo::Circulo(float _raio): raio(_raio) {}

geometria::Circulo::Circulo() {}

geometria::Circulo::~Circulo() {}

void geometria::Circulo::setArea(float _raio)
{
	this->area = PI * pow(_raio,2);
}

void geometria::Circulo::setPerimetro(float _raio)
{
	this->perimetro = 2 * PI * _raio;
}

float geometria::Circulo::getArea()
{
	return this->area;
}

float geometria::Circulo::getPerimetro()
{
	return this->perimetro;
}

std::ostream& operator<< (std::ostream &o,geometria::Circulo &c)
{
	o << std::setprecision(4) << std::fixed << "A area do circulo e: " << c.getArea() << unidade_medida << "²" << std::endl
	  << "O perimetro do circulo e: " << c.getPerimetro() << unidade_medida << std::endl;
	return o;
}

/*=====Implementações da Piramide=====*/

geometria::Piramide::Piramide(float _lado_quadrangular): lado_quadrangular(_lado_quadrangular) {}

geometria::Piramide::Piramide() {}

geometria::Piramide::~Piramide() {}

void geometria::Piramide::setArea(float _lado_quadrangular)
{
	this->area = pow(_lado_quadrangular,2) * (1 + sqrt(3));
}

void geometria::Piramide::setVolume(float _lado_quadrangular)
{
	this->volume = pow(_lado_quadrangular,3) * (sqrt(2) / 6.0);
}

float geometria::Piramide::getArea()
{
	return this->area;
}

float geometria::Piramide::getVolume()
{
	return this->volume;
}

std::ostream& operator<< (std::ostream &o,geometria::Piramide &p)
{
	o << std::setprecision(4) << std::fixed << "A area da piramide e: " << p.getArea() << unidade_medida << "²" << std::endl
	  << "O volume da piramide e: " << p.getVolume() << unidade_medida << "³" << std::endl;
	return o;
}

/*=====Implementações do Cubo=====*/

geometria::Cubo::Cubo(float _aresta): aresta(_aresta) {}

geometria::Cubo::Cubo() {}

geometria::Cubo::~Cubo() {}

void geometria::Cubo::setArea(float _aresta)
{
	this->area = 6 * pow(_aresta,2);
}

void geometria::Cubo::setVolume(float _aresta)
{
	this->volume = pow(_aresta,3);
}

float geometria::Cubo::getArea()
{
	return this->area;
}

float geometria::Cubo::getVolume()
{
	return this->volume;
}

std::ostream& operator<< (std::ostream &o,geometria::Cubo &c)
{
	o << std::setprecision(4) << std::fixed << "A area do cubo e: " << c.getArea() << unidade_medida << "²" << std::endl
	  << "O volume do cubo e: " << c.getVolume() << unidade_medida << "³" << std::endl;
	return o;
}

/*=====Implementações do Paralelepipedo=====*/

geometria::Paralelepipedo::Paralelepipedo(float _aresta1,float _aresta2,float _aresta3): aresta1(_aresta1),
						aresta2(_aresta2), aresta3(_aresta3) {}

geometria::Paralelepipedo::Paralelepipedo() {}

geometria::Paralelepipedo::~Paralelepipedo() {}

void geometria::Paralelepipedo::setArea(float _aresta1,float _aresta2,float _aresta3)
{
	this->area = (2 * _aresta1 * _aresta2) + (2 * _aresta1 * _aresta3) + (2 * _aresta2 * _aresta3);
}

void geometria::Paralelepipedo::setVolume(float _aresta1,float _aresta2,float _aresta3)
{
	this->volume = _aresta3 * _aresta2 * _aresta1;
}

float geometria::Paralelepipedo::getArea()
{
	return this->area;
}

float geometria::Paralelepipedo::getVolume()
{
	return this->volume;
}

std::ostream& operator<< (std::ostream &o,geometria::Paralelepipedo &p)
{
	o << std::setprecision(4) << std::fixed << "A area do paralelepipedo e: " << p.getArea() << unidade_medida << "²" << std::endl
	  << "O volume do paralelepipedo e: " << p.getVolume() << unidade_medida << "³" << std::endl;
	return o;
}

/*=====Implementações do=====*/

geometria::Esfera::Esfera(float _raio): raio(_raio) {}

geometria::Esfera::Esfera() {}

geometria::Esfera::~Esfera() {}

void geometria::Esfera::setArea(float _raio)
{
	this->area = (4 * PI) * pow(_raio,2);
}

void geometria::Esfera::setVolume(float _raio)
{
	this->volume = (4 * PI * pow(_raio,3) ) / 3.0 ;
}

float geometria::Esfera::getArea()
{
	return this->area;
}

float geometria::Esfera::getVolume()
{
	return this->volume;
}

std::ostream& operator<< (std::ostream &o,geometria::Esfera &e)
{
	o << std::setprecision(4) << std::fixed << "A area do esfera e: " << e.getArea() << unidade_medida << "²" << std::endl
	  << "O volume do esfera e: " << e.getVolume() << unidade_medida << "³" << std::endl;
	return o;
}