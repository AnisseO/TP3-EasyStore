#include "Magasin.h"
#include "Produit.h"
#include <iostream>
#include <string>

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

void Magasin::ajouterClient(Client& c)
{
	/*
	std::string nomClient, prenomClient;
	std::cout << "Entrez son nom de famille:" << std::endl;
	std::cin >> nomClient;
	std::cout<< "" << std::endl;
	std::cout << "Entrez son prenom:" << std::endl;
	std::cin >> prenomClient;
	
	//c(nomClient, prenomClient);
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

void Magasin::chercherClient(Client& c)
{
	std::string client;
	std::cout << "Entrez le nom du client recherche: " << std::endl;
	std::cin >> client;

	if (c.getNom() == client)
	{
		std::cout << c << std::endl;
	}
	else {
		std::cout << "Le client recherche est introuvable." << std::endl;
	}
}

void Magasin::ajouterPanierClient(Client& c, Produit& p)
{
	c.ajoutPanier(p);
}

