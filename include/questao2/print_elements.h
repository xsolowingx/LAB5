/*@file print_elements.h
 *@brief aqui tem a definição e a implementação da função "print_elements".
 *@date 03/11/2017
 *@since 01/11/2017
 *@author Matheus de Jesus Leandro de Medeiros
 */
#ifndef _PRINT_ELEMENTS_H
#define _PRINT_ELEMENTS_H
#include <iostream>

/*=====Função que imprime os "elementos" de um container,com o "rótulo" e o seprador dados ou padrão.=====*/

template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="",
const char separator=' ')
{
	std::cout << label;

	for(auto it = collection.begin();it != collection.end();it++)
	{	
		std::cout << *it << separator;
	}
	std::cout << std::endl;
}



#endif