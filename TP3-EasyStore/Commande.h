#ifndef COMMANDE_H
#define COMMANDE_H
#include <string>
#include <vector>
#include "Produit.h"
#include "Magasin.h"

class Commande
{
public:
	Commande(std::string client, std::vector<Produit> produits, bool statut);
	friend std::ostream& operator<<(std::ostream& os, const Commande& cmd);

private:
	std::string _client;
	std::vector<Produit> _produits;
	bool _statut;
};

#endif COMMANDE_H