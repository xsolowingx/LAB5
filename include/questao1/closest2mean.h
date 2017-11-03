/*@file closest2mean.h
 *@brief aqui tem a definição e a implementação da função "closest2mean".
 *@date 03/11/2017
 *@since 01/11/2017
 *@author Matheus de Jesus Leandro de Medeiros
 */
#ifndef _CLOSEST2MEAN_H
#define _CLOSEST2MEAN_H

#include <vector>
#include <numeric>

/*=====Função para achar a "distância" entre dois valores=====*/
double distanciaEntre2(double a,double b)
{
	double distancia = a - b;
	if(distancia < 0) distancia*= (-1);
	return distancia;
}

/*=====Função ao qual acha o valor(dentro do intervalo dado) mais próximo da média do intervalo.=====*/
template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last)
{
	int quantidade_elementos = 0;
	double media;
	for(auto it = first; it != last; it++) quantidade_elementos++;
	media = std::accumulate(first,last,0);
	media /= quantidade_elementos;
	
	double menorvalor = distanciaEntre2(media,*first);
	double aux_menorvalor;
	auto iterator = first;  
	
	for(auto it = first; it != last; it++)
	{
		aux_menorvalor = distanciaEntre2(media,*it);
		if(aux_menorvalor < menorvalor)
		{
			menorvalor = aux_menorvalor;
			iterator = it;
		}
	}
	return iterator;
} 



#endif