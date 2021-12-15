#include "Client.h"
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

		//std::cout << _Panier[i] << std::endl;
	}
}

void Client::ajoutPanier(Produit add)
{
	//_Panier.push_back(add);
}

void Client::viderPanier()
{
	_Panier.clear();

	if (_Panier.empty() == true)
	{
		std::cout << "Le panier a bien �t� vid�." << std::endl;
	}
	else
	{
		std::cout << "Le panier n'a pas �t� correctement vid�. Veuillez reiterer l'action." << std::endl;
	}
}

