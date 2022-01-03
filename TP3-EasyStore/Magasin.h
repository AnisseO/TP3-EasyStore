#ifndef MAGASIN_H
#define MAGASIN_H
#include <string>
#include <vector>
#include "Produit.h"
#include "Client.h"

class Magasin
{
public:
	Magasin();
	void ajouterProduit(Produit nvProduit);
	void afficherProduits();
	void chercherProduit(Produit& a);
	void updateQuantite(Produit& a);
	
	void ajouterClient(Client& c);
	void afficherClient();

private:
	std::vector<Produit> _produits;
	std::vector<Client> _clients;
	//std::vector<Commande> _commandes;
};

#endif MAGASIN_H