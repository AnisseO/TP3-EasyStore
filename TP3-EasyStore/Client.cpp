#include "Client.h"
#include "Produit.h"
#include <string>
#include <iostream>
#include <vector>

Client::Client(std::string nom, std::string prenom): _nom(nom), _prenom(prenom)
{
}

std::string Client::getNom() const
{
	return _nom;
}

std::string Client::getPrenom() const
{
	return _prenom;
}

std::string Client::getID() const
{
	return _nom + "." + _prenom;
}

void Client::getPanier()
{
	for (int i = 0; i < _Panier.size(); i++) {

		std::cout << _Panier[i] << std::endl;
	}
}

void Client::ajoutPanier(Produit add)
{
	

	_Panier.push_back(add);
}

void Client::viderPanier()
{
	_Panier.clear();

	if (_Panier.empty() == true)
	{
		std::cout << "Le panier a bien été vidé." << std::endl;
	}
	else
	{
		std::cout << "Le panier n'a pas été correctement vidé. Veuillez reiterer l'action." << std::endl;
	}
}

void Client::updateQuantiteProduit(Produit pr, Produit& p)
{
	int nvQuantite = 0;
	std::cout << "Entrez la nouvelle quantite: " << std::endl;
	std::cin >> nvQuantite;
	nvQuantite = p.getStock();
	
}

void Client::suppProduit(Produit supp)
{
	// /!\ Méthode non définie
	std::string titre = supp.getTitre();
	std::string desc = supp.getDescription();
	int stock = supp.getStock();
	double prix = supp.getPrix();

	//_Panier.erase(titre);

}


std::ostream& operator<<(std::ostream& os, Client& client)
{
	std::string prenom = "Prenom: " + client.getPrenom();
	std::string Nom = "Nom: " + client.getNom();
	std::string ID = "ID : " + client.getID();
	std::string Panier = "Son panier est compose de: " ;

	os << prenom << std::endl << Nom << std::endl << ID << std::endl << Panier << std::endl;
	return os;
	client.getPanier();
}
