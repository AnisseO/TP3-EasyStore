#include "Produit.h"
#include <iostream>

Produit::Produit(std::string titre, std::string description, int stock, double prix): _titre(titre), _description(description), _stock(stock), _prix(prix)
{
}

std::string Produit::getTitre() const
{
    return _titre;
}

std::string Produit::getDescription() const
{
    return _description;
}

int Produit::getStock() const
{
    return _stock;
}

double Produit::getPrix() const
{
    return _prix;
}

void Produit::updatePrix()
{
    std::cout << "Entrez un nouveau prix: " << std::endl;
    std::cin >> _prix;
    std::cout << std::endl<< "Le nouveau prix est de " << getPrix() << " euros" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Produit& produit) 
{
    std::string title = "Produit: " + produit.getTitre();
    std::string Desc = "Description: " + produit.getDescription();
    std::string Quantite = "Il en reste " + std::to_string(produit.getStock()) + " en stock";
    std::string Price = "Le prix est de " + std::to_string(produit.getPrix()) + " euros";

    os << title << std::endl << Desc << std::endl << Quantite << std::endl << Price << std::endl;
    return os;
}
