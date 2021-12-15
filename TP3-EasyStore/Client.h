#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <vector>
#include "Produit.h"


class Client
{
public:
	Client(std::string nom, std::string prenom);
	std::string getNom() const;
	std::string getPrenom() const;
	std::string getID() const;
	void getPanier() ;
	void ajoutPanier(Produit add);
	void viderPanier();


private:
	std::string _nom;
	std::string _prenom;
	std::string _ID;
	std::vector<Client> _Panier;

};

#endif CLIENT_H

