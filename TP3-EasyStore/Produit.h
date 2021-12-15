#ifndef PRODUIT_H
#define PRODUIT_H
#include <string>
#include <vector>

class Produit
{
public:
	Produit(std::string titre, std::string description, int stock, double prix);
	std::string getTitre() const;
	std::string getDescription() const;
	int getStock() const;
	double getPrix() const;
	void updatePrix();

private:
	std::string _titre;
	std::string _description;
	int _stock;
	double _prix;
};

std::ostream& operator<<(std::ostream& os, const Produit& produit);

#endif PRODUIT_H


