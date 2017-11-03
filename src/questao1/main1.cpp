/*@file main1.cpp
 *@brief arquivo principal para rodar/testar a função closest2mean.
 *@date 03/11/2017
 *@since 01/11/2017
 *@author Matheus de Jesus Leandro de Medeiros
 */
#include <iostream>
#include "closest2mean.h"

int main()
{
	std::vector<int> v { 1, 6, 20, 9, 40, 50 };
	auto result = closest2mean(v.begin(),v.end());
	std::cout << (*result) << std::endl;
	return 1;
}