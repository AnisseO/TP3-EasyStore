#include "Magasin.h"
#include "Produit.h"
#include <iostream>

Magasin::Magasin()
{
}

void Magasin::ajouterProduit(Produit nvProduit)
{
	_produits.push_back(nvProduit);
}

void Magasin::afficherProduits()
{
	for (int i = 0; i < _produits.size(); i++) {

		std::cout << _produits[i] << std::endl;
	}
}

void Magasin::chercherProduit(Produit& a)
{
	std::string produit;
	std::cout << "Entrez le produit cherche: " << std::endl;
	std::cin >> produit;

		if (a.getTitre() == produit) {

			std::cout << a << std::endl;
		}
		else
		{
			std::cout << "Le produit n'est pas disponible." << std::endl;
		}
}

void Magasin::updateQuantite(Produit& a)
{
	int nvStock = 0;
	std::string produit;
	std::cout << "Entrez le produit cherche: " << std::endl;
	std::cin >> produit;

	if (a.getTitre() == produit) {

		std::cout << "Entrez la nouvelle quantite: " << std::endl;
		std::cin >> nvStock;
		nvStock = a.getStock();		

	}
	else
	{
		std::cout << "Le produit n'est pas disponible." << std::endl;
	}
}
