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

void Produit::updatePrix(double prix)
{
    std::cout << "Entrez un nouveau prix: " << std::endl;
    std::cin >> _prix;
    std::cout<< std::endl;
}
