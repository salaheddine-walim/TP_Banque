#pragma warning(disable : 4996)
#include "Compte.h"
#include <string>
#include <iostream>

using namespace std;

// Constructeur d'initialisation a 0
Compte::Compte()
{
    this->numCompte = 0;
    this->nomProprietaire = "";
    this->solde = 0.0;

}

// Constructeur d'initialisation avec parametres
Compte::Compte(int numc,const char* nomp, double solde)
{
    this->numCompte = numc;
    this->nomProprietaire = nomp;
    this->solde = solde;
}

bool Compte::retirerArgent(double montant)
{
    return this->solde - montant >= 0;
}

void Compte::deposerArgent(double s)
{
    this->solde += s;
}

void Compte::consulterSolde() const
{
    cout << "Votre Solde Actuel est :  " << this->solde << " MAD"<< endl;
}

void Compte::transfererArgent(Compte& c, double s) 
{
    c.solde += s;
}
