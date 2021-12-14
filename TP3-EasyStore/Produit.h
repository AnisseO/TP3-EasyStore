#include <string>

class Produit
{
public:
	Produit(std::string titre, std::string description, int stock, double prix);
	std::string getTitre() const;
	std::string getDescription() const;
	int getStock() const;
	double getPrix() const;
	void updatePrix(double prix);

private:
	std::string _titre;
	std::string _description;
	int _stock;
	double _prix;
};

