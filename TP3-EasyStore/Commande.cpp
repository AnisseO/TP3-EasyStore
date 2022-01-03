#include "Commande.h"
#include "Magasin.h"
#include "Client.h"
#include <iostream>
#include <string>


Commande::Commande(std::string client, std::vector<Produit> produits, bool statut): _client(client), _produits(produits), _statut(statut)
{
}


std::ostream& operator<<(std::ostream& os, Commande& cmd) 
{
    std::string IdClient = "Client: " ;  // /!\  Méthode non définie
    std::string Produits = "Produits achetes: "   ;   // /!\  Méthode non définie
    std::string Statut = "Statut de la commande "    ;  // /!\  Méthode non définie

    os << IdClient << std::endl << Produits << std::endl << Statut << std::endl;
    return os;

}

