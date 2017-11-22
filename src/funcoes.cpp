#include "funcoes.h"
#include "matheusJ.h"
#include <iostream>
#include <sstream>

void opcoes()
{
	std::cout << "Por favor digite a sua opcao:" << std::endl << std::endl;

	std::cout << "(1) Triangulo equilatero" << std::endl;
    std::cout << "(2) Retangulo" << std::endl;
	std::cout << "(3) Quadrado" << std::endl;
	std::cout << "(4) Circulo" << std::endl;
	std::cout << "(5) Piramide com base quadrangular" << std::endl;
	std::cout << "(6) Cubo" << std::endl;
	std::cout << "(7) Paralelepipedo" << std::endl;
	std::cout << "(8) Esfera" << std::endl;
	std::cout << "(0) Sair" << std::endl;
}

void funcao_triangulo()
{	
	std::cout << "Por favor digite o tamanho do lado do triangulo: " << std::endl;
	float lado_triangulo = inputF();

	geometria::Triangulo tri(lado_triangulo);

	tri.setArea(lado_triangulo);
	tri.setPerimetro(lado_triangulo);
	std::cout << tri;
}

void funcao_retangulo()
{

}

void funcao_quadrado()
{

}

void funcao_circulo()
{

}

void funcao_piramide()
{


}

void funcao_cubo()
{

}

void funcao_paralelepipedo()
{

}

void funcao_esfera()
{

}

/*=====_=====*/

float inputF()
{
	std::string  input;

	float entrada;

	while(std::getline(std::cin,input))
	{
		std::stringstream ss(input);

		if(ss >> entrada && ss.eof())
		{
			std::cout << "Entrada valida!" << std::endl;
			break;
		}

		std::cout << "Entrada invalida!" << std::endl;
	}
	return entrada;
}