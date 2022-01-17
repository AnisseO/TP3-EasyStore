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
	void updateQuantite(int& stock);
	~Produit();

protected:
	int _stock;
	std::string _titre;
	double _prix;

private:
	std::string _description;
};

std::ostream& operator<<(std::ostream& os, const Produit& produit);

#endif PRODUIT_H


