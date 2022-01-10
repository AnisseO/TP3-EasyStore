#include "Commande.h"
#include "Magasin.h"
#include "Client.h"
#include <iostream>
#include <string>


Commande::Commande(std::string client, std::vector<Produit> produits, bool statut): _client(client), _produits(produits), _statut(statut)
{
}


std::ostream& operator<<(std::ostream& os, const Commande& cmd) 
{
    std::string IdClient = "Client: " + cmd._client ; 
    std::string Statut = "Statut de la commande " + cmd._statut ;
    std::string Produits = "Produits achetes: " ;   
   

    os << IdClient << std::endl << Produits << std::endl << Statut << std::endl;
  
    return os;
    for (int i = 0; i < cmd._produits.size(); i++) {

        std::cout << cmd._produits[i] << std::endl;
    }

}

