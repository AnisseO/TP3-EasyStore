#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <vector>
#include "Produit.h"

class Client: public Produit
{
public:
	Client();
	Client(std::string nom, std::string prenom);
	std::string getNom() const;
	std::string getPrenom() const;
	std::string getID() const;
	std::string getPanier() ;
	void ajoutPanier(Produit add);
	void viderPanier();
	void updateQuantiteProduit(Produit pr);
	void suppProduit(Produit supp);
	~Client();

private:
	std::string _nom;
	std::string _prenom;
	std::string _ID;
	std::vector<Produit> _Panier;
};

std::ostream& operator<<(std::ostream& os, Client& client);

#endif CLIENT_H

