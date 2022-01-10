#ifndef MAGASIN_H
#define MAGASIN_H
#include <string>
#include <vector>
#include "Produit.h"
#include "Client.h"
#include "Commande.h"

class Magasin
{
public:
	Magasin();

	//Produit
	void ajouterProduit(Produit nvProduit);
	void afficherProduits();
	void chercherProduit(Produit& a);
	void updateQuantite(Produit& a);
	
	//Client
	void ajouterClient(Client c);
	void afficherClient();
	void chercherClient(Client& c);
	void ajouterPanierClient(Client& c, Produit& p);
	void suppPanierClient(Client& c, Produit& p);
	void updateQuantitePanier(Client c, Produit p, Client& cl);

	//Commande
	void validerCmd(Client& c);
	void updateStatutCmd();
	void afficherCmds();
	void afficherCmdsClient(Client& c);

private:
	std::vector<Produit> _produits;
	std::vector<Client> _clients;
	//std::vector<Commande> _commandes;
};

#endif MAGASIN_H