#ifndef COMMANDE_H
#define COMMANDE_H
#include <string>
#include <vector>
#include "Produit.h"

class Commande
{
public:
	Commande();
	Commande(unsigned int numCmd, std::string client, std::vector<Produit> produits, bool statut);
	friend std::ostream& operator<<(std::ostream& os, const Commande& cmd);
	~Commande();

private:
	unsigned int _numCmd;
	unsigned int _memoire;
	std::string _client;
	std::vector<Produit> _produits;
	bool _statut;
};

#endif COMMANDE_H