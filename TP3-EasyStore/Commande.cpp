#include "Commande.h"
#include "Magasin.h"
#include "Client.h"
#include <iostream>
#include <string>


Commande::Commande()
{
    this->_numCmd = 0;
    this->_client = "";
    this->_produits = {};
    this->_statut = false;
}

Commande::Commande(unsigned int numCommande, std::string client, std::vector<Produit> produits, bool statut): _numCmd(numCommande), _client(client), _produits(produits), _statut(statut)
{
    _numCmd = ++_memoire;
    _memoire = _numCmd;
}

Commande::~Commande()
{
}

std::ostream& operator<<(std::ostream& os, const Commande& cmd) 
{
    std::string NumCmd = "Commande n°" + cmd._numCmd;
    std::string IdClient = "Client: " + cmd._client ; 
    std::string Statut = "Statut de la commande: " + cmd._statut ;
    std::string Produits = "Produits achet\202s: " ;   
   

    os <<NumCmd << std::endl << IdClient << std::endl << Produits << std::endl << Statut << std::endl;
  
    return os;
    for (int i = 0; i < cmd._produits.size(); i++) {

        std::cout << cmd._produits[i] << std::endl;
    }

}

