/***********************************************************
	    OUTSSAKKI Anisse et SGUIAR Ahmed
	               14/12/2021
	            TP3 - Easy Store
***********************************************************/
#include <iostream>
#include <string>
#include "Magasin.h"
#include "Produit.h"
#include "Client.h"


int main()
{
	Magasin m;
	Client c("Mbappe", "Ky");
	Client c0("Outssakki", "Anisse");
	Client c1("Benzema", "Karim");
	Produit PS5("PS5", "Console de jeu de marque Sony", 15, 499.99);
	Produit XPS("DELL XPS", "Ordinateur portable", 8, 1200.50);
	Produit AP("Airpods 3", "Apple Airpods 3", 220, 189.99);

	/*
	std::cout << "Produit: " <<	p.getTitre() << std::endl;
	std::cout << "Description: " << p.getDescription() << std::endl;
	std::cout << "Il en reste " << p.getStock() << " en stock." << std::endl;
	std::cout << "Le prix est de " << p.getPrix() << " euros" << std::endl;
	p.updatePrix();
	*/

	std::cout << PS5 << std::endl;
	
	/*
	m.ajouterProduit(PS5);
	m.ajouterProduit(XPS);
	m.ajouterProduit(AP);
	m.afficherProduits();
	m.chercherProduit(PS5);
	m.updateQuantite(PS5);
	*/

	std::cout << c.getID() << std::endl;
	std::cout << c.getNom() << std::endl;
	std::cout << c.getPrenom() << std::endl;

	m.ajouterClient(c);
	m.ajouterClient(c0);
	m.ajouterClient(c1);

	m.afficherClient();

	m.chercherClient(c1);

	return 0;
}

