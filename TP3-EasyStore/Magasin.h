#include <string>
#include <vector>
#include "Produit.h"

class Magasin
{
public:
	Magasin();
	void ajouterProduit(Produit nvProduit);


private:
	
	std::vector<Produit> _produits;
	/*
	std::vector<Client> _clients;
	std::vector<Commande> _commandes; */

};