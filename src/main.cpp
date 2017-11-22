#include "matheusJ.h"
#include "funcoes.h"
#include <string>
#include <sstream>
#include <iostream>

int main()
{
	std::cout << "Bem vindo a Calculadora de Geometria Plana e Espacial!(CGPEs)" << std::endl;

	opcoes();

	std::string opcao;
	int aux_opcao;

	while(std::getline(std::cin,opcao))
	{
		std::stringstream ss(opcao);
		ss >> aux_opcao;

		switch (aux_opcao)
		{
			case 0:

				std::cout<<">>Saindo..."<<std::endl;

				break;

			case 1:

				funcao_triangulo();

				std::cout << "Oque voce deseja calcular agora?" << std::endl;
				opcoes();

				break;

			case 2:

				funcao_retangulo();

				std::cout << "Oque voce deseja calcular agora?" << std::endl;
				opcoes();

				break;

			case 3:

				funcao_quadrado();

				std::cout << "Oque voce deseja calcular agora?" << std::endl;
				opcoes();

				break;
			case 4:

				funcao_circulo();

				std::cout << "Oque voce deseja calcular agora?" << std::endl;
				opcoes();

				break;

			case 5:

				funcao_piramide();

				std::cout << "Oque voce deseja calcular agora?" << std::endl;
				opcoes();

				break;

			case 6:

				funcao_cubo();

				std::cout << "Oque voce deseja calcular agora?" << std::endl;
				opcoes();

				break;

			case 7:

				funcao_paralelepipedo();

				std::cout << "Oque voce deseja calcular agora?" << std::endl;
				opcoes();

				break;

			case 8:

				funcao_esfera();

				std::cout << "Oque voce deseja calcular agora?" << std::endl;
				opcoes();

				break;

			default:

				std::cout<<"Opcao invalida, por favor digite uma opcao valida(de 0 a 8)"<<std::endl;

				break;	
		}
	}
}