#include "Magasin.h"
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
