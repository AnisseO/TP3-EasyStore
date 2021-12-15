#include "Magasin.h"

Magasin::Magasin()
{
}

void Magasin::ajouterProduit(Produit nvProduit)
{
	_produits.push_back(nvProduit);
}
