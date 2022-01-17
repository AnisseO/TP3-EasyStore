/***********************************************************
		OUTSSAKKI Anisse et SGUIAR Ahmed
				   14/12/2021
				TP3 - Easy Store
***********************************************************/
#include <iostream>
#include <string>
#include <vector>
#include "Magasin.h"
#include "Produit.h"
#include "Client.h"
#include "Commande.h"


int main()
{
	Magasin m;

	Client c("Mbappe", "Ky");
	Client c0("Outssakki", "Anisse");
	Client c1("Benzema", "Karim");

	Produit PS5("PS5", "Console de jeu de marque Sony", 15, 499.99);
	Produit XPS("DELL XPS", "Ordinateur portable", 8, 1200.50);
	Produit AP3("Airpods 3", "Apple Airpods 3", 220, 189.99);

	unsigned int choix = 0;

	do {
		std::cout << "    |||   Menu principal   |||" << std::endl;
		std::cout << "(1) Gestion du magasin" << std::endl;
		std::cout << "(2) Gestion des utilisateurs" << std::endl;
		std::cout << "(3) Gestion des commandes" << std::endl;
		std::cout << "(4) Quitter le menu" << std::endl;

		std::cin >> choix;

		switch (choix) {
		case 1:
		{
			unsigned int cchoix = 0;
			std::cout << "   |||   Gestion du magasin   |||" << std::endl;
			std::cout << "(1) Ajouter produit au magasin" << std::endl;
			std::cout << "(2) Afficher tous les produits" << std::endl;
			std::cout << "(3) Chercher un produit " << std::endl;
			std::cout << "(4) Mettre a jour la quantit\202 d'un produit" << std::endl;
			std::cout << "(5) Mettre a jour le prix d'un produit" << std::endl;
			std::cout << "(6) Revenir au menu principal " << std::endl;
			std::cin >> cchoix;

			switch (cchoix) {
			case 1:
			{
				m.ajouterProduit(PS5);
				m.ajouterProduit(XPS);
				m.ajouterProduit(AP3);
				break;
			}
			case 2:
			{
				m.afficherProduits();
				break;
			}
			case 3:
			{
				
				m.chercherProduit(PS5);
				break;
			}
			case 4:
				m.updateQuantite(PS5);
				break;

			case 5:
				m.updatePrixProduit(PS5);
				break;

			case 6:
				break;
			}
			break;
		}
		case 2:
		{
			unsigned int cchoix = 0;

			std::cout << "   |||   Gestion des clients   |||" << std::endl;
			std::cout << "(1) Ajouter un client au magasin" << std::endl;
			std::cout << "(2) Afficher tous les clients" << std::endl;
			std::cout << "(3) Chercher un client " << std::endl;
			std::cout << "(4) Ajouter un produit au panier d'un client " << std::endl;
			std::cout << "(5) Supprimer un produit au panier d'un client " << std::endl;
			std::cout << "(6) Mettre a jour la quantit\202 d'un produit du panier d'un client" << std::endl;
			std::cout << "(7) Afficher le panier du client" << std::endl;
			std::cout << "(8) Revenir au menu principal " << std::endl;
			std::cin >> cchoix;

			switch (cchoix) {
			case 1:
			{
				m.ajouterClient(c);
				m.ajouterClient(c0);
				m.ajouterClient(c1);
				break;
			}
			case 2:
			{
				m.afficherClient();
				break;
			}
			case 3:
			{
				m.chercherClient(c1);
				break;
			}
			case 4:
			{
				m.ajouterPanierClient(c1, PS5);
				m.ajouterPanierClient(c1, AP3);
				break;
			}
			case 5:
			{
				m.suppPanierClient(c1, PS5);
				break;
			}
			case 6:
			{
				m.updateQuantitePanier(c1, AP3);
				break;
			}
			case 7:
			{
				c1.getPanier();
				break;
			}
			case 8:
				break;
			}
			break;
		}
		case 3:
		{
			unsigned int cchoix = 0;

			std::cout << "   |||   Gestion des commandes   |||" << std::endl;
			std::cout << "(1) Valider une commande" << std::endl;
			std::cout << "(2) Mettre a jour le statut d'une commande" << std::endl;
			std::cout << "(3) Afficher toutes les commandes passées " << std::endl;
			std::cout << "(4) Afficher toutes les commandes d'un client" << std::endl;	
			std::cout << "(5) Revenir au menu principal " << std::endl;
			std::cin >> cchoix;

			switch (cchoix) {
			case 1:
			{
				m.validerCmd(c1);
				break;
			}
			case 2:
			{
				unsigned int nCmd = 0;
				std::cin >> nCmd;

				m.updateStatutCmd(nCmd);
				break;
			}
			case 3:
			{
				m.afficherCmds();
				break;
			}
			case 4:
			{
				m.afficherCmdsClient(c1);
				break;
			}
			case 5:
				break;
			}
			break;
		}
		}
	}
	// Quitter le menu
	while (choix != 4);

	system("PAUSE");
	return EXIT_SUCCESS;

	/*
	std::cout << "Produit: " <<	p.getTitre() << std::endl;
	std::cout << "Description: " << p.getDescription() << std::endl;
	std::cout << "Il en reste " << p.getStock() << " en stock." << std::endl;
	std::cout << "Le prix est de " << p.getPrix() << " euros" << std::endl;
	p.updatePrix();

	std::cout << PS5 << std::endl;

	m.ajouterProduit(PS5);
	m.ajouterProduit(XPS);
	m.ajouterProduit(AP);
	m.afficherProduits();
	m.chercherProduit(PS5);
	m.updateQuantite(PS5);

	std::cout << c.getID() << std::endl;
	std::cout << c.getNom() << std::endl;
	std::cout << c.getPrenom() << std::endl;

	m.ajouterClient(c);
	m.ajouterClient(c0);
	m.ajouterClient(c1);

	m.afficherClient();
	m.chercherClient(c1);
	m.ajouterPanierClient(c1, PS5);
	c1.getPanier();
	*/

	return 0;
}

