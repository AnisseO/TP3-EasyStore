#include "Client.h"
#include "Produit.h"
#include <string>
#include <iostream>
#include <vector>


Client::Client()
{
	this->_nom = "";
	this->_prenom = "";
	this->_ID = "";
}

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

std::string Client::getPanier()
{
	if (_Panier.empty()) {
		return("Le panier est vide.");
	}
	else
	{
		for (int i = 0; i < _Panier.size(); i++) {

			std::cout << _Panier[i] << std::endl;
			return("Fin du panier.");
		}
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
		std::cout << "Le panier a bien \202t\202 vid\202." << std::endl;
	}
	else
	{
		std::cout << "Le panier n'a pas \202t\202 correctement vid\202. Veuillez r\202iterer l'action." << std::endl;
	}
}

void Client::updateQuantiteProduit(Produit p)
{
	int nvQuantite = 0;
	std::cout << "Entrez la nouvelle quantit\202: " << std::endl;
	std::cin >> nvQuantite;
	nvQuantite = _stock;
}

void Client::suppProduit(Produit supp)
{
	// /!\ Méthode non définie
	std::string titre = supp.getTitre();
	std::string desc = supp.getDescription();
	int stock = supp.getStock();
	double prix = supp.getPrix();
		
	//std::find(_Panier.begin(), _Panier.end(), titre) ;
	
}

Client::~Client()
{
}


std::ostream& operator<<(std::ostream& os, Client& client)
{
	std::string prenom = "Prenom: " + client.getPrenom();
	std::string Nom = "Nom: " + client.getNom();
	std::string ID = "ID : " + client.getID();
	std::string Panier = "Son panier est compos\202 de: " ;

	os << prenom << std::endl << Nom << std::endl << ID << std::endl << Panier << std::endl;
	return os;
	client.getPanier();
}
