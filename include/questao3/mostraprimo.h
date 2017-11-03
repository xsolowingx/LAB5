/*@file mostraprimo.h
 *@brief aqui tem a definição e a implementação da classe Mostraprimo que será utilizada como functor.
 *@date 03/11/2017
 *@since 01/11/2017
 *@author Matheus de Jesus Leandro de Medeiros
 */
#ifndef _MOSTRAPRIMO_H
#define _MOSTRAPRIMO_H
#include <cmath>

/*=====Classe que será utilizada como functor.=====*/
class Mostraprimo
{
private:
	int valor;
public:
	Mostraprimo(int n): valor(n) {}
	bool operator() (int n)
	{
		int count = 0;
		for(auto i = 1; i <= std::sqrt(n);i++)
		{
			if(n % i == 0) count++;
			if(count > 1) return false;
		}
		
		if(count == 1) return true;
		return false;
	}
};




#endif