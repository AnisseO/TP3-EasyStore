#include "Magasin.h"
#include "Produit.h"
#include <iostream>
#include <string>
#include <vector>

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

void Magasin::chercherProduit(Produit a)
{
	std::string produit;
	std::cout << "Entrez le nom du produit cherch\202: " << std::endl;
	std::cin >> produit;

	if (a.getTitre() == produit) {

		std::cout << a << std::endl;
	}
	else
		std::cout << "Le produit n'est pas disponible." << std::endl;
}

void Magasin::updateQuantite(Produit a)
{
	int nvStock = 0;
	std::string produit;
	std::cout << "Entrez le produit cherch\202: " << std::endl;
	std::cin >> produit;

	if (a.getTitre() == produit) {
		int b = 0;
		a.updateQuantite(b);
	}
	else
		std::cout << "Le produit n'est pas disponible." << std::endl;
}

void Magasin::updatePrixProduit(Produit a)
{
	double nvPrix = 0.0;
	a.updatePrix(nvPrix);
	std::cout << "Le prix a bien \202t\202 modifi\202 ." << std::endl;
	std::cout << std::endl << "Le nouveau prix est de " << a.getPrix() << " euros" << std::endl;
}

void Magasin::ajouterClient(Client c)
{
	/*
	std::string nomClient, prenomClient;
	std::cout << "Entrez son nom de famille:" << std::endl;
	std::cin >> nomClient;
	std::endl;
	std::cout << "Entrez son prenom:" << std::endl;
	std::cin >> prenomClient;
	c(nomClient, prenomClient);
	*/

	_clients.push_back(c);
}

void Magasin::afficherClient()
{
	for (int i = 0; i < _clients.size(); i++)
	{
		std::cout << _clients[i] << std::endl;
	}
}

void Magasin::chercherClient(Client c)
{
	std::string client;
	std::cout << "Entrez le nom du client recherch\202: " << std::endl;
	std::cin >> client;

	if (c.getNom() == client)
	{
		std::cout << c << std::endl;
	}
	else {
		std::cout << "Le client recherche est introuvable." << std::endl;
	}
}

void Magasin::ajouterPanierClient(Client c, Produit p)
{
	monClient.ajoutPanier(p);
}

void Magasin::suppPanierClient(Client c, Produit p)
{
	monClient.suppProduit(p);
}

void Magasin::updateQuantitePanier(Client c, Produit p)
{
	monClient.updateQuantiteProduit(p);
}

void Magasin::validerCmd(Client c)
{
	// /!\  Méthode non définie
	std::string panier = c.getPanier();

	if (panier == "Le panier est vide.") {
		std::cout << "La commande ne peut \x88tre valider car le panier est vide. Veuillez le remplir." << std::endl;
	}
	else {
		//_commandes.push_back();
		//updateStatutCmd(bool statut = true);

		std::cout << "La commande a bien \202t\202 valider. Merci pour vos achats." << std::endl;
	}

	c.viderPanier();
}

void Magasin::updateStatutCmd(unsigned int numero)
{
	// /!\  Méthode non définie

}

void Magasin::afficherCmds()
{
	/*
	for (int i = 0; i < _commandes.size(); i++)
	{
		std::cout << _commandes[i] << std::endl;
	}
	*/
}

void Magasin::afficherCmdsClient(Client c)
{
	std::string client = c.getID();

	while (_clients.size()) {
		int i = 0;
		/*
		if (_clients[i] == client) {
			for (int i = 0; i < _commandes.size(); i++) {
			std::cout << _commandes[i] << std::endl;
			}
		}
	}
	*/
	}
}

