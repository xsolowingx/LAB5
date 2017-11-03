/*@since 01/11/2017
 *@file main2.cpp
 *@brief arquivo principal para rodar/testar a função print_elements.
 *@date 03/11/2017
 *@author Matheus de Jesus Leandro de Medeiros
 */
#include "print_elements.h"
#include <set>

int main()
{
	std::set<int> numeros;
	numeros.insert(3);
	numeros.insert(1);
	numeros.insert(4);
	numeros.insert(1);
	numeros.insert(2);
	numeros.insert(5);
	std::set<char> letras;
	letras.insert('a');
	letras.insert('B');
	letras.insert('c');
	letras.insert('D');
	letras.insert('e');
	letras.insert('F');

	print_elements(numeros, "Set: ");
	print_elements(numeros, "CSV Set: ", ';');
	print_elements(letras, "CHAR Set: ");

	return 1;
}