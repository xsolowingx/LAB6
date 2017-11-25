/**
 * @since 19/11/2017
 * @file matheusJ.h
 * @brief arquivo onde contém as definições da biblioteca matheusJ
 * @author Matheus de Jesus Leandro de Medeiros
 * @date 24/11/2017
 */
#ifndef _MATHEUSJ_H
#define _MATHEUSJ_H
#include <ostream>
#include <iomanip>

namespace geometria
{
	class Triangulo
	{
	private:
		float lado;
		float area;
		float perimetro;	
	public:
		Triangulo(float _lado);
		Triangulo();
		~Triangulo();

		void setArea(float _lado);
		void setPerimetro(float _lado);
		
		float getArea();
		float getPerimetro();

		friend std::ostream& operator <<(std::ostream &o,Triangulo &t);
	};

	class Retangulo
	{
	private:
		float base;
		float altura;
		float area;
		float perimetro;	
	public:
		Retangulo(float _base,float _altura);
		Retangulo();
		~Retangulo();

		void setArea(float _base,float _altura);
		void setPerimetro(float _base,float _altura);

		float getArea();
		float getPerimetro();

		friend std::ostream& operator<< (std::ostream &o,Retangulo &r);
	};

	class Quadrado
	{
	private:
		float lado;
		float area;
		float perimetro;
	public:
		Quadrado(float _lado);
		Quadrado();
		~Quadrado();

		void setArea(float _lado);
		void setPerimetro(float _lado);

		float getArea();
		float getPerimetro();

		friend std::ostream& operator<< (std::ostream &o,Quadrado &q);
	};

	class Circulo
	{
	private:
		float raio;
		float area;
		float perimetro;
	public:
		Circulo(float _raio);
		Circulo();
		~Circulo();

		void setArea(float _raio);
		void setPerimetro(float _raio);

		float getArea();
		float getPerimetro();

		friend std::ostream& operator<< (std::ostream &o,Circulo &c);
	};

	class Piramide
	{
	private:
		float lado_quadrangular;
		float area;
		float volume;
	public:
		Piramide(float _lado_quadrangular);
		Piramide();
		~Piramide();

		void setArea(float _lado_quadrangular);
		void setVolume(float _lado_quadrangular);

		float getArea();
		float getVolume();

		friend std::ostream& operator<< (std::ostream &o,Piramide &p);
	};

	class Cubo
	{
	private:
		float aresta;
		float area;
		float volume;
	public:
		Cubo(float _aresta);
		Cubo();
		~Cubo();

		void setArea(float _aresta);
		void setVolume(float _aresta);

		float getArea();
		float getVolume();

		friend std::ostream& operator<< (std::ostream &o,Cubo &c);	
	};

	class Paralelepipedo
	{
	private:
		float aresta1;
		float aresta2;
		float aresta3;
		float area;
		float volume;
	public:
		Paralelepipedo(float _aresta1,float _aresta2,float _aresta3);
		Paralelepipedo();
		~Paralelepipedo();

		void setArea(float _aresta1,float _aresta2,float _aresta3);
		void setVolume(float _aresta1,float _aresta2,float _aresta3);

		float getArea();
		float getVolume();

		friend std::ostream& operator<< (std::ostream &o,Paralelepipedo &p);
	};

	class Esfera
	{
	private:
		float raio;
		float area;
		float volume;
	public:
		Esfera(float _raio);
		Esfera();
		~Esfera();

		void setArea(float _raio);
		void setVolume(float _raio);

		float getArea();
		float getVolume();

		friend std::ostream& operator<< (std::ostream &o,Esfera &e);
	};

}

#endif