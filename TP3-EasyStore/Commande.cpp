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
    std::string IdClient = "Client: " ;  // /!\  M�thode non d�finie
    std::string Produits = "Produits achetes: "   ;   // /!\  M�thode non d�finie
    std::string Statut = "Statut de la commande "    ;  // /!\  M�thode non d�finie

    os << IdClient << std::endl << Produits << std::endl << Statut << std::endl;
    return os;

}

