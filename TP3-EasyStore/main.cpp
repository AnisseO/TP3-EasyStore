/***********************************************************
	OUTSSAKKI Anisse et SGUIAR Ahmed
	14/12/2021
	TP3 - Easy Store
***********************************************************/
#include <iostream>
#include <string>
#include "Magasin.h"
#include "Produit.h"


int main()
{
	Magasin m();
	Produit p("PS5", "Console de jeu de marque Sony", 15, 499.99);
/*
	std::cout << "Produit: " << p.getTitre() << std::endl;
	std::cout << "Description: " << p.getDescription() << std::endl;
	std::cout << "Il en reste " << p.getStock() << " en stock." << std::endl;
	std::cout << "Le prix est de " << p.getPrix() << " euros" << std::endl;
	p.updatePrix();
*/

	std::cout << p << std::endl;


	return 0;
}

