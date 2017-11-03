/*@file main3.cpp
 *@brief arquivo principal que usa a classe Mostraprimo como functor.
 *@date 03/11/2017
 *@since 01/11/2017
 *@author Matheus de Jesus Leandro de Medeiros
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include "mostraprimo.h"
#include <cstdlib>

int main(int argc,char *argv[])
{
	std::vector<int> numerosINT;
	int Numero_el = atoi(argv[1]);

	for(auto i = 1; i <= Numero_el;i++) numerosINT.push_back(i);
	
	std::cout << "Numero(s) Primo(s) [1-" << Numero_el << "]: ";

	for(auto it = numerosINT.begin();it < numerosINT.end();it++)
	{
		auto iterator = std::find_if(it,numerosINT.end(), Mostraprimo(*it));
		if(*iterator == 0) continue;
		std::cout << *iterator << " ";
		it = iterator;
	}
	std::cout << std::endl;

	return argc;
}