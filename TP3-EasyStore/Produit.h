#ifndef PRODUIT_H
#define PRODUIT_H
#include <string>
#include <vector>

class Produit
{
public:
	Produit();
	Produit(std::string titre, std::string description, int stock, double prix);
	std::string getTitre() const;
	std::string getDescription() const;
	int getStock() const;
	double getPrix() const;
	void updatePrix(double& prix);
	~Produit();

protected:
	int _stock;
	std::string _titre;

private:
	std::string _description;
	double _prix;
};

std::ostream& operator<<(std::ostream& os, const Produit& produit);

#endif PRODUIT_H


